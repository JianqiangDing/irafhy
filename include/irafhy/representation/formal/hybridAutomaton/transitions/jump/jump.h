#ifndef REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_JUMP_JUMP_H
#define REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_JUMP_JUMP_H

#include <irafhy/representation/formal/hybridAutomaton/transitions/jump/updateFunction.h>
#include <irafhy/representation/formal/basic/condition.h>
#include <memory>
#include <string>

namespace irafhy
{
	template <typename Analyser>
	class Model;

	template <typename Analyser>
	class Jump
	{
	private:
		/**
		 * @brief id of the source mode
		 */
		std::string sourceName_;
		/**
		 * @brief id of the target mode
		 */
		std::string targetName_;
		/**
		 * @brief pointer to the source mode
		 */
		Model<Analyser>* source_;
		/**
		 * @brief pointer to the target mode
		 */
		Model<Analyser>* target_;
		/**
		 * @brief guard condition of the jump
		 */
		Condition guardCondition_;
		/**
		 * @brief reset map of the jump
		 */
		std::vector<UpdateFunction> resetMap_;

	public:
		/**
		 * @brief constructor
		 */
		Jump() = default;
		/**
		 * @brief constructor with given information
		 * @param source source mode
		 * @param target target mode
		 * @param guardCondition guard condition of the mode
		 * @param resetMap reset map of the mode
		 */
		Jump(const Model<Analyser>&				source,
			 const Model<Analyser>&				target,
			 const Condition&					guardCondition,
			 const std::vector<UpdateFunction>& resetMap);
		/**
		 * @brief destructor
		 */
		~Jump() = default;
		/**
		 * @brief set the source of the jump with given source
		 * @param source given source
		 */
		void setSource(Model<Analyser>* source);
		/**
		 * @brief set related name of the source
		 * @param sourceName given name
		 */
		void setSourceName(const std::string& sourceName);
		/**
		 * @brief set the target of the jump with given target
		 * @param target given target
		 */
		void setTarget(Model<Analyser>* target);
		/**
		 * @brief set related name of the target
		 * @param targetName given name
		 */
		void setTargetName(const std::string& targetName);
		/**
		 * @brief set the guard condition of the jump
		 * @param guardCondition given guard condition
		 */
		void setGuardCondition(const Condition& guardCondition);
		/**
		 * @brief set the reset map of the jump
		 * @param resetMap given reset map
		 */
		void setResetMap(const std::vector<UpdateFunction>& resetMap);
		/**
		 * @brief get the name of the source mode
		 * @return the name of the source mode
		 */
		[[nodiscard]] std::string sourceName() const;
		/**
		 * @brief get the name of the target mode
		 * @return the name of the target mode
		 */
		[[nodiscard]] std::string targetName() const;
		/**
		 * @brief get the pointer to the source mode
		 * @return the pointer to the source mode
		 */
		Model<Analyser>* source() const;
		/**
		 * @brief get the pointer to the target mode
		 * @return the pointer to the target mode
		 */
		Model<Analyser>* target() const;
		/**
		 * @brief get the guard condition of the jump
		 * @return the guard condition of the jump
		 */
		[[nodiscard]] Condition guardCondition() const;
		/**
		 * @brief get the reset map of the jump
		 * @return the reset map of the jump
		 */
		[[nodiscard]] std::vector<UpdateFunction> resetMap() const;
		/**
		 * @brief check if the given condition trigger the jump, if TRUE, output the triggered condition or not
		 * @param in given input condition
		 * @param out resulting triggered condition if necessary
		 * @param time current time in interval form
		 * @return TRUE if the condition trigger the jump
		 */
		bool trigger(const Condition& in, Condition& out, const capd::interval& time) const;
	};

	/**
	 * @brief out the right hand side Jump object to standard out stream
	 * @tparam Analyser module which specify the analyser of the hybrid automaton
	 * @param out given out stream
	 * @param rhs right hand side Jump object
	 * @return resulting out stream
	 */
	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Jump<Analyser>& rhs);
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../../../src/representation/formal/hybridAutomaton/transitions/jump/jump.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_JUMP_JUMP_H