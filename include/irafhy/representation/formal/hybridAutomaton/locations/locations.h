#ifndef REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_LOCATIONS_H
#define REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_LOCATIONS_H

#include <irafhy/representation/formal/hybridAutomaton/locations/model/model.h>

namespace irafhy
{
	template <typename Analyser>
	class Locations
	{
	private:
		/**
		 * @brief modes of the hybrid automaton
		 */
		std::vector<Model<Analyser>> models_;

	public:
		/**
		 * @brief constructor
		 */
		Locations() = default;
		/**
		 * @brief constructor with given modes
		 * @param models given modes
		 */
		explicit Locations(const std::vector<Model<Analyser>>& models);
		/**
		 * @brief destructor
		 */
		~Locations() = default;
		/**
		 * @brief get the modes of the hybrid automaton
		 * @return the modes of the hybrid automaton
		 */
		std::vector<Model<Analyser>> models() const;
		/**
		 * @brief get the pointer of the mode with given id
		 * @param modelID id of the target mode
		 * @return pointer of target mode with given id, nullptr if the no mode with given id
		 */
		const Model<Analyser>* modelPtr(const std::string& modelID) const;
		/**
		 * @brief construct the jumps among given modes
		 * @param jumps given modes
		 */
		void constructJumps(std::vector<Jump<Analyser>>& jumps);
	};

	/**
	 * @brief out the right hand side locations object to standard stream
	 * @tparam Analyser module which specify the analyser of the hybrid automaton
	 * @param out the out stream
	 * @param rhs given out stream
	 * @return resulting out stream
	 */
	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Locations<Analyser>& rhs);
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../../src/representation/formal/hybridAutomaton/locations/locations.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_LOCATIONS_H