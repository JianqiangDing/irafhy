#ifndef REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_MODEL_STATE_H
#define REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_MODEL_STATE_H

#include <memory>
#include <irafhy/analyser.h>

namespace irafhy
{
	template <typename Analyser>
	class Model;

	template <typename Analyser>
	class State
	{
	private:
		const Model<Analyser>* modelPtr_;
		capd::C0Rect2Set	   initCondition_ = capd::C0Rect2Set(capd::IVector(1));

	public:
		State() = default;
		State(Model<Analyser>* modelPtr, capd::C0Rect2Set& initCondition);
		State(const Model<Analyser>* modelPtr, const capd::C0Rect2Set& initCondition);
		// State(const std::shared_ptr<Model<Analyser>>& modelPtr, const capd::C0Rect2Set& initCondition);
		~State() = default;
		bool				   operator<(const State<Analyser>& rhs) const;
		const Model<Analyser>* modelPtr() const;
		capd::C0Rect2Set	   initCondition() const;
	};
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../../../src/representation/formal/hybridAutomaton/locations/model/state.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_MODEL_STATE_H
