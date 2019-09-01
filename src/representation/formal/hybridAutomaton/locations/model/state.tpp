#include <irafhy/representation/formal/hybridAutomaton/locations/model/state.h>

namespace irafhy
{
	template <typename Analyser>
	State<Analyser>::State(Model<Analyser>* modelPtr, capd::C0Rect2Set& initCondition)
	{
		assert(modelPtr != nullptr);
		modelPtr_	  = modelPtr;
		initCondition_ = initCondition;
	}

	template <typename Analyser>
	State<Analyser>::State(const irafhy::Model<Analyser>* modelPtr, const capd::C0Rect2Set& initCondition)
	{
		assert(modelPtr != nullptr);
		modelPtr_	  = modelPtr;
		initCondition_ = initCondition;
	}

	template <typename Analyser>
	bool State<Analyser>::operator<(const State<Analyser>& rhs) const
	{
		return (*modelPtr_) < (*rhs.model());
	}

	template <typename Analyser>
	const Model<Analyser>* State<Analyser>::modelPtr() const
	{
		assert(modelPtr_ != nullptr);
		return modelPtr_;
	}

	template <typename Analyser>
	capd::C0Rect2Set State<Analyser>::initCondition() const
	{
		assert(initCondition_.dimension() != 0);
		return initCondition_;
	}
} // namespace irafhy