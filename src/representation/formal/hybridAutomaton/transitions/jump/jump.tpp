#include <irafhy/representation/formal/hybridAutomaton/transitions/jump/jump.h>

namespace irafhy
{
	template <typename Analyser>
	Jump<Analyser>::Jump(const irafhy::Model<Analyser>&				source,
						 const irafhy::Model<Analyser>&				target,
						 const irafhy::Condition&					guardCondition,
						 const std::vector<irafhy::UpdateFunction>& resetMap)
	{
		source_			= std::make_shared<Model<Analyser>>(source);
		target_			= std::make_shared<Model<Analyser>>(target);
		guardCondition_ = guardCondition;
		resetMap_		= resetMap;
	}

	template <typename Analyser>
	std::string Jump<Analyser>::sourceName() const
	{
		assert(!sourceName_.empty());
		return sourceName_;
	}

	template <typename Analyser>
	std::string Jump<Analyser>::targetName() const
	{
		assert(!targetName_.empty());
		return targetName_;
	}

	template <typename Analyser>
	Model<Analyser>* Jump<Analyser>::source() const
	{
		assert(source_ != nullptr);
		return source_;
	}

	template <typename Analyser>
	Model<Analyser>* Jump<Analyser>::target() const
	{
		assert(target_ != nullptr);
		return target_;
	}

	template <typename Analyser>
	Condition Jump<Analyser>::guardCondition() const
	{
		return guardCondition_;
	}

	template <typename Analyser>
	std::vector<UpdateFunction> Jump<Analyser>::resetMap() const
	{
		return resetMap_;
	}

	template <typename Analyser>
	bool Jump<Analyser>::trigger(const Condition& in, Condition& out, const capd::interval& time) const
	{
		Condition intersection = Condition::Empty(GEOMETRY(in.entity().which()));
		bool	  isNull	   = !(in.intersect(guardCondition_, intersection));
		if (isNull)
			return false;
		switch (GEOMETRY(in.entity().which()))
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				IntervalHull				intervalHullIn = boost::get<IntervalHull>(intersection.entity());
				std::vector<capd::interval> outConstraints = intervalHullIn.constraints();
				for (int index = 0; index < resetMap_.size(); ++index)
					resetMap_[index].update(time, intervalHullIn.constraints(), {}, outConstraints);
				out = Condition(IntervalHull(outConstraints));
				return true;
			}
			case GEOMETRY::POLYTOPE:
			{
				//TODO refine this part, using boundary interval hulls?? right or not??
				//vertices based condition update
				std::vector<Point> vertices = in.vertices();
				std::vector<Point> updatedVertices;
				updatedVertices.reserve(vertices.size());
				for (const auto& vertex : vertices)
				{
					std::vector<capd::interval> thisConstraints(0);
					thisConstraints.reserve(vertex.dimension());
					for (int dimIdx = 0; dimIdx < vertex.dimension(); ++dimIdx)
						thisConstraints.emplace_back(capd::interval(vertex[dimIdx]));
					std::vector<capd::interval> thisUpdatedConstraints = thisConstraints;
					for (int index = 0; index < resetMap_.size(); ++index)
						resetMap_[index].update(time, thisConstraints, {}, thisUpdatedConstraints);
					Eigen::VectorXd newCoordinate(vertex.dimension());
					for (int dimIdx = 0; dimIdx < vertex.dimension(); ++dimIdx)
						newCoordinate(dimIdx)
							= (thisUpdatedConstraints[dimIdx].leftBound() + thisUpdatedConstraints[dimIdx].rightBound())
							  / 2;
					updatedVertices.emplace_back(Point(newCoordinate));
				}
				out = Condition(Polytope(updatedVertices));
				return true;
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
	}

	template <typename Analyser>
	void Jump<Analyser>::setSource(Model<Analyser>* source)
	{
		assert(source != nullptr);
		source_ = source;
	}

	template <typename Analyser>
	void Jump<Analyser>::setSourceName(const std::string& sourceName)
	{
		assert(!sourceName.empty());
		sourceName_ = sourceName;
	}

	template <typename Analyser>
	void Jump<Analyser>::setTarget(Model<Analyser>* target)
	{
		assert(target != nullptr);
		target_ = target;
	}

	template <typename Analyser>
	void Jump<Analyser>::setTargetName(const std::string& targetName)
	{
		assert(!targetName.empty());
		targetName_ = targetName;
	}

	template <typename Analyser>
	void Jump<Analyser>::setGuardCondition(const Condition& guardCondition)
	{
		guardCondition_ = guardCondition;
	}

	template <typename Analyser>
	void Jump<Analyser>::setResetMap(const std::vector<UpdateFunction>& resetMap)
	{
		resetMap_ = resetMap;
	}

	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Jump<Analyser>& rhs)
	{
		out << "Jump: {" << std::endl;
		out << "From model [" << rhs.sourceName() << "] to [" << rhs.targetName() << "]" << std::endl;
		out << "Guard Condition: " << std::endl;
		out << rhs.guardCondition() << std::endl;
		out << "Reset Map: {" << std::endl;
		for (const auto& updateFunction : rhs.resetMap())
			out << updateFunction << std::endl;
		out << "}" << std::endl;
		return out;
	}
} // namespace irafhy