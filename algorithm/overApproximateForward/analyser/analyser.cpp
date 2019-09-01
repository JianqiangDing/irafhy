#include "analyser.h"
#include <irafhy/utility/solver/ODESolver.h>

namespace irafhy
{
	capd::C0Rect2Set OAFAnalyser::compute(const irafhy::Time&	 duration,
										  const irafhy::System&   system,
										  const capd::C0Rect2Set& initCondition,
										  const irafhy::Settings& settings) const
	{
		try
		{
			return ODESolver::solve(system, initCondition, duration);
		}
		catch (const std::bad_cast& e)
		{
			std::cout << e.what() << std::endl;
			exit(EXIT_FAILURE);
		}
	}
} // namespace irafhy