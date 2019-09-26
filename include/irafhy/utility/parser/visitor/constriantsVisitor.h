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
		/**
		 * @brief variables of the hybrid automaton
		 */
		std::vector<std::string> vars_;
		/**
		 * @brief convert given string to number
		 * @param numStr given string
		 * @return resulting number
		 */
		[[nodiscard]] double strToNum(const std::string& numStr) const;

	public:
		/**
		 * @brief constructor
		 * @param vars variables of the hybrid automaton
		 */
		explicit ConstraintsVisitor(const std::vector<std::string>& vars);
		/**
		 * @brief constraints visitor
		 * @param ctx context of constraints
		 * @return resulting constraints instance
		 */
		antlrcpp::Any visitConstraints(hybridautomatonParser::ConstraintsContext* ctx) override;
		/**
		 * @brief constraint visitor
		 * @param ctx context of constraint
		 * @return resulting constraint instance
		 */
		antlrcpp::Any visitConstraint(hybridautomatonParser::ConstraintContext* ctx) override;
	};
} // namespace irafhy
#endif //UTILITY_PARSER_VISITOR_CONSTRAINTS_VISITOR_H