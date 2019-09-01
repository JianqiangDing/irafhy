#ifndef UTILITY_PARSER_VISITOR_LOCATIONS_VISITOR_H
#define UTILITY_PARSER_VISITOR_LOCATIONS_VISITOR_H

#include <antlr4-runtime/antlr4-common.h>
#include <antlr4-runtime/antlr4-runtime.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonLexer.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonParser.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonBaseVisitor.h>
#include <vector>
#include <string>

namespace irafhy
{
	template <typename Analyser>
	class LocationsVisitor : public hybridautomatonBaseVisitor
	{
	private:
		std::vector<std::string> vars_;

	public:
		LocationsVisitor() = default;

		explicit LocationsVisitor(const std::vector<std::string>& vars);

		~LocationsVisitor() override = default;

		antlrcpp::Any visitModelid(hybridautomatonParser::ModelidContext* ctx) override;

		antlrcpp::Any visitFlows(hybridautomatonParser::FlowsContext* ctx) override;

		antlrcpp::Any visitInvariantcondition(hybridautomatonParser::InvariantconditionContext* ctx) override;

		antlrcpp::Any visitModel(hybridautomatonParser::ModelContext* ctx) override;

		antlrcpp::Any visitLocations(hybridautomatonParser::LocationsContext* ctx) override;
	};
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../src/utility/parser/visitor/locationsVisitor.tpp"
#endif
#endif //UTILITY_PARSER_VISITOR_LOCATIONS_VISITOR_H