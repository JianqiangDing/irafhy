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
		std::vector<Jump<Analyser>> jumps_;

	public:
		Transitions()											  = default;
		Transitions(const Transitions<Analyser>& transitions)	 = default;
		Transitions(Transitions<Analyser>&& transitions) noexcept = default;
		explicit Transitions(const std::vector<Jump<Analyser>>& jumps);
		~Transitions() = default;
		const std::vector<Jump<Analyser>>& jumps() const;
		std::vector<Jump<Analyser>>&	   jumps();
		Transitions<Analyser>&			   operator=(const Transitions<Analyser>& rhs) = default;
		Transitions<Analyser>&			   operator=(Transitions<Analyser>&& rhs) noexcept = default;
	};
	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Transitions<Analyser>& rhs);
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../../src/representation/formal/hybridAutomaton/transitions/transitions.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_TRANSITIONS_H