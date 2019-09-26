#include <irafhy/utility/solver/CSPSolver.h>

namespace irafhy
{
	Eigen::MatrixXd CSPSolver::extremeVerticesEnumeration(const Eigen::MatrixXd& A, const Eigen::VectorXd& b)
	{
		if (A.rows() == 0 || A.cols() == 0 || b.rows() == 0)
		{
			return Eigen::MatrixXd::Zero(0, 0);
		}
		//ensure the given linear system is legal
		assert(A.rows() == b.rows());
		Eigen::FullPivLU<Eigen::MatrixXd> LU(A);
		assert(LU.rank() >= A.cols());
		std::vector<int> indicatorVec(A.rows(), 0);
		for (std::size_t index = 0; index < A.cols(); ++index)
			indicatorVec[index] = 1;
		std::vector<Eigen::VectorXd> intersections;
		std::vector<bool>			 indicator(A.rows(), false);
		std::fill(indicator.end() - A.cols(), indicator.end(), true);
		do
		{
			Eigen::MatrixXd constraintMatrix(A.cols(), A.cols());
			Eigen::VectorXd constraintVector(A.cols());
			int				pos = 0;
			for (std::size_t index = 0; index < A.rows(); ++index)
			{
				if (indicator[index])
				{
					constraintMatrix.row(pos) = A.row(index);
					constraintVector(pos)	  = b(index);
					++pos;
				}
			}
			Eigen::FullPivLU<Eigen::MatrixXd> curLU(constraintMatrix);
			if (curLU.rank() == A.cols())
			{
				Eigen::VectorXd intersectionCoordinate = curLU.solve(constraintVector);
				intersections.emplace_back(intersectionCoordinate);
			}
		} while (std::next_permutation(indicator.begin(), indicator.end()));
		//filter out the invalid coordinates
		std::vector<Eigen::VectorXd> validIntersections;
		for (auto& intersection : intersections)
		{
			bool			isAllSatisfy = true;
			Eigen::VectorXd curValues	 = A * intersection;
			for (std::size_t cstIdx = 0; cstIdx < curValues.rows(); ++cstIdx)
			{
				if (curValues(cstIdx) > b(cstIdx))
				{
					isAllSatisfy = false;
					break;
				}
			}
			if (isAllSatisfy)
				validIntersections.emplace_back(intersection);
		}
		intersections.clear();
		//construct the results
		Eigen::MatrixXd extremeVerticesMatrix(validIntersections.size(), A.cols());
		for (std::size_t index = 0; index < validIntersections.size(); ++index)
			extremeVerticesMatrix.row(index) = validIntersections[index];
		return extremeVerticesMatrix;
	}

