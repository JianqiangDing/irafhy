#ifndef REPRESENTATION_FORMAL_HYBRID_AUTOMATON_HYBRID_AUTOMATON_H
#define REPRESENTATION_FORMAL_HYBRID_AUTOMATON_HYBRID_AUTOMATON_H

#include <irafhy/analyser.h>
#include <irafhy/verifier.h>
#include <irafhy/settings.h>
#include <irafhy/utility/definition/metaStructure.h>
#include <irafhy/representation/formal/basic/condition.h>
#include <irafhy/representation/formal/hybridAutomaton/locations/locations.h>
#include <irafhy/representation/formal/hybridAutomaton/transitions/transitions.h>
#include <vector>

namespace irafhy
{
	template <typename Analyser, typename Verifier>
	class HybridAutomaton : public Verifier
	{
	private:
		std::string					id_;
		std::vector<std::string>	variables_;
		Transitions<Analyser>		transitions_;
		Locations<Analyser>			locations_;
		std::vector<capd::interval> timeSequence_;
		std::vector<Condition>		reachableConditions_;
		Time						curDuration_;
		mutable Model<Analyser>*	curModelPtr_ = nullptr;

	private:
		const Model<Analyser>* startModelPtr(const Settings& settings) const;
		void				   constructTransitions();
		Condition			   durationSimulate(const Time&		 duration,
												const Settings&  settings,
												State<Analyser>& curWork,
												long int&		 doneJumps);
		bool				   verify(const Settings& settings) const;

	public:
		HybridAutomaton();
		HybridAutomaton(const HybridAutomaton<Analyser, Verifier>& hybridAutomaton) = default;
		HybridAutomaton(HybridAutomaton<Analyser, Verifier>&& hybridAutomaton)		= default;
		HybridAutomaton(const Locations<Analyser>& locations, const Transitions<Analyser>& transitions);
		~HybridAutomaton() = default;
		void						setID(const std::string& id);
		void						setVariables(const std::vector<std::string>& variables);
		void						setLocations(const Locations<Analyser>& locations);
		void						setTransitions(const Transitions<Analyser>& transitions);
		std::string					id() const;
		std::vector<std::string>	variables() const;
		Locations<Analyser>			locations() const;
		Transitions<Analyser>		transitions() const;
		std::vector<capd::interval> timeSequence() const;
		std::vector<Condition>		reachableConditions() const;
		Time						curDuration() const;
		Model<Analyser>*			curModelPtr() const;
		void						initialize();
		void						simulate(const Settings& settings);
	};
	template <typename Analyser, typename Verifier>
	std::ostream& operator<<(std::ostream& out, const HybridAutomaton<Analyser, Verifier>& rhs);
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../src/representation/formal/hybridAutomaton/hybridautomaton.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_HYBRID_AUTOMATON_H