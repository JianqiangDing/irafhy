#ifndef UTILITY_SOLVER_CSP_SOLVER_H
#define UTILITY_SOLVER_CSP_SOLVER_H

#include <vector>
#include <queue>
#include <irafhy/representation/formal/basic/constraints.h>
#include <irafhy/representation/geometric/intervalHull.h>
#include <irafhy/representation/geometric/polytope.h>

namespace irafhy
{
	class CSPSolver
	{
	private:
		/**
		 * @brief enumerate the extreme vertices of the convex hull which defined by the given linear system Ax<=b
		 * @param A coefficient matrix of the given linear system
		 * @param b offset vector of the given linear system
		 * @return extreme vertices of the given convex hull
		 */
		static Eigen::MatrixXd extremeVerticesEnumeration(const Eigen::MatrixXd& A, const Eigen::VectorXd& b);

	public:
		/**
		 * @brief get the boundary interval hulls in specified precision
		 * @param intervalHull query interval hull
		 * @param epsilon specified precision
		 * @return resulting boundary interval hulls
		 */
		static std::vector<IntervalHull> exactBoundarySolve(const IntervalHull& intervalHull, double epsilon);
		/**
		 * @brief get the boundary interval hulls of the given interval hull in specified precision using branch and prune method
		 * @param intervalHull given interval hull
		 * @param epsilon specified precision
		 * @return resulting boundary precision
		 */
		static std::vector<IntervalHull> branchPruneSolve(const IntervalHull& intervalHull, double epsilon);
		/**
		 * @brief get the boundary interval hulls of the domain which defined by the given constraints in specified precision using branch and prune method
		 * @param constraints constraints which define the target domain
		 * @param epsilon specified precision
		 * @return resulting boundary interval hulls
		 */
		static std::vector<IntervalHull> branchPruneSolve(const Constraints& constraints, double epsilon);
		/**
		 * @brief get the boundary interval hulls of the domain which defined by the given constraints in specified precision using branch and prune method
		 * @param polytope convex polytope which define the target domain
		 * @param epsilon specified precision
		 * @return resulting boundary interval hulls
		 */
		static std::vector<IntervalHull> branchPruneSolve(const Polytope& polytope, double epsilon);
	};
} // namespace irafhy
#endif //UTILITY_SOLVER_CSP_SOLVER_H