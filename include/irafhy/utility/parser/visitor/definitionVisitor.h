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
		/**
		 * @brief convert given string to number
		 * @param numStr given string
		 * @return resulting number
		 */
		double strToNum(const std::string& numStr) const;

	private:
		/**
		 * @brief variables of the hybrid automaton
		 */
		std::vector<std::string> vars_;

	public:
		/**
		 * @brief constructor
		 */
		DefinitionVisitor() = default;
		/**
		 * @brief constructor with given variables
		 * @param vars variables of hybrid automaton
		 */
		explicit DefinitionVisitor(const std::vector<std::string>& vars);
		/**
		 * @brief destructor
		 */
		~DefinitionVisitor() override = default;
		/**
		 * @brief condition visitor
		 * @param ctx context of condition
		 * @return condition instance
		 */
		antlrcpp::Any visitCondition(hybridautomatonParser::ConditionContext* ctx) override;
		/**
		 * @brief polytope visitor
		 * @param ctx context of polytope
		 * @return polytope instance
		 */
		antlrcpp::Any visitPolytope(hybridautomatonParser::PolytopeContext* ctx) override;
		/**
		 * @brief polytope which defined by half spaces visitor
		 * @param ctx context of polytope
		 * @return polytope instance
		 */
		antlrcpp::Any visitHpolytope(hybridautomatonParser::HpolytopeContext* ctx) override;
		/**
		 * @brief polytope which defined by extreme vertices
		 * @param ctx context of polytope
		 * @return polytope instance
		 */
		antlrcpp::Any visitVpolytope(hybridautomatonParser::VpolytopeContext* ctx) override;
		/**
		 * @brief matrix visitor
		 * @param ctx context of matrix
		 * @return matrix instance
		 */
		antlrcpp::Any visitMatrix(hybridautomatonParser::MatrixContext* ctx) override;
		/**
		 * @brief vector visitor
		 * @param ctx context of vector
		 * @return vector instance
		 */
		antlrcpp::Any visitVector(hybridautomatonParser::VectorContext* ctx) override;
		/**
		 * @brief interval hull visitor
		 * @param ctx context of interval hull
		 * @return interval hull instance
		 */
		antlrcpp::Any visitIntervalhull(hybridautomatonParser::IntervalhullContext* ctx) override;
		/**
		 * @brief interval visitor
		 * @param ctx context of interval
		 * @return interval instance
		 */
		antlrcpp::Any visitInterval(hybridautomatonParser::IntervalContext* ctx) override;
	};
} // namespace irafhy
#endif //UTILITY_PARSER_VISITOR_DEFINITION_VISITOR_H