	std::vector<IntervalHull> CSPSolver::exactBoundarySolve(const irafhy::IntervalHull& intervalHull, double epsilon)
	{
		assert(epsilon > 0);
		if (intervalHull.dimension() == 0)
		{
			return std::vector<IntervalHull>(0);
		}
		std::vector<capd::interval> constraints = intervalHull.constraints();
		int							dim			= intervalHull.dimension();
		std::vector<double>			axisEpsilon(dim);
		std::vector<int>			levels(dim);
		for (std::size_t dimIdx = 0; dimIdx < dim; ++dimIdx)
		{
			double curRange		= constraints[dimIdx].rightBound() - constraints[dimIdx].leftBound();
			axisEpsilon[dimIdx] = curRange / (std::ceil(curRange / epsilon));
			levels[dimIdx]		= curRange / axisEpsilon[dimIdx];
		}
		for (std::size_t dimIdx = 0; dimIdx < dim; ++dimIdx)
			constraints[dimIdx] = capd::interval(constraints[dimIdx].leftBound() /*- axisEpsilon[dimIdx] / 2*/,
												 constraints[dimIdx].rightBound() /*+ axisEpsilon[dimIdx] / 2*/);
		std::vector<IntervalHull> retIntervalHulls;
		for (int dimIdx = 1; dimIdx <= dim; ++dimIdx)
		{
			std::vector<bool> indicator(dim, false);
			std::fill(indicator.end() - dimIdx, indicator.end(), true);
			do
			{
				std::vector<std::vector<double>> possibleCoordinate(indicator.size());
				for (std::size_t idx = 0; idx < indicator.size(); ++idx)
				{
					if (indicator[idx])
					{
						possibleCoordinate[idx].emplace_back(constraints[idx].leftBound());
						possibleCoordinate[idx].emplace_back(constraints[idx].rightBound());
					}
					else
					{
						if (std::isnan(axisEpsilon[idx]))
						{
							possibleCoordinate[idx].emplace_back(
								(constraints[idx].leftBound() + constraints[idx].rightBound()) / 2);
						}
						else
						{
							double curLower = constraints[idx].leftBound() + axisEpsilon[idx] / 2;
							double curUpper = constraints[idx].rightBound() - axisEpsilon[idx] / 2;
							for (int levelIdx = 0; levelIdx < levels[idx]; ++levelIdx)
								possibleCoordinate[idx].emplace_back(curLower + levelIdx * axisEpsilon[idx]);
						}
					}
				}
				//total combinations
				int totalCombination = 1;
				for (std::size_t idx = 0; idx < indicator.size(); ++idx)
				{
					if (possibleCoordinate[idx].empty())
					{
						std::cout << "epsilon is too small to the interval constraint in dimension:" << idx
								  << std::endl;
						exit(EXIT_FAILURE);
					}
					totalCombination *= possibleCoordinate[idx].size();
				}
				for (int idx = 0; idx < totalCombination; ++idx)
				{
					std::vector<int> curOffsets(dim, 0);
					int				 curIdx = dim - 1;
					int				 auxIdx = idx;
					while (auxIdx)
					{
						curOffsets[curIdx] = auxIdx % possibleCoordinate[curIdx].size();
						auxIdx /= possibleCoordinate[curIdx].size();
						curIdx--;
					}
					std::vector<capd::interval> curConstraints;
					curConstraints.reserve(dim);
					for (int iIdx = 0; iIdx < dim; ++iIdx)
					{
						if (std::isnan(axisEpsilon[iIdx]) || indicator[iIdx])
						{
							curConstraints.emplace_back(capd::interval(possibleCoordinate[iIdx][curOffsets[iIdx]],
																	   possibleCoordinate[iIdx][curOffsets[iIdx]]));
						}
						else
						{
							double centerLeftBound = possibleCoordinate[iIdx][curOffsets[iIdx]] - axisEpsilon[iIdx] / 2;
							double centerRightBound
								= possibleCoordinate[iIdx][curOffsets[iIdx]] + axisEpsilon[iIdx] / 2;
							curConstraints.emplace_back(capd::interval(centerLeftBound, centerRightBound));
						}
					}
					retIntervalHulls.emplace_back(IntervalHull(curConstraints));
					//max allowed interval hulls
					if (retIntervalHulls.size() >= 1e6)
					{
						std::cout << "resulting more than " << 1e6
								  << " interval hulls, please solve with lower precision" << std::endl;
						return retIntervalHulls;
					}
				}

			} while (std::next_permutation(indicator.begin(), indicator.end()));
		}
		return retIntervalHulls;
	}

	std::vector<IntervalHull> CSPSolver::branchPruneSolve(const irafhy::IntervalHull& intervalHull, double epsilon)
	{
		//default set the infinite space as the potential solution space
		assert(epsilon > 0);
		if (intervalHull.dimension() == 0)
		{
			return std::vector<IntervalHull>(0);
		}
		//construct the default space in interval hull form
		std::vector<capd::interval> defaultConstraints = intervalHull.constraints();
		//construct the multimap using for storing the sub spaces
		std::vector<std::vector<capd::interval>> constraintsVec;
		std::vector<std::size_t>				 nextDimensionVec;
		constraintsVec.emplace_back(defaultConstraints);
		nextDimensionVec.emplace_back(0);
		//construct the vector to store the resulting solutions
		std::vector<IntervalHull> retIntervalHulls(0);
		while (!constraintsVec.empty())
		{
			//get the current space
			std::vector<capd::interval> curConstraints	 = constraintsVec.back();
			std::size_t					curNextDimension = nextDimensionVec.back();
			constraintsVec.pop_back();
			nextDimensionVec.pop_back();
			//check if the current space contains solutions
			bool isContainsSolution = false;
			{
				bool isInsideTheDomain = true;
				for (std::size_t index = 0; index < intervalHull.dimension(); ++index)
				{
					if (curConstraints[index].leftBound() > intervalHull.constraints()[index].rightBound()
						|| curConstraints[index].rightBound() < intervalHull.constraints()[index].leftBound())
					{
						isInsideTheDomain = false;
						break;
					}
				}
				if (!isInsideTheDomain)
					break;
				for (std::size_t index = 0; index < intervalHull.dimension(); ++index)
				{
					if (curConstraints[index].contains(intervalHull.constraints()[index].leftBound())
						|| curConstraints[index].contains(intervalHull.constraints()[index].rightBound()))
					{
						isContainsSolution = true;
						break;
					}
				}
			}
			//if FALSE, continue the procedure
			if (!isContainsSolution)
				continue;
			//if TRUE, check if the current space need to be split further or not
			bool isNeedSplit = false;
			{
				if (curNextDimension < intervalHull.dimension())
				{
					double range
						= curConstraints[curNextDimension].rightBound() - curConstraints[curNextDimension].leftBound();
					if (range <= epsilon)
						curNextDimension++;
					if (curNextDimension < intervalHull.dimension())
						isNeedSplit = true;
				}
			}
			//if TRUE, split the current space and push into the checking queue
			if (isNeedSplit)
			{
				std::vector<capd::interval> lhsConstraints = curConstraints;
				std::vector<capd::interval> rhsConstraints = curConstraints;
				double						midValue
					= (curConstraints[curNextDimension].leftBound() + curConstraints[curNextDimension].rightBound())
					  / 2.0;
				lhsConstraints[curNextDimension]
					= capd::interval(curConstraints[curNextDimension].leftBound(), midValue);
				rhsConstraints[curNextDimension]
					= capd::interval(midValue, curConstraints[curNextDimension].rightBound());
				constraintsVec.push_back(lhsConstraints);
				constraintsVec.push_back(rhsConstraints);
				nextDimensionVec.emplace_back(curNextDimension);
				nextDimensionVec.emplace_back(curNextDimension);
			}
			//if FALSE, store the current space as a solution
			else
			{
				retIntervalHulls.emplace_back(IntervalHull(curConstraints));
				//max allowed interval hulls
				if (retIntervalHulls.size() >= 1e6)
				{
					std::cout << "resulting more than " << 1e6 << " interval hulls, please solve with lower precision"
							  << std::endl;
					return retIntervalHulls;
				}
			}
		}
		//return the solutions
		return retIntervalHulls;
	}

