#ifndef UTILITY_PARSER_VISITOR_DEFINITION_VISITOR_H
#define UTILITY_PARSER_VISITOR_DEFINITION_VISITOR_H

#include <antlr4-runtime/antlr4-runtime.h>
#include <antlr4-runtime/antlr4-common.h>
#include <vector>
#include <string>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonLexer.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonParser.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonBaseVisitor.h>

namespace irafhy
{
	class DefinitionVisitor : public hybridautomatonBaseVisitor
	{
	private:
		double strToNum(const std::string& numStr) const;

	private:
		std::vector<std::string> vars_;

	public:
		DefinitionVisitor() = default;

		explicit DefinitionVisitor(const std::vector<std::string>& vars);

		~DefinitionVisitor() override = default;

		antlrcpp::Any visitCondition(hybridautomatonParser::ConditionContext* ctx) override;

		antlrcpp::Any visitPolytope(hybridautomatonParser::PolytopeContext* ctx) override;

		antlrcpp::Any visitHpolytope(hybridautomatonParser::HpolytopeContext* ctx) override;

		antlrcpp::Any visitVpolytope(hybridautomatonParser::VpolytopeContext* ctx) override;

		antlrcpp::Any visitMatrix(hybridautomatonParser::MatrixContext* ctx) override;

		antlrcpp::Any visitVector(hybridautomatonParser::VectorContext* ctx) override;

		antlrcpp::Any visitIntervalhull(hybridautomatonParser::IntervalhullContext* ctx) override;

		antlrcpp::Any visitInterval(hybridautomatonParser::IntervalContext* ctx) override;
	};
} // namespace irafhy
#endif //UTILITY_PARSER_VISITOR_DEFINITION_VISITOR_H