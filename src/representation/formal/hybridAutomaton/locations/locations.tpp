#include <irafhy/representation/formal/hybridAutomaton/locations/locations.h>

namespace irafhy
{
	template <typename Analyser>
	Locations<Analyser>::Locations(const std::vector<Model<Analyser>>& models)
	{
		assert(!models.empty());
		models_ = models;
	}

	template <typename Analyser>
	std::vector<Model<Analyser>> Locations<Analyser>::models() const
	{
		assert(!models_.empty());
		return models_;
	}

	template <typename Analyser>
	const Model<Analyser>* Locations<Analyser>::modelPtr(const std::string& modelID) const
	{
		// std::shared_ptr<Model<Analyser>> retPtr = nullptr;
		const Model<Analyser>* retPtr = nullptr;
		for (const auto& model : models_)
		{
			if (modelID == model.id())
			{
				// retPtr = std::make_shared<Model<Analyser>>(model);
				retPtr = &model;
				break;
			}
		}
		if (retPtr == nullptr)
		{
			std::cout << "there does not exist one model named: " << modelID << std::endl;
			exit(EXIT_FAILURE);
		}
		return retPtr;
	}

	template <typename Analyser>
	void Locations<Analyser>::constructJumps(std::vector<Jump<Analyser>>& jumps)
	{
		std::map<std::string, std::size_t> name2IndexMap;
		std::size_t						   modelsCnt = models_.size();
		for (std::size_t index = 0; index < modelsCnt; ++index)
		{
			std::string modelName = models_[index].id();
			name2IndexMap.insert(std::pair<std::string, std::size_t>(modelName, index));
		}
		std::size_t jumpsCnt = jumps.size();
		for (std::size_t index = 0; index < jumpsCnt; ++index)
		{
			std::string sourceModelName = jumps[index].sourceName();
			std::string targetModelName = jumps[index].targetName();
			auto		sourceIter		= name2IndexMap.find(sourceModelName);
			auto		targetIter		= name2IndexMap.find(targetModelName);
			if (sourceIter != name2IndexMap.end() && targetIter != name2IndexMap.end())
			{
				jumps[index].setSource(&models_[sourceIter->second]);
				jumps[index].setTarget(&models_[targetIter->second]);
				models_[sourceIter->second].setJump(jumps[index]);
			}
			else
			{
				std::cout << "There is no model named: " << sourceModelName << ", can not construct the jump"
						  << std::endl;
			}
		}
	}

	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Locations<Analyser>& rhs)
	{
		for (const auto& model : rhs.models())
			out << model;
		return out;
	}
} // namespace irafhy