#ifndef REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_LOCATIONS_H
#define REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_LOCATIONS_H

#include <irafhy/representation/formal/hybridAutomaton/locations/model/model.h>

namespace irafhy
{
	template <typename Analyser>
	class Locations
	{
	private:
		std::vector<Model<Analyser>> models_;

	public:
		Locations() = default;
		explicit Locations(const std::vector<Model<Analyser>>& models);
		~Locations() = default;
		std::vector<Model<Analyser>> models() const;
		const Model<Analyser>*		 modelPtr(const std::string& modelID) const;
		void						 constructJumps(std::vector<Jump<Analyser>>& jumps);
	};
	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Locations<Analyser>& rhs);
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../../src/representation/formal/hybridAutomaton/locations/locations.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_LOCATIONS_H