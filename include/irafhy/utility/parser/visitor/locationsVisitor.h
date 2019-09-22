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
		/**
		 * @brief variables of hybrid automaton
		 */
		std::vector<std::string> vars_;

	public:
		/**
		 * @brief constructor
		 */
		LocationsVisitor() = default;
		/**
		 * @brief constructor with given variables
		 * @param vars given variables
		 */
		explicit LocationsVisitor(const std::vector<std::string>& vars);
		/**
		 * @brief destructor
		 */
		~LocationsVisitor() override = default;
		/**
		 * @brief visitor of mode's id
		 * @param ctx context of mode's id
		 * @return mode's id in string form
		 */
		antlrcpp::Any visitModelid(hybridautomatonParser::ModelidContext* ctx) override;
		/**
		 * @brief visitor of continuous dynamics
		 * @param ctx context of continuous dynamics
		 * @return continuous dynamics instance
		 */
		antlrcpp::Any visitFlows(hybridautomatonParser::FlowsContext* ctx) override;
		/**
		 * @brief visitor of invariant condition
		 * @param ctx context of invariant condition
		 * @return invariant condition instance
		 */
		antlrcpp::Any visitInvariantcondition(hybridautomatonParser::InvariantconditionContext* ctx) override;
		/**
		 * @brief visitor of mode
		 * @param ctx context of mode
		 * @return mode instance
		 */
		antlrcpp::Any visitModel(hybridautomatonParser::ModelContext* ctx) override;
		/**
		 * @brief visitor of locations
		 * @param ctx context of locations
		 * @return locations instance
		 */
		antlrcpp::Any visitLocations(hybridautomatonParser::LocationsContext* ctx) override;
	};
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../src/utility/parser/visitor/locationsVisitor.tpp"
#endif
#endif //UTILITY_PARSER_VISITOR_LOCATIONS_VISITOR_H