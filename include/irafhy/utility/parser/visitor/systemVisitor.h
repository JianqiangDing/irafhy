#ifndef UTILITY_PARSER_VISITOR_SYSTEM_VISITOR_H
#define UTILITY_PARSER_VISITOR_SYSTEM_VISITOR_H

#include <antlr4-runtime/antlr4-common.h>
#include <antlr4-runtime/antlr4-runtime.h>
#include <vector>
#include <string>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonLexer.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonParser.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonBaseVisitor.h>

namespace irafhy
{
	class SystemVisitor : public hybridautomatonBaseVisitor
	{
	private:
		std::vector<std::string> vars_;

	public:
		explicit SystemVisitor(const std::vector<std::string>& vars);

		antlrcpp::Any visitSystem(hybridautomatonParser::SystemContext* ctx) override;

		antlrcpp::Any visitFormula(hybridautomatonParser::FormulaContext* ctx) override;
	};
} // namespace irafhy
#endif //UTILITY_PARSER_VISITOR_SYSTEM_VISITOR_H