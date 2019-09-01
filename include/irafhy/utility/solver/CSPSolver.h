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
		static std::vector<IntervalHull> solve(const IntervalHull& intervalHull, double epsilon);
		static std::vector<IntervalHull> branchPruneSolve(const IntervalHull& intervalHull, double epsilon);
		static std::vector<IntervalHull> branchPruneSolve(const Constraints& constraints, double epsilon);
	};
} // namespace irafhy
#endif //UTILITY_SOLVER_CSP_SOLVER_H