#ifndef UTILITY_SOLVER_CSP_SOLVER_H
#define UTILITY_SOLVER_CSP_SOLVER_H

#include <vector>
#include <queue>
#include <map>
#include <irafhy/representation/formal/basic/constraints.h>
#include <irafhy/representation/geometric/intervalHull.h>

namespace irafhy
{
	class CSPSolver
	{
	private:
		//TODO

	public:
		/**
		 * @brief get the boundary interval hulls in specified precision
		 * @param intervalHull query interval hull
		 * @param epsilon specified precision
		 * @return resulting boundary interval hulls
		 */
		static std::vector<IntervalHull> solve(const IntervalHull& intervalHull, double epsilon);
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
	};
} // namespace irafhy
#endif //UTILITY_SOLVER_CSP_SOLVER_H