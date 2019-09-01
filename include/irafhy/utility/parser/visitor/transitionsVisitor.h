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
		std::vector<std::string> vars_;

	public:
		TransitionsVisitor() = default;

		TransitionsVisitor(const std::vector<std::string>& vars);

		~TransitionsVisitor() override = default;

		antlrcpp::Any visitDirection(hybridautomatonParser::DirectionContext* ctx) override;

		antlrcpp::Any visitGuardcondition(hybridautomatonParser::GuardconditionContext* ctx) override;

		antlrcpp::Any visitUpdatefunction(hybridautomatonParser::UpdatefunctionContext* ctx) override;

		antlrcpp::Any visitResetmap(hybridautomatonParser::ResetmapContext* ctx) override;

		antlrcpp::Any visitJump(hybridautomatonParser::JumpContext* ctx) override;

		antlrcpp::Any visitTransitions(hybridautomatonParser::TransitionsContext* ctx) override;
	};
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../src/utility/parser/visitor/transitionsVisitor.tpp"
#endif
#endif //UTILITY_PARSER_VISITOR_TRANSITIONS_VISITOR_H