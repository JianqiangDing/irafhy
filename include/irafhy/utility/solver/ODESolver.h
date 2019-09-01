#ifndef UTILITY_SOLVER_ODE_SOLVER_H
#define UTILITY_SOLVER_ODE_SOLVER_H

#include <capd/capdlib.h>
#include <irafhy/representation/formal/basic/condition.h>
#include <irafhy/representation/formal/basic/system.h>
#include <irafhy/utility/definition/metaStructure.h>

namespace irafhy
{
	class ODESolver
	{
	public:
		static capd::C0Rect2Set solve(const System&			  system,
									  const capd::C0Rect2Set& set,
									  const Time&			  duration,
									  int					  TMOrder = 30);
	};
} // namespace irafhy

#endif //UTILITY_SOLVER_ODE_SOLVER_H