#include "analyser.h"
#include <irafhy/utility/compGeometry/convexHull.hpp>
#include <irafhy/utility/optimizer/linearProg/GLPKWrapper.h>
#include <irafhy/utility/solver/CSPSolver.h>
#include <irafhy/utility/solver/ODESolver.h>

namespace irafhy
{
	std::vector<IntervalHull> UABPAnalyser::boundary(const irafhy::Condition& condition, double epsilon) const
	{
		if (GEOMETRY(condition.entity().which()) == GEOMETRY::INTERVAL_HULL)
		{
			IntervalHull			  intervalHull = boost::get<IntervalHull>(condition.entity());
			std::vector<IntervalHull> result	   = CSPSolver::solve(intervalHull, epsilon);
			return result;
		}
		else
		{
			std::cout << "unsupported geometry input" << std::endl;
			exit(EXIT_FAILURE);
		}
	}

	std::vector<IntervalHull> UABPAnalyser::simulate(
		const irafhy::Time&						 duration,
		const irafhy::System&					 system,
		const std::vector<irafhy::IntervalHull>& boundaryIntervalHulls) const
	{
		std::vector<IntervalHull> retIntervalHulls;
		//reverse the direction of the vector field
		system.reverse();
		std::size_t index = 0;
		//cause the capd ode solver is not thread safe, so can not run in parallel
		// #pragma omp parallel for private(index) shared(boundaryIntervalHulls, retIntervalHulls, system, duration) default(none)
		// 		{
		for (index = 0; index < boundaryIntervalHulls.size(); ++index)
		{
			capd::IVector iVector(boundaryIntervalHulls[index].dimension());
			for (int dimIdx = 0; dimIdx < boundaryIntervalHulls[index].dimension(); ++dimIdx)
				iVector[dimIdx] = boundaryIntervalHulls[index].constraints()[dimIdx];
			capd::C0Rect2Set thisInitSet(iVector);
			capd::C0Rect2Set retSet = ODESolver::solve(system, thisInitSet, duration);
			iVector					= capd::IVector(retSet);
			std::vector<capd::interval> thisConstraints;
			thisConstraints.reserve(iVector.dimension());
			for (std::size_t dimIdx = 0; dimIdx < iVector.dimension(); ++dimIdx)
				thisConstraints.emplace_back(iVector[dimIdx]);
			// #pragma omp critical
			retIntervalHulls.emplace_back(IntervalHull(thisConstraints));
		}
		// }
		//restore the direction of the vector field
		system.reverse();
		return retIntervalHulls;
	}

	Polytope UABPAnalyser::constructPolytope(const std::vector<irafhy::IntervalHull>& boundary) const
	{
		std::vector<Point> allBoundaryVertices;
		for (const auto& condition : boundary)
		{
			std::vector<Point> thisVertices = condition.extremVertices();
			allBoundaryVertices.insert(allBoundaryVertices.end(), thisVertices.begin(), thisVertices.end());
		}
		return Polytope(IntervalHull(allBoundaryVertices).extremVertices());
	}

	Polytope UABPAnalyser::contraction(const irafhy::Polytope&					polytope,
									   const std::vector<irafhy::IntervalHull>& boundary,
									   bool										isExact) const
	{
		std::vector<HalfSpace> halfSpaceConstraints = polytope.halfSpaceConstraints();
		std::size_t			   conditionsCnt		= boundary.size();
		std::size_t			   constraintsCnt		= halfSpaceConstraints.size();
		//AX+C<=B
		Eigen::MatrixXd A = Eigen::MatrixXd::Zero(constraintsCnt, polytope.dimension());
		for (std::size_t index = 0; index < constraintsCnt; ++index)
			A.row(index) = halfSpaceConstraints[index].normal();
		Eigen::VectorXd C = Eigen::VectorXd::Zero(constraintsCnt);
		for (std::size_t index = 0; index < constraintsCnt; ++index)
			C(index) = halfSpaceConstraints[index].offset();
		Eigen::VectorXd candidateBu = Eigen::VectorXd::Zero(conditionsCnt);
		for (std::size_t index = 0; index < conditionsCnt; ++index)
		{
			Eigen::VectorXd curBj = Eigen::VectorXd::Zero(constraintsCnt);
			//construct the column constraints' bounding intervals
			std::vector<capd::interval> constraintColBound = boundary[index].constraints();
			//construct the row constraints' bounding intervals
			std::vector<capd::interval> constraintRowBound(constraintsCnt, capd::interval(0.0, 0.0));
			for (std::size_t boundIdx = 0; boundIdx < constraintsCnt; ++boundIdx)
				constraintRowBound[boundIdx]
					= capd::interval(std::numeric_limits<double>::infinity(), -1.0 * C(boundIdx));
			for (std::size_t constraintIdx = 0; constraintIdx < constraintsCnt; ++constraintIdx)
			{
				Eigen::VectorXd curObjCoefficients = A.row(constraintIdx);
				double			curObjConstant	 = C(constraintIdx);
				GLPKWrapper		glpkWrapper;
				glpkWrapper.init(curObjCoefficients,
								 curObjConstant,
								 A,
								 constraintRowBound,
								 constraintColBound,
								 LINEPROG_DIRECTION::MIN);
				glpkWrapper.solve(isExact);
				Evaluation curResult = glpkWrapper.result(curObjCoefficients, A, constraintRowBound);
				assert(curResult.solution() == LINEPROG_SOLUTION::OPTIMAL);
				curBj(constraintIdx) = curResult.supportValue();
			}
			candidateBu(index) = curBj.maxCoeff();
		}
		double				   bu = candidateBu.minCoeff();
		std::vector<HalfSpace> contractedHalfSpaces;
		contractedHalfSpaces.reserve(constraintsCnt);
		for (std::size_t index = 0; index < constraintsCnt; ++index)
			contractedHalfSpaces.emplace_back(HalfSpace(halfSpaceConstraints[index].normal(), C(index) - bu));
		return Polytope(contractedHalfSpaces);
	}

	capd::C0Rect2Set UABPAnalyser::compute(const Time&			   duration,
										   const System&		   system,
										   const capd::C0Rect2Set& initCondition,
										   const Settings&		   settings) const
	{
		try
		{
			//for now, we only handle interval hull
			assert(settings.geometry() == GEOMETRY::INTERVAL_HULL);
			const auto&					uabpSettings = dynamic_cast<const UABPSettings&>(settings);
			capd::IVector				capdConstraints(initCondition);
			std::vector<capd::interval> thisConstraints;
			thisConstraints.reserve(capdConstraints.dimension());
			for (std::size_t index = 0; index < capdConstraints.dimension(); ++index)
				thisConstraints.emplace_back(capdConstraints[index]);
			std::vector<IntervalHull> boundaryConditions
				= boundary(Condition(IntervalHull(thisConstraints)), uabpSettings.epsilon());
			std::vector<IntervalHull> simulatedBoundConditions = simulate(duration, system, boundaryConditions);
			Polytope				  polytopeCondition		   = constructPolytope(simulatedBoundConditions);
			Polytope				  contractedCondition
				= contraction(polytopeCondition, simulatedBoundConditions, uabpSettings.isExact());
			std::vector<capd::interval> constraints = contractedCondition.constraints();
			capd::IVector				iVector(constraints.size());
			for (std::size_t index = 0; index < constraints.size(); ++index)
				iVector[index] = constraints[index];
			return capd::C0Rect2Set(iVector);
		}
		catch (const std::bad_cast& e)
		{
			std::cout << e.what() << std::endl;
			exit(EXIT_FAILURE);
		}
	}
} // namespace irafhy