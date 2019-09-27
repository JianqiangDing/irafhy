#ifndef UTILITY_PARSER_VISITOR_ITEM_VISITOR_H
#define UTILITY_PARSER_VISITOR_ITEM_VISITOR_H

#include <antlr4-runtime/antlr4-runtime.h>
#include <antlr4-runtime/antlr4-common.h>
#include <vector>
#include <string>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonLexer.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonParser.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonBaseVisitor.h>

namespace irafhy
{
	class ItemVisitor : public hybridautomatonBaseVisitor
	{
	private:
		/**
		 * @brief convert given string to number
		 * @param numStr given string
		 * @return resulting number
		 */
		[[nodiscard]] double strToNum(const std::string& numStr) const;

	private:
		/**
		 * @brief variables of hybrid automaton
		 */
		std::vector<std::string> vars_;

	public:
		/**
		 * @brief constructor
		 */
		ItemVisitor();
		/**
		 * @brief constructor with given variables
		 * @param vars given variables of hybrid automaton
		 */
		explicit ItemVisitor(const std::vector<std::string>& vars);
		/**
		 * @brief visitor of tangent function
		 * @param ctx context of tangent function
		 * @return tangent function instance
		 */
		antlrcpp::Any visitTanExp(hybridautomatonParser::TanExpContext* ctx) override;
		/**
		 * @brief visitor of sqr function
		 * @param ctx context of sqrt function
		 * @return sqrt function instance
		 */
		antlrcpp::Any visitSqrExp(hybridautomatonParser::SqrExpContext* ctx) override;
		/**
		 * @brief constant visitor
		 * @param ctx context of constant
		 * @return constant instance
		 */
		antlrcpp::Any visitConstant(hybridautomatonParser::ConstantContext* ctx) override;
		/**
		 * @brief visitor of arc sin function
		 * @param ctx context of arc sin function
		 * @return arc sin function instance
		 */
		antlrcpp::Any visitAsinhExp(hybridautomatonParser::AsinhExpContext* ctx) override;
		/**
		 * @brief visitor of arc cos function
		 * @param ctx context of arc cos function
		 * @return arc cos function instance
		 */
		antlrcpp::Any visitAcosExp(hybridautomatonParser::AcosExpContext* ctx) override;
		/**
		 * @brief visitor of arc coth function
		 * @param ctx context of arc coth function
		 * @return arc coth function instance
		 */
		antlrcpp::Any visitAcothExp(hybridautomatonParser::AcothExpContext* ctx) override;
		/**
		 * @brief visitor of arc cosh function
		 * @param ctx context of arc cosh function
		 * @return arc cosh function instance
		 */
		antlrcpp::Any visitAcoshExp(hybridautomatonParser::AcoshExpContext* ctx) override;
		/**
		 * @brief visitor of cos function
		 * @param ctx context of cos function
		 * @return cos function instance
		 */
		antlrcpp::Any visitCosExp(hybridautomatonParser::CosExpContext* ctx) override;
		/**
		 * @brief visitor of power function
		 * @param ctx context of power function
		 * @return power function instance
		 */
		antlrcpp::Any visitPowExp(hybridautomatonParser::PowExpContext* ctx) override;
		/**
		 * @brief visitor of coth function
		 * @param ctx context of coth function
		 * @return coth function instance
		 */
		antlrcpp::Any visitCothExp(hybridautomatonParser::CothExpContext* ctx) override;
		/**
		 * @brief visitor of positive function
		 * @param ctx context of positive function
		 * @return positive function instance
		 */
		antlrcpp::Any visitPosExp(hybridautomatonParser::PosExpContext* ctx) override;
		/**
		 * @brief visitor of negative function
		 * @param ctx context of negative function
		 * @return negative function instance
		 */
		antlrcpp::Any visitNegExp(hybridautomatonParser::NegExpContext* ctx) override;
		/**
		 * @brief brackets visitor
		 * @param ctx context of brackets
		 * @return brackets instance
		 */
		antlrcpp::Any visitExpBra(hybridautomatonParser::ExpBraContext* ctx) override;
		/**
		 * @brief visitor of arc tanh function
		 * @param ctx context of arc tanh function
		 * @return arc tanh function instance
		 */
		antlrcpp::Any visitAtanhExp(hybridautomatonParser::AtanhExpContext* ctx) override;
		/**
		 * @brief visitor of sin function
		 * @param ctx context of sin function
		 * @return sin function instance
		 */
		antlrcpp::Any visitSinExp(hybridautomatonParser::SinExpContext* ctx) override;
		/**
		 * @brief visitor of ln function
		 * @param ctx context of ln function
		 * @return ln function instance
		 */
		antlrcpp::Any visitLnExp(hybridautomatonParser::LnExpContext* ctx) override;
		/**
		 * @brief visitor of tanh function
		 * @param ctx context of tanh function
		 * @return tanh function instance
		 */
		antlrcpp::Any visitTanhExp(hybridautomatonParser::TanhExpContext* ctx) override;
		/**
		 * @brief visitor of sqrt function
		 * @param ctx context of sqrt function
		 * @return sqrt function instance
		 */
		antlrcpp::Any visitSqrtExp(hybridautomatonParser::SqrtExpContext* ctx) override;
		/**
		 * @brief visitor of multiplication or division
		 * @param ctx context of multiplication or division
		 * @return multiplication or division instance
		 */
		antlrcpp::Any visitExpMulDiv(hybridautomatonParser::ExpMulDivContext* ctx) override;
		/**
		 * @brief visitor of arc tan function
		 * @param ctx context of arc tan function
		 * @return arc tan function instance
		 */
		antlrcpp::Any visitAtanExp(hybridautomatonParser::AtanExpContext* ctx) override;
		/**
		 * @brief visitor of arc cot function
		 * @param ctx context of arc cot function
		 * @return arc cot function instance
		 */
		antlrcpp::Any visitAcotExp(hybridautomatonParser::AcotExpContext* ctx) override;
		/**
		 * @brief visitor of exponential function
		 * @param ctx context of exponential function
		 * @return exponential function instance
		 */
		antlrcpp::Any visitExpExp(hybridautomatonParser::ExpExpContext* ctx) override;
		/**
		 * @brief visitor of cosh function
		 * @param ctx context of cosh function
		 * @return cosh function instance
		 */
		antlrcpp::Any visitCoshExp(hybridautomatonParser::CoshExpContext* ctx) override;
		/**
		 * @brief visitor of log function
		 * @param ctx context of log function
		 * @return log function instance
		 */
		antlrcpp::Any visitLogExp(hybridautomatonParser::LogExpContext* ctx) override;
		/**
		 * @brief visitor of arc sin function
		 * @param ctx context of arc sin function
		 * @return arc sin function instance
		 */
		antlrcpp::Any visitAsinExp(hybridautomatonParser::AsinExpContext* ctx) override;
		/**
		 * @brief visitor of cot function
		 * @param ctx context of cot function
		 * @return cot function instance
		 */
		antlrcpp::Any visitCotExp(hybridautomatonParser::CotExpContext* ctx) override;
		/**
		 * @brief visitor of a variable
		 * @param ctx context of a variable
		 * @return one variable instance
		 */
		antlrcpp::Any visitVariable(hybridautomatonParser::VariableContext* ctx) override;
		/**
		 * @brief visitor of sinh function
		 * @param ctx context of sinh function
		 * @return sinh function instance
		 */
		antlrcpp::Any visitSinhExp(hybridautomatonParser::SinhExpContext* ctx) override;
		/**
		 * @brief visitor of natural exponential function
		 * @param ctx context of natural exponential function
		 * @return natural exponential function instance
		 */
		antlrcpp::Any visitNexpExp(hybridautomatonParser::NexpExpContext* ctx) override;
		/**
		 * @brief visitor of addition or subtraction
		 * @param ctx context of addition or subtraction
		 * @return addition or subtraction instance
		 */
		antlrcpp::Any visitExpAddSub(hybridautomatonParser::ExpAddSubContext* ctx) override;
		/**
		 * @brief visitor of sqr function of constant expressions
		 * @param ctx context of sqr function
		 * @return resulting constant
		 */
		antlrcpp::Any visitSqrtConstExp(hybridautomatonParser::SqrtConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc coth function of constant expression
		 * @param ctx context of coth function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAcothConstExp(hybridautomatonParser::AcothConstExpContext* ctx) override;
		/**
		 * @brief visitor of log function of constant expression
		 * @param ctx context of log function
		 * @return resulting constant
		 */
		antlrcpp::Any visitLogConstExp(hybridautomatonParser::LogConstExpContext* ctx) override;
		/**
		 * @brief visitor of tanh function of constant expression
		 * @param ctx context of tahh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitTanhConstExp(hybridautomatonParser::TanhConstExpContext* ctx) override;
		/**
		 * @brief visitor of power function of constant expression
		 * @param ctx context of power function
		 * @return resulting constant
		 */
		antlrcpp::Any visitPowConstExp(hybridautomatonParser::PowConstExpContext* ctx) override;
		/**
		 * @brief visitor of positive function of constant expression
		 * @param ctx context of positive function
		 * @return resulting constant
		 */
		antlrcpp::Any visitPosConstExp(hybridautomatonParser::PosConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc tanh function of constant expression
		 * @param ctx context of arc tanh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAtanhConstExp(hybridautomatonParser::AtanhConstExpContext* ctx) override;
		/**
		 * @brief visitor of sqr function of constant expression
		 * @param ctx context of sqr function
		 * @return resulting constant
		 */
		antlrcpp::Any visitSqrConstExp(hybridautomatonParser::SqrConstExpContext* ctx) override;
		/**
		 * @brief visitor of constant expression enclosed in brackets
		 * @param ctx context of brackets enclosing a constant expression
		 * @return resulting constant
		 */
		antlrcpp::Any visitConstExpBra(hybridautomatonParser::ConstExpBraContext* ctx) override;
		/**
		 * @brief visitor of sinh function of constant expression
		 * @param ctx context of sinh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitSinhConstExp(hybridautomatonParser::SinhConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc tan function of constant expression
		 * @param ctx context of arc tan function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAtanConstExp(hybridautomatonParser::AtanConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc sinh function of constant expression
		 * @param ctx context of arc sinh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAsinhConstExp(hybridautomatonParser::AsinhConstExpContext* ctx) override;
		/**
		 * @brief visitor of constant expression
		 * @param ctx context of constant expression
		 * @return resulting constant
		 */
		antlrcpp::Any visitConstExp(hybridautomatonParser::ConstExpContext* ctx) override;
		/**
		 * @brief visitor of negative function of constant expression
		 * @param ctx context of negative function
		 * @return resulting constant
		 */
		antlrcpp::Any visitNegConstExp(hybridautomatonParser::NegConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc sin function of constant expression
		 * @param ctx context of arc sin function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAsinConstExp(hybridautomatonParser::AsinConstExpContext* ctx) override;
		/**
		 * @brief visitor of tan function of constant expression
		 * @param ctx context of tan function
		 * @return resulting constant
		 */
		antlrcpp::Any visitTanConstExp(hybridautomatonParser::TanConstExpContext* ctx) override;
		/**
		 * @brief visitor of natural exponential function of constant expression
		 * @param ctx context of natural exponential function
		 * @return resulting constant
		 */
		antlrcpp::Any visitNexpConstExp(hybridautomatonParser::NexpConstExpContext* ctx) override;
		/**
		 * @brief visitor of cos function of constant expression
		 * @param ctx context of cos expression
		 * @return resulting constant
		 */
		antlrcpp::Any visitCosConstExp(hybridautomatonParser::CosConstExpContext* ctx) override;
		/**
		 * @brief visitor of multiplication or division of constant expression
		 * @param ctx context of multiplication or division
		 * @return resulting constant
		 */
		antlrcpp::Any visitConstExpMulDiv(hybridautomatonParser::ConstExpMulDivContext* ctx) override;
		/**
		 * @brief visitor of exponential function of constant expression
		 * @param ctx context of exponential function
		 * @return resulting constant
		 */
		antlrcpp::Any visitExpConstExp(hybridautomatonParser::ExpConstExpContext* ctx) override;
		/**
		 * @brief visitor of cot function of constant expression
		 * @param ctx context of cot function
		 * @return resulting constant
		 */
		antlrcpp::Any visitCotConstExp(hybridautomatonParser::CotConstExpContext* ctx) override;
		/**
		 * @brief visitor of cosh function of constant expression
		 * @param ctx context of cosh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitCoshConstExp(hybridautomatonParser::CoshConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc cosh function of constant expression
		 * @param ctx context of arc cosh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAcoshConstExp(hybridautomatonParser::AcoshConstExpContext* ctx) override;
		/**
		 * @brief visitor of sin function of constant expression
		 * @param ctx context of sin function
		 * @return resulting constant
		 */
		antlrcpp::Any visitSinConstExp(hybridautomatonParser::SinConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc cos function of constant expression
		 * @param ctx context of constant expression
		 * @return resulting constant
		 */
		antlrcpp::Any visitAcosConstExp(hybridautomatonParser::AcosConstExpContext* ctx) override;
		/**
		 * @brief visitor of addition or subtraction of constant expression
		 * @param ctx context of addition or subtraction
		 * @return resulting constant
		 */
		antlrcpp::Any visitConstExpAddSub(hybridautomatonParser::ConstExpAddSubContext* ctx) override;
		/**
		 * @brief visitor of ln function of constant expression
		 * @param ctx context of ln function
		 * @return resulting constant
		 */
		antlrcpp::Any visitLnConstExp(hybridautomatonParser::LnConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc cot function of constant expression
		 * @param ctx context of arc cot function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAcotConstExp(hybridautomatonParser::AcotConstExpContext* ctx) override;
	};
} // namespace irafhy
#endif //UTILITY_PARSER_VISITOR_ITEM_VISITOR_H