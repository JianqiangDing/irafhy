#ifndef REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_MODEL_MODEL_H
#define REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_MODEL_MODEL_H

#include <memory>
#include <irafhy/settings.h>
#include <irafhy/representation/formal/hybridAutomaton/locations/model/state.h>
#include <irafhy/representation/formal/basic/system.h>
#include <irafhy/utility/definition/metaStructure.h>

namespace irafhy
{
	template <typename Analyser>
	class Jump;

	template <typename Analyser>
	class Model : public Analyser, public std::enable_shared_from_this<Model<Analyser>>
	{
	private:
		/**
		 * @brief identifier of the current mode
		 */
		std::string id_;
		/**
		 * @brief ordinary differential equations which specify the continuous dynamics of the state
		 */
		System flows_;
		/**
		 * @brief invariant condition of the current mode
		 */
		Condition invariantCondition_;
		/**
		 * @brief jumps start from the current mode
		 */
		std::vector<Jump<Analyser>> jumps_;

	private:
		/**
		 * @brief get the target state set for the duration
		 * @param duration given duration which specify the time interval
		 * @param system continuous dynamics of the mode
		 * @param initCondition initial condition of the computation
		 * @param settings settings of the computation
		 * @return resulting target reachable state set for the duration
		 */
		capd::C0Rect2Set compute(const Time&			 duration,
								 const System&			 system,
								 const capd::C0Rect2Set& initCondition,
								 const Settings&		 settings) const;

	public:
		/**
		 * @brief constructor
		 */
		Model() = default;
		/**
		 * @brief constructor with given id, flows and invariant conditions
		 * @param id identifier of the mode
		 * @param flows continuous dynamics of the mode
		 * @param invariantCondition invariant condition of the mode
		 */
		Model(const std::string& id, const System& flows, const Condition& invariantCondition);
		/**
		 * @brief destructor
		 */
		~Model() = default;
		/**
		 * @brief add the given jump to the existing jump
		 * @param jump given jump
		 */
		void setJump(const Jump<Analyser>& jump);
		/**
		 * @brief get the shared pointer to the mode
		 * @return pointer to the mode
		 */
		std::shared_ptr<Model<Analyser>> getModel();
		/**
		 * @brief get the identifier of the mode
		 * @return identifier of the mode as a string
		 */
		[[nodiscard]] std::string id() const;
		/**
		 * @brief get continuous dynamics of the mode
		 * @return the continuous dynamics of the mode
		 */
		[[nodiscard]] System flows() const;
		/**
		 * @brief get the invariant condition of the mode
		 * @return the invariant condition of the mode
		 */
		[[nodiscard]] Condition invariantCondition() const;
		/**
		 * @brief get the jumps which start from the mode
		 * @return jumps which start from the mode
		 */
		const std::vector<Jump<Analyser>>& jumps() const;
		/**
		 * @brief relational operator used for remove redundant modes
		 * @param rhs right hand side mode
		 * @return TRUE if the current mode's id is less than the right hand side's in dictionary order
		 */
		bool operator<(const Model<Analyser>& rhs) const;
		/**
		 * @brief get the reachable condition of the mode for given duration
		 * @param duration given duration
		 * @param doneJumps already done jumps
		 * @param initCondition initial condition of the simulation
		 * @param settings settings of the simulation
		 * @param nextState next State once current duration simulation done
		 * @return reachable condition of the mode
		 */
		Condition simulate(const Time&			   duration,
						   long int&			   doneJumps,
						   const capd::C0Rect2Set& initCondition,
						   const Settings&		   settings,
						   State<Analyser>&		   nextState) const;
	};

	/**
	 * @brief out the right hand side mode to standard out stream
	 * @tparam Analyser module which specify the analyser of the mode
	 * @param out given out stream
	 * @param rhs right hand side mode
	 * @return resulting out stream
	 */
	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Model<Analyser>& rhs);
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../../../src/representation/formal/hybridAutomaton/locations/model/model.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_MODEL_MODEL_H