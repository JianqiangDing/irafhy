#ifndef UTILITY_PARSER_VISITOR_CONSTRAINTS_VISITOR_H
#define UTILITY_PARSER_VISITOR_CONSTRAINTS_VISITOR_H

#include <vector>
#include <string>
#include <antlr4-runtime/antlr4-common.h>
#include <antlr4-runtime/antlr4-runtime.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonLexer.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonParser.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonBaseVisitor.h>

namespace irafhy
{
	class ConstraintsVisitor : public hybridautomatonBaseVisitor
	{
	private:
		std::vector<std::string> vars_;

	public:
		explicit ConstraintsVisitor(const std::vector<std::string>& vars);

		antlrcpp::Any visitConstraints(hybridautomatonParser::ConstraintsContext* ctx) override;

		antlrcpp::Any visitConstraint(hybridautomatonParser::ConstraintContext* ctx) override;
	};
} // namespace irafhy
#endif //UTILITY_PARSER_VISITOR_CONSTRAINTS_VISITOR_H