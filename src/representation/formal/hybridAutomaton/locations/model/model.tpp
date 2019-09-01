#include <irafhy/representation/formal/basic/condition.h>
#include <irafhy/representation/formal/hybridAutomaton/locations/model/model.h>
#include <irafhy/representation/formal/hybridAutomaton/transitions/jump/jump.h>

namespace irafhy
{
	template <typename Analyser>
	Model<Analyser>::Model(const std::string& id, const System& flows, const Condition& invariantCondition)
	{
		assert(!id.empty() && !flows.empty());
		id_					= id;
		flows_				= flows;
		invariantCondition_ = invariantCondition;
		// jumps_				= std::vector<std::weak_ptr<Jump<Analyser>>>(0);
		// jumps_ = std::vector<std::shared_ptr<Jump<Analyser>>>(0);
		jumps_ = std::vector<Jump<Analyser>>(0);
	}

	template <typename Analyser>
	std::shared_ptr<Model<Analyser>> Model<Analyser>::getModel()
	{
		return this->shared_from_this();
	}

	template <typename Analyser>
	capd::C0Rect2Set Model<Analyser>::compute(const Time&			  duration,
											  const System&			  system,
											  const capd::C0Rect2Set& initCondition,
											  const Settings&		  settings) const
	{
		return Analyser::compute(duration, system, initCondition, settings);
	}

	template <typename Analyser>
	void Model<Analyser>::setJump(const Jump<Analyser>& jump)
	{
		jumps_.emplace_back(jump);
		// jumps_.emplace_back(std::make_shared<Jump<Analyser>>(jump));
	}

	template <typename Analyser>
	std::string Model<Analyser>::id() const
	{
		assert(!id_.empty());
		return id_;
	}

	template <typename Analyser>
	System Model<Analyser>::flows() const
	{
		assert(!flows_.empty());
		return flows_;
	}

	template <typename Analyser>
	Condition Model<Analyser>::invariantCondition() const
	{
		return invariantCondition_;
	}

	template <typename Analyser>
	const std::vector<Jump<Analyser>>& Model<Analyser>::jumps() const
	{
		return jumps_;
	}

	template <typename Analyser>
	bool Model<Analyser>::operator<(const Model<Analyser>& rhs) const
	{
		return id_ < rhs.id();
	}

	template <typename Analyser>
	Condition Model<Analyser>::simulate(const Time&				duration,
										long int&				doneJumps,
										const capd::C0Rect2Set& initCondition,
										const Settings&			settings,
										State<Analyser>&		nextState) const
	{
		capd::C0Rect2Set curSet = compute(duration, this->flows(), initCondition, settings);
		Condition		 curReachableCondition(curSet);
		Condition		 intersection = Condition::Empty(settings.geometry(), initCondition.dimension());
		Condition		 retCondition = intersection;
		bool			 isNull		  = false;
		bool			 isTriggered  = false;
		if (invariantCondition_.dimension() == 0)
		{
			isNull		 = false;
			intersection = curReachableCondition;
		}
		else
		{
			isNull = !(invariantCondition_.intersect(curReachableCondition, intersection));
		}
		Condition newInitCondition = Condition::Empty(settings.geometry(), initCondition.dimension());
		for (int index = 0; index < jumps_.size(); ++index)
		{
			try
			{
				isTriggered = jumps_[index].trigger(curReachableCondition, newInitCondition, duration.end());
				if (isTriggered)
				{
					nextState = State<Analyser>(jumps_[index].target(), newInitCondition.set());
					break;
				}
			}
			catch (std::bad_weak_ptr& e)
			{
				std::cout << e.what() << std::endl;
				std::cout << "Jump Error!!!" << std::endl;
			}
		}
		if (!isTriggered && isNull)
		{
			std::cout << "Please check the locations' and transitions' configurations " << std::endl;
			exit(EXIT_FAILURE);
		}
		if (!isTriggered && !isNull)
		{
			retCondition = curReachableCondition;
			nextState	= State<Analyser>(this /*->shared_from_this()*/, curSet);
		}
		if (isTriggered)
			doneJumps++;
		if (isTriggered && isNull)
			retCondition = newInitCondition;
		if (isTriggered && !isNull)
			retCondition = intersection;
		return retCondition;
	}

	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Model<Analyser>& rhs)
	{
		out << "Model:{" << std::endl;
		out << "id: " << rhs.id() << std::endl;
		out << "flows: {" << std::endl;
		out << rhs.flows() << std::endl;
		out << "       }" << std::endl;
		out << "invariant condition: {" << std::endl;
		out << rhs.invariantCondition() << std::endl;
		out << "                     }" << std::endl;
		out << "}" << std::endl;
		return out;
	}
} // namespace irafhy