	std::vector<IntervalHull> CSPSolver::branchPruneSolve(const Constraints& constraints, double epsilon)
	{
		//default set the infinite space as the potential solution space
		assert(epsilon > 0);
		if (constraints.dimension() == 0)
		{
			return std::vector<IntervalHull>(0);
		}
		//check if the constraints are valid input
		for (std::size_t index = 0; index < constraints.dimension(); ++index)
		{
			if (constraints[index].relation() != RELATION::LESS_THAN_OR_EQUAL_TO)
			{
				std::cout
					<< "please check the input constraints, we only support convex constraints like A * X<=B so far"
					<< std::endl;
				std::exit(EXIT_FAILURE);
			}
		}
		//construct dummy values
		capd::interval				time(0.0, 0.0);
		std::vector<capd::interval> dummyParams(0);
		//get the coefficients of the constraints
		Eigen::MatrixXd A = Eigen::MatrixXd::Zero(constraints.size(), constraints.dimension());
		Eigen::VectorXd b = Eigen::VectorXd::Zero(constraints.size());
		for (std::size_t dimIdx = 0; dimIdx < constraints.dimension(); ++dimIdx)
		{
			std::vector<capd::interval> detectVec(constraints.dimension(), capd::interval(0.0, 0.0));
			detectVec[dimIdx] = capd::interval(1.0, 1.0);
			for (std::size_t index = 0; index < constraints.size(); ++index)
			{
				capd::interval thisCoeff = constraints[index].lhsValue(time, detectVec, dummyParams);
				A(index, dimIdx)		 = thisCoeff.leftBound();
			}
		}
		for (std::size_t index = 0; index < constraints.size(); ++index)
		{
			std::vector<capd::interval> dummyVec(constraints.dimension(), capd::interval(0.0, 0.0));
			capd::interval				thisValue = constraints[index].rhsValue(time, dummyVec, dummyParams);
			b(index)							  = thisValue.leftBound();
		}
		//construct the default space in interval hull form
		std::vector<capd::interval> defaultConstraints(constraints.dimension(), capd::interval(0.0, 0.0));
		//extreme vertices enumeration
		{
			Eigen::MatrixXd extremeVertices = extremeVerticesEnumeration(A, b);
			for (std::size_t dimIdx = 0; dimIdx < extremeVertices.cols(); ++dimIdx)
			{
				double lowerBound		   = extremeVertices.col(dimIdx).minCoeff() - std::sqrt(2) * epsilon;
				double upperBound		   = extremeVertices.col(dimIdx).maxCoeff() + std::sqrt(2) * epsilon;
				defaultConstraints[dimIdx] = capd::interval(lowerBound, upperBound);
			}
		}
		//construct the vector storing the sub spaces
		std::vector<std::vector<capd::interval>> constraintsVec;
		std::vector<std::size_t>				 nextDimensionVec;
		constraintsVec.emplace_back(defaultConstraints);
		nextDimensionVec.emplace_back(0);
		//construct the vector to store the resulting solutions
		std::vector<IntervalHull> retIntervalHulls(0);
		while (!constraintsVec.empty())
		{
			//get the current space
			std::vector<capd::interval> curConstraints	 = constraintsVec.back();
			std::size_t					curNextDimension = nextDimensionVec.back();
			constraintsVec.pop_back();
			nextDimensionVec.pop_back();
			//check if the current space contains solutions
			bool isContainsSolution = false;
			{
				bool isPossible = true;
				for (std::size_t index = 0; index < constraints.size(); ++index)
				{
					capd::interval lhsValue = constraints[index].lhsValue(time, curConstraints, dummyParams);
					capd::interval rhsValue = constraints[index].rhsValue(time, curConstraints, dummyParams);
					if (lhsValue.leftBound() > rhsValue.rightBound())
					{
						isPossible = false;
						break;
					}
				}
				if (!isPossible)
					continue;
				for (std::size_t index = 0; index < constraints.size(); ++index)
				{
					capd::interval lhsValue = constraints[index].lhsValue(time, curConstraints, dummyParams);
					capd::interval rhsValue = constraints[index].rhsValue(time, curConstraints, dummyParams);
					if (lhsValue.leftBound() <= rhsValue.leftBound() && lhsValue.rightBound() >= rhsValue.rightBound())
					{
						isContainsSolution = true;
						break;
					}
				}
			}
			//if FALSE, continue the procedure
			if (!isContainsSolution)
				continue;
			//if TRUE, check if the current space need to be split further or not
			bool isNeedSplit = false;
			{
				if (curNextDimension < constraints.dimension())
				{
					double range
						= curConstraints[curNextDimension].rightBound() - curConstraints[curNextDimension].leftBound();
					if (range <= epsilon)
						curNextDimension++;
					if (curNextDimension < constraints.dimension())
						isNeedSplit = true;
				}
			}
			//if TRUE, split the current space and push into the checking queue
			if (isNeedSplit)
			{
				std::vector<capd::interval> lhsConstraints = curConstraints;
				std::vector<capd::interval> rhsConstraints = curConstraints;
				double						midValue
					= (curConstraints[curNextDimension].leftBound() + curConstraints[curNextDimension].rightBound())
					  / 2.0;
				lhsConstraints[curNextDimension]
					= capd::interval(curConstraints[curNextDimension].leftBound(), midValue);
				rhsConstraints[curNextDimension]
					= capd::interval(midValue, curConstraints[curNextDimension].rightBound());
				constraintsVec.push_back(lhsConstraints);
				constraintsVec.push_back(rhsConstraints);
				nextDimensionVec.emplace_back(curNextDimension);
				nextDimensionVec.emplace_back(curNextDimension);
			}
			//if FALSE, store the current space as a solution
			else
			{
				retIntervalHulls.emplace_back(IntervalHull(curConstraints));
				//max allowed interval hulls
				if (retIntervalHulls.size() >= 1e6)
				{
					std::cout << "resulting more than " << 1e6 << " interval hulls, please solve with lower precision"
							  << std::endl;
					return retIntervalHulls;
				}
			}
		}
		//return the solutions
		return retIntervalHulls;
	}

