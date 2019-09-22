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
		/**
		 * @brief identifier of the hybrid automation
		 */
		std::string id_;
		/**
		 * @brief variable of the system
		 */
		std::vector<std::string> variables_;
		/**
		 * @brief transitions which specify the jumps among modes
		 */
		Transitions<Analyser> transitions_;
		/**
		 * @brief set of discrete states which are also called modes
		 */
		Locations<Analyser> locations_;
		/**
		 * @brief time sequence during the computation
		 */
		std::vector<capd::interval> timeSequence_;
		/**
		 * @brief resulting reachable conditions
		 */
		std::vector<Condition> reachableConditions_;
		/**
		 * @brief current duration which specify the time interval of one iteration
		 */
		Time curDuration_;
		/**
		 * @brief pointer to the current mode
		 */
		mutable Model<Analyser>* curModelPtr_ = nullptr;

	private:
		/**
		 * get the pointer of the start mode
		 */
		const Model<Analyser>* startModelPtr(const Settings& settings) const;
		/**
		 * @brief construct the jumps among modes
		 */
		void constructTransitions();
		/**
		 * @brief simulation with given duration
		 * @param duration given time interval
		 * @param settings setting of the hybrid automaton
		 * @param curWork current work which specify the current mode and related initial condition
		 * @param doneJumps jumps already done, used to check if it is time to terminate current duration simulation
		 * @return reachable condition of the given duration
		 */
		Condition durationSimulate(const Time&		duration,
								   const Settings&  settings,
								   State<Analyser>& curWork,
								   long int&		doneJumps);
		/**
		 * @brief check if the simulation should be terminated
		 * @param settings setting of the hybrid automaton
		 * @return TRUE if the simulation can be go on, FALSE otherwise
		 */
		bool verify(const Settings& settings) const;

	public:
		/**
		 * @brief default constructor
		 */
		HybridAutomaton();
		/**
		 * @brief copy constructor
		 * @param hybridAutomaton given hybrid automaton
		 */
		HybridAutomaton(const HybridAutomaton<Analyser, Verifier>& hybridAutomaton) = default;
		/**
		 * @brief move constructor
		 * @param hybridAutomaton given hybrid automaton
		 */
		HybridAutomaton(HybridAutomaton<Analyser, Verifier>&& hybridAutomaton) = default;
		/**
		 * @brief constructor with given locations and transitions
		 * @param locations given locations which define the inside modes
		 * @param transitions given transitions which define the jumps among modes
		 */
		HybridAutomaton(const Locations<Analyser>& locations, const Transitions<Analyser>& transitions);
		/**
		 * @brief destructor
		 */
		~HybridAutomaton() = default;
		/**
		 * @brief set the identifier of the hybrid automaton
		 * @param id
		 */
		void setID(const std::string& id);
		/**
		 * @brief set the variables of the hybrid automaton
		 * @param variables variables used during the simulation
		 */
		void setVariables(const std::vector<std::string>& variables);
		/**
		 * @brief set the modes of the hybrid automation with given locations
		 * @param locations given locations
		 */
		void setLocations(const Locations<Analyser>& locations);
		/**
		 * @brief set the jumps of the hybrid automaton with given transitions
		 * @param transitions given transitions
		 */
		void setTransitions(const Transitions<Analyser>& transitions);
		/**
		 * @brief get the identifier of the hybrid automaton
		 * @return the identifier of the hybrid automaton
		 */
		std::string id() const;
		/**
		 * @brief get the variables of the hybrid automaton
		 * @return the variable of the hybrid automaton
		 */
		std::vector<std::string> variables() const;
		/**
		 * @brief get the locations of the hybrid automaton
		 * @return the locations of the hybrid automaton
		 */
		Locations<Analyser> locations() const;
		/**
		 * @brief get the transitions of the hybrid automaton
		 * @return the transitions of the hybrid automaton
		 */
		Transitions<Analyser> transitions() const;
		/**
		 * @brief get the time sequence of the simulation
		 * @return the resulting time sequence
		 */
		std::vector<capd::interval> timeSequence() const;
		/**
		 * @brief get the reachable conditions of the simulation
		 * @return the resulting reachable conditions
		 */
		std::vector<Condition> reachableConditions() const;
		/**
		 * @brief get the current duration of the simulation
		 * @return
		 */
		Time curDuration() const;
		/**
		 * @brief get the pointer to the current mode
		 * @return
		 */
		Model<Analyser>* curModelPtr() const;
		/**
		 * @brief initialize the hybrid automaton
		 */
		void initialize();
		/**
		 * @brief simulation with given settings
		 * @param settings given settings which modified by the user
		 */
		void simulate(const Settings& settings);
	};

	/**
	 * @brief out the given hybrid automaton to standard out stream
	 * @tparam Analyser module which specify the analyser of the given hybrid automaton
	 * @tparam Verifier module which specify the verifier of the given hybrid automaton
	 * @param out given out stream
	 * @param rhs right hand side hybrid automaton
	 * @return resulting out stream
	 */
	template <typename Analyser, typename Verifier>
	std::ostream& operator<<(std::ostream& out, const HybridAutomaton<Analyser, Verifier>& rhs);
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../src/representation/formal/hybridAutomaton/hybridautomaton.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_HYBRID_AUTOMATON_H