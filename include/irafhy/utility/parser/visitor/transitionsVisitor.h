#ifndef UTILITY_PARSER_VISITOR_TRANSITIONS_VISITOR_H
#define UTILITY_PARSER_VISITOR_TRANSITIONS_VISITOR_H

#include <antlr4-runtime/antlr4-runtime.h>
#include <antlr4-runtime/antlr4-common.h>
#include <vector>
#include <string>
#include <memory>
#include <irafhy/representation/formal/hybridAutomaton/locations/model/model.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonLexer.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonParser.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonBaseVisitor.h>

namespace irafhy
{
	template <typename Analyser>
	class TransitionsVisitor : public hybridautomatonBaseVisitor
	{
	private:
		/**
		 * @brief variables of hybrid automaton
		 */
		std::vector<std::string> vars_;

	public:
		/**
		 * @brief constructor
		 */
		TransitionsVisitor() = default;
		/**
		 * @brief constructor with given variables
		 * @param vars variables of hybrid automaton
		 */
		TransitionsVisitor(const std::vector<std::string>& vars);
		/**
		 * @brief destructor
		 */
		~TransitionsVisitor() override = default;
		/**
		 * @brief visitor of direction
		 * @param ctx context of direction
		 * @return direction instance
		 */
		antlrcpp::Any visitDirection(hybridautomatonParser::DirectionContext* ctx) override;
		/**
		 * @brief visitor of guard condition
		 * @param ctx context of guard condition
		 * @return guard condition instance
		 */
		antlrcpp::Any visitGuardcondition(hybridautomatonParser::GuardconditionContext* ctx) override;
		/**
		 * @brief visitor of update function
		 * @param ctx context of update function
		 * @return update function instance
		 */
		antlrcpp::Any visitUpdatefunction(hybridautomatonParser::UpdatefunctionContext* ctx) override;
		/**
		 * @brief visitor of reset map
		 * @param ctx context of reset map
		 * @return reset map instance
		 */
		antlrcpp::Any visitResetmap(hybridautomatonParser::ResetmapContext* ctx) override;
		/**
		 * @brief visitor of jump
		 * @param ctx context of jump
		 * @return jump instance
		 */
		antlrcpp::Any visitJump(hybridautomatonParser::JumpContext* ctx) override;
		/**
		 * @brief visitor of transitions
		 * @param ctx context of transitions
		 * @return transitions instance
		 */
		antlrcpp::Any visitTransitions(hybridautomatonParser::TransitionsContext* ctx) override;
	};
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../src/utility/parser/visitor/transitionsVisitor.tpp"
#endif
#endif //UTILITY_PARSER_VISITOR_TRANSITIONS_VISITOR_H