	std::vector<IntervalHull> CSPSolver::branchPruneSolve(const Polytope& polytope, double epsilon)
	{
		assert(epsilon > 0);
		if (polytope.empty())
			return std::vector<IntervalHull>(0);
		//get all half space constraints
		std::vector<HalfSpace> constraints = polytope.halfSpaceConstraints();
		//use point constraints to specify the domain containing solutions
		std::vector<capd::interval> spaceConstraints = polytope.constraints();
		//extend the space a little
		for (auto& spaceConstraint : spaceConstraints)
		{
			spaceConstraint = capd::interval(spaceConstraint.leftBound() - std::sqrt(2) * epsilon,
											 spaceConstraint.rightBound() + std::sqrt(2) * epsilon);
		}
		//construct dummy values
		capd::interval				time(0.0, 0.0);
		std::vector<capd::interval> dummyParams(0);
		//construct the vector storing the sub spaces
		std::vector<std::vector<capd::interval>> constraintsVec;
		std::vector<std::size_t>				 nextDimensionVec;
		constraintsVec.emplace_back(spaceConstraints);
		nextDimensionVec.emplace_back(0);
		//construct the vetor to store the resulting solutions
		std::vector<IntervalHull> retIntervalHulls(0);
		while (!constraintsVec.empty())
		{
			//get the current space
			std::vector<capd::interval> curConstraints	 = constraintsVec.back();
			std::size_t					curNextDimension = nextDimensionVec.back();
			constraintsVec.pop_back();
			nextDimensionVec.pop_back();
			//check if the current space contains solutions
			//TODO
		}
		return retIntervalHulls;
	}
} // namespace irafhy