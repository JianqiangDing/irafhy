#include "verifier.h"
#include "../analyser/analyser.h"
#include <irafhy/utility/solver/ODESolver.h>

namespace irafhy
{
	bool UABPVerifier::verify(const Settings& settings, const void* hybridAutomaton) const
	{
		try
		{
			auto HAPtr = static_cast<const HybridAutomaton<UABPAnalyser, UABPVerifier>*>(hybridAutomaton);
			if (HAPtr->reachableConditions().size() <= 1)
				return true;
			Condition			 sucCondition  = HAPtr->reachableConditions().back();
			Condition			 preCondition  = HAPtr->reachableConditions()[HAPtr->reachableConditions().size() - 2];
			Point				 centroid	  = sucCondition.centroid();
			Time				 curDuration   = HAPtr->curDuration();
			Model<UABPAnalyser>* curModel	  = HAPtr->curModelPtr();
			Condition			 thisCondition = Condition(centroid, 0.0, settings.geometry());
			capd::C0Rect2Set	 set		   = ODESolver::solve(curModel->flows(), thisCondition.set(), curDuration);
			Condition			 result(set, settings.geometry());
			return preCondition.contains(result);
		}
		catch (std::bad_cast& e)
		{
			std::cout << e.what() << std::endl;
		}
		return false;
	}
} // namespace irafhy