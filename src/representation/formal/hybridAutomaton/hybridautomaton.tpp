#include <irafhy/representation/formal/hybridAutomaton/hybridautomaton.h>
#include <iostream>

namespace irafhy
{
	template <typename Analyser, typename Verifier>
	HybridAutomaton<Analyser, Verifier>::HybridAutomaton()
	{
		id_					 = "HYBRID_AUTOMATON_DEFAULT";
		locations_			 = Locations<Analyser>();
		transitions_		 = Transitions<Analyser>();
		timeSequence_		 = std::vector<capd::interval>(0);
		reachableConditions_ = std::vector<Condition>(0);
	}

	template <typename Analyser, typename Verifier>
	const Model<Analyser>* HybridAutomaton<Analyser, Verifier>::startModelPtr(const Settings& settings) const
	{
		return locations_.modelPtr(settings.startModelID());
	}

	template <typename Analyser, typename Verifier>
	void HybridAutomaton<Analyser, Verifier>::constructTransitions()
	{
		locations_.constructJumps(transitions_.jumps());
	}

	template <typename Analyser, typename Verifier>
	Condition HybridAutomaton<Analyser, Verifier>::durationSimulate(const Time&		 duration,
																	const Settings&  settings,
																	State<Analyser>& curWork,
																	long int&		 doneJumps)
	{
		Condition curReachableCondition
			= curWork.modelPtr()->simulate(duration, doneJumps, curWork.initCondition(), settings, curWork);
		return curReachableCondition;
	}

	template <typename Analyser, typename Verifier>
	bool HybridAutomaton<Analyser, Verifier>::verify(const Settings& settings) const
	{
		return Verifier::verify(settings, this);
	}

	template <typename Analyser, typename Verifier>
	HybridAutomaton<Analyser, Verifier>::HybridAutomaton(const Locations<Analyser>&   locations,
														 const Transitions<Analyser>& transitions)
	{
		id_					 = "HYBRID_AUTOMATON_DEFAULT";
		locations_			 = locations;
		transitions_		 = transitions;
		timeSequence_		 = std::vector<capd::interval>(0);
		reachableConditions_ = std::vector<Condition>(0);
	}

	template <typename Analyser, typename Verifier>
	void HybridAutomaton<Analyser, Verifier>::setID(const std::string& id)
	{
		assert(!id.empty());
		id_ = id;
	}

	template <typename Analyser, typename Verifier>
	void HybridAutomaton<Analyser, Verifier>::setVariables(const std::vector<std::string>& variables)
	{
		assert(!variables.empty());
		variables_ = variables;
	}

	template <typename Analyser, typename Verifier>
	void HybridAutomaton<Analyser, Verifier>::setLocations(const Locations<Analyser>& locations)
	{
		locations_ = locations;
	}

	template <typename Analyser, typename Verifier>
	void HybridAutomaton<Analyser, Verifier>::setTransitions(const Transitions<Analyser>& transitions)
	{
		transitions_ = transitions;
	}

	template <typename Analyser, typename Verifier>
	std::string HybridAutomaton<Analyser, Verifier>::id() const
	{
		assert(!id_.empty());
		return id_;
	}

	template <typename Analyser, typename Verifier>
	std::vector<std::string> HybridAutomaton<Analyser, Verifier>::variables() const
	{
		assert(!variables_.empty());
		return variables_;
	}

	template <typename Analyser, typename Verifier>
	Locations<Analyser> HybridAutomaton<Analyser, Verifier>::locations() const
	{
		return locations_;
	}

	template <typename Analyser, typename Verifier>
	Transitions<Analyser> HybridAutomaton<Analyser, Verifier>::transitions() const
	{
		return transitions_;
	}

	template <typename Analyser, typename Verifier>
	std::vector<capd::interval> HybridAutomaton<Analyser, Verifier>::timeSequence() const
	{
		assert(!timeSequence_.empty());
		return timeSequence_;
	}

	template <typename Analyser, typename Verifier>
	std::vector<Condition> HybridAutomaton<Analyser, Verifier>::reachableConditions() const
	{
		assert(!reachableConditions_.empty());
		return reachableConditions_;
	}

	template <typename Analyser, typename Verifier>
	Time HybridAutomaton<Analyser, Verifier>::curDuration() const
	{
		assert(curDuration_.range() > 0);
		return curDuration_;
	}

	template <typename Analyser, typename Verifier>
	Model<Analyser>* HybridAutomaton<Analyser, Verifier>::curModelPtr() const
	{
		assert(curModelPtr_ != nullptr);
		return curModelPtr_;
	}

	template <typename Analyser, typename Verifier>
	void HybridAutomaton<Analyser, Verifier>::initialize()
	{
		constructTransitions();
		//TODO something else
	}

	template <typename Analyser, typename Verifier>
	void HybridAutomaton<Analyser, Verifier>::simulate(const Settings& settings)
	{
		initialize();
		reachableConditions_.clear();
		if (settings.duration().range() <= 0)
			return;
		State<Analyser> curWork(startModelPtr(settings), settings.initCondition().set());
		long int		simulateSteps = static_cast<long int>(settings.duration().range() / settings.step());
		assert(simulateSteps >= 1);
		double   simulateStep = settings.duration().range() / simulateSteps;
		long int doneSteps	= 1;
		long int doneJumps	= 0;
		while (doneSteps <= simulateSteps && doneJumps < settings.maxJump())
		{
			double timeStart = settings.duration().start() + static_cast<double>(doneSteps - 1) * simulateStep;
			double timeEnd   = settings.duration().start() + static_cast<double>(doneSteps) * simulateStep;
			curDuration_	 = Time(timeStart, timeEnd);
			curModelPtr_	 = const_cast<Model<Analyser>*>(curWork.modelPtr());
			Condition durationReachableCondition = durationSimulate(curDuration_, settings, curWork, doneJumps);
			timeSequence_.emplace_back(capd::interval(timeStart, timeEnd));
			reachableConditions_.emplace_back(durationReachableCondition);
			std::cout.precision(10);
			std::cout << "duration: " << curDuration_ << " finished" << std::endl;
			if (!verify(settings))
			{
				std::cout << "verification failed during duration: " << curDuration_ << std::endl;
				break;
			}
			++doneSteps;
		}
	}

	template <typename Analyser, typename Verifier>
	std::ostream& operator<<(std::ostream& out, const HybridAutomaton<Analyser, Verifier>& rhs)
	{
		out << "HA: {" << std::endl;
		out << rhs.id() << std::endl;
		out << rhs.locations() << std::endl;
		out << rhs.transitions() << std::endl;
		out << "   }" << std::endl;
		return out;
	}
} // namespace irafhy
