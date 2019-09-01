#include <irafhy/utility/solver/ODESolver.h>

namespace irafhy
{
	capd::C0Rect2Set ODESolver::solve(const irafhy::System&   system,
									  const capd::C0Rect2Set& set,
									  const irafhy::Time&	 duration,
									  int					  TMOrder)
	{
		assert(TMOrder > 0);
		int		   inDim	= set.dimension();
		int		   outDim   = set.dimension();
		int		   noParams = 0;
		auto	   function = system.odeSystem();
		capd::IMap iMap(function, inDim, outDim, noParams);
		//need to check the order of the system
		capd::ICnOdeSolver solver(iMap, TMOrder);
		capd::ICnTimeMap   timeMap(solver);
		timeMap.setStep(duration.range());
		timeMap.turnOnStepControl();
		capd::C0Rect2Set retSet(set);
		retSet.setCurrentTime(duration.start());
		timeMap(duration.end(), retSet);
		return retSet;
	}
} // namespace irafhy