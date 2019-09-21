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
		/**
		 * @brief pointer to the model
		 */
		const Model<Analyser>* modelPtr_;
		/**
		 * @brief initial state set of the mode's simulation
		 */
		capd::C0Rect2Set initCondition_ = capd::C0Rect2Set(capd::IVector(1));

	public:
		/**
		 * @brief constructor
		 */
		State() = default;
		/**
		 * @brief copy constructor with given pointer to the mode and related initial condition
		 * @param modelPtr pointer to the mode
		 * @param initCondition initial condition
		 */
		State(Model<Analyser>* modelPtr, capd::C0Rect2Set& initCondition);
		/**
		 * @brief constructor with given pointer to the mode and related initial condition
		 * @param modelPtr pointer to the mode
		 * @param initCondition initial condition
		 */
		State(const Model<Analyser>* modelPtr, const capd::C0Rect2Set& initCondition);
		/**
		 * @brief destructor
		 */
		~State() = default;
		/**
		 * @brief relational operator used to rearrange states
		 * @param rhs right hand side state
		 * @return TRUE if current state's mode less than the right hand side one's in dictionary order
		 */
		bool operator<(const State<Analyser>& rhs) const;
		/**
		 * @brief get the pointer to the state related mode
		 * @return the pointer to the mode
		 */
		const Model<Analyser>* modelPtr() const;
		/**
		 * @brief get the initial condition of the state
		 * @return the initial condition of the state
		 */
		capd::C0Rect2Set initCondition() const;
	};
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../../../src/representation/formal/hybridAutomaton/locations/model/state.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_MODEL_STATE_H
