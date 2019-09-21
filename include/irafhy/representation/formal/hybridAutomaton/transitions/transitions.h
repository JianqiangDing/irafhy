#ifndef REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_TRANSITIONS_H
#define REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_TRANSITIONS_H

#include <memory>
#include <vector>
#include <irafhy/representation/formal/hybridAutomaton/transitions/jump/jump.h>

namespace irafhy
{
	template <typename Analyser>
	class Transitions
	{
	private:
		/**
		 * @brief jumps among modes
		 */
		std::vector<Jump<Analyser>> jumps_;

	public:
		/**
		 * @brief default consructor
		 */
		Transitions() = default;
		/**
		 * @brief copy constructor
		 * @param transitions given transition
		 */
		Transitions(const Transitions<Analyser>& transitions) = default;
		/**
		 * @brief move constructor
		 * @param transitions given transitions
		 */
		Transitions(Transitions<Analyser>&& transitions) noexcept = default;
		/**
		 * @brief constructor with given jumps
		 * @param jumps given jumps
		 */
		explicit Transitions(const std::vector<Jump<Analyser>>& jumps);
		/**
		 * @brief destructor
		 */
		~Transitions() = default;
		/**
		 * @brief get the jumps among modes
		 * @return jumps among modes
		 */
		const std::vector<Jump<Analyser>>& jumps() const;
		/**
		 * @brief get the jumps among modes
		 * @return jumps among modes
		 */
		std::vector<Jump<Analyser>>& jumps();
		/**
		 * @brief assignment operator
		 * @param rhs right hand side of the operator
		 * @return resulting transition object
		 */
		Transitions<Analyser>& operator=(const Transitions<Analyser>& rhs) = default;
		/**
		 * @brief assignment operator
		 * @param rhs right hand side of the operator
		 * @return resulting transition object
		 */
		Transitions<Analyser>& operator=(Transitions<Analyser>&& rhs) noexcept = default;
	};

	/**
	 * @brief out the right hand side transitions object to standard out stream
	 * @tparam Analyser module which specify the analyser of the hybrid automaton
	 * @param out given out stream
	 * @param rhs right hand side transitions object
	 * @return resulting out stream
	 */
	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Transitions<Analyser>& rhs);
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../../src/representation/formal/hybridAutomaton/transitions/transitions.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_TRANSITIONS_H