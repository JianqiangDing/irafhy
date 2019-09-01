#ifndef UTILITY_PARSER_VISITOR_HYBRID_AUTOMATON_VISITOR_H
#define UTILITY_PARSER_VISITOR_HYBRID_AUTOMATON_VISITOR_H

#include <antlr4-runtime/antlr4-common.h>
#include <antlr4-runtime/antlr4-runtime.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonLexer.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonParser.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonBaseVisitor.h>

namespace irafhy
{
	template <typename Analyser, typename Verifier>
	class HybridAutomatonVisitor : public hybridautomatonBaseVisitor
	{
	public:
		HybridAutomatonVisitor() = default;

		antlrcpp::Any visitHybridautomatonid(hybridautomatonParser::HybridautomatonidContext* ctx) override;

		antlrcpp::Any visitVariables(hybridautomatonParser::VariablesContext* ctx) override;

		antlrcpp::Any visitHybridautomaton(hybridautomatonParser::HybridautomatonContext* ctx) override;
	};
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../src/utility/parser/visitor/hybridautomatonVisitor.tpp"
#endif
#endif //UTILITY_PARSER_VISITOR_HYBRID_AUTOMATON_VISITOR_H