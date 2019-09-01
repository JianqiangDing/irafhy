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
		std::string					sourceName_;
		std::string					targetName_;
		Model<Analyser>*			source_;
		Model<Analyser>*			target_;
		Condition					guardCondition_;
		std::vector<UpdateFunction> resetMap_;

	public:
		Jump() = default;
		Jump(const Model<Analyser>&				source,
			 const Model<Analyser>&				target,
			 const Condition&					guardCondition,
			 const std::vector<UpdateFunction>& resetMap);
		~Jump() = default;
		void						setSource(Model<Analyser>* souce);
		void						setSourceName(const std::string& sourceName);
		void						setTarget(Model<Analyser>* target);
		void						setTargetName(const std::string& targetName);
		void						setGuardCondition(const Condition& guardCondition);
		void						setResetMap(const std::vector<UpdateFunction>& resetMap);
		std::string					sourceName() const;
		std::string					targetName() const;
		Model<Analyser>*			source() const;
		Model<Analyser>*			target() const;
		Condition					guardCondition() const;
		std::vector<UpdateFunction> resetMap() const;
		bool						trigger(const Condition& in, Condition& out, const capd::interval& time) const;
	};
	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Jump<Analyser>& rhs);
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../../../src/representation/formal/hybridAutomaton/transitions/jump/jump.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_JUMP_JUMP_H