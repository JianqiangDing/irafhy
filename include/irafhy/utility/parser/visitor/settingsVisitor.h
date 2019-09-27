#ifndef UTILITY_PARSER_VISITOR_SETTINGS_VISITOR_H
#define UTILITY_PARSER_VISITOR_SETTINGS_VISITOR_H

#include <antlr4-runtime/antlr4-runtime.h>
#include <antlr4-runtime/antlr4-common.h>
#include <vector>
#include <string>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/settingsLexer.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/settingsParser.h>
#include <irafhy/utility/parser/grammar/antlr4-runtime-cpp/settingsBaseVisitor.h>

namespace irafhy
{
	class SettingsVisitor : public settingsBaseVisitor
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
		SettingsVisitor() = default;
		/**
		 * @brief constructor with given variables of hybrid automaton
		 * @param vars given variables of hybrid automaton
		 */
		explicit SettingsVisitor(const std::vector<std::string>& vars);
		/**
		 * @brief visitor of condition
		 * @param ctx context of condition
		 * @return condition instance
		 */
		antlrcpp::Any visitCondition(settingsParser::ConditionContext* ctx) override;
		/**
		 * @brief visitor of polytope
		 * @param ctx context of polytope
		 * @return polytope instance
		 */
		antlrcpp::Any visitPolytope(settingsParser::PolytopeContext* ctx) override;
		/**
		 * @brief visitor of polytope which defined by half spaces
		 * @param ctx context of polytope
		 * @return polytope instance
		 */
		antlrcpp::Any visitHpolytope(settingsParser::HpolytopeContext* ctx) override;
		/**
		 * @brief visitor of polytope which defined by vertices
		 * @param ctx context of polytope
		 * @return polytope instance
		 */
		antlrcpp::Any visitVpolytope(settingsParser::VpolytopeContext* ctx) override;
		/**
		 * @brief visitor of matrix
		 * @param ctx context of matrix
		 * @return matrix instance
		 */
		antlrcpp::Any visitMatrix(settingsParser::MatrixContext* ctx) override;
		/**
		 * @brief visitor of vector
		 * @param ctx context of vector
		 * @return vector instance
		 */
		antlrcpp::Any visitVector(settingsParser::VectorContext* ctx) override;
		/**
		 * @brief visitor of interval hull
		 * @param ctx context of interval hull
		 * @return interval hull instance
		 */
		antlrcpp::Any visitIntervalhull(settingsParser::IntervalhullContext* ctx) override;
		/**
		 * @brief visitor of interval
		 * @param ctx context of interval
		 * @return interval instance
		 */
		antlrcpp::Any visitInterval(settingsParser::IntervalContext* ctx) override;
		/**
		 * @brief visitor of duration
		 * @param ctx context of duration
		 * @return duration instance
		 */
		antlrcpp::Any visitTimeHorizonsetting(settingsParser::TimeHorizonsettingContext* ctx) override;
		/**
		 * @brief visitor of step size
		 * @param ctx context of step size
		 * @return step size in double type
		 */
		antlrcpp::Any visitStepSetting(settingsParser::StepSettingContext* ctx) override;
		/**
		 * @brief visitor of plotting setting
		 * @param ctx context of plotting setting
		 * @return plotting setting in bool type
		 */
		antlrcpp::Any visitPlotsetting(settingsParser::PlotsettingContext* ctx) override;
		/**
		 * @brief visitor of print setting
		 * @param ctx context of print setting
		 * @return print setting in bool type
		 */
		antlrcpp::Any visitPrintsetting(settingsParser::PrintsettingContext* ctx) override;
		/**
		 * @brief visitor of geometry setting
		 * @param ctx context of geometry setting
		 * @return geometry setting in bool type
		 */
		antlrcpp::Any visitGeometrysetting(settingsParser::GeometrysettingContext* ctx) override;
		/**
		 * @brief visitor of analysis setting
		 * @param ctx context of analysis setting
		 * @return type of analysis, forward or backward
		 */
		antlrcpp::Any visitAnalysissetting(settingsParser::AnalysissettingContext* ctx) override;
		/**
		 * @brief visitor of max jumps setting
		 * @param ctx context of max jump setting
		 * @return number of max jumps
		 */
		antlrcpp::Any visitMaxjumpsetting(settingsParser::MaxjumpsettingContext* ctx) override;
		/**
		 * @brief visitor of start mode's id setting
		 * @param ctx context of start mode's id
		 * @return start mode's id in string form
		 */
		antlrcpp::Any visitStartmodelidsetting(settingsParser::StartmodelidsettingContext* ctx) override;
		/**
		 * @brief visitor of initial condition setting
		 * @param ctx context of initial condition setting
		 * @return initial condition
		 */
		antlrcpp::Any visitInitialconditionsetting(settingsParser::InitialconditionsettingContext* ctx) override;
		/**
		 * @brief visitor of settings
		 * @param ctx context of settings
		 * @return settings instance
		 */
		antlrcpp::Any visitSetting(settingsParser::SettingContext* ctx) override;
		/**
		 * @brief visitor of sqrt function of constant expression
		 * @param ctx context of sqrt function
		 * @return resulting constant
		 */
		antlrcpp::Any visitSqrtConstExp(settingsParser::SqrtConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc cot function of constant expression
		 * @param ctx context of arc cot function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAcothConstExp(settingsParser::AcothConstExpContext* ctx) override;
		/**
		 * @brief visitor of log function of constant expression
		 * @param ctx context of log function
		 * @return resulting constant
		 */
		antlrcpp::Any visitLogConstExp(settingsParser::LogConstExpContext* ctx) override;
		/**
		 * @brief visitor of tanh function of constant expression
		 * @param ctx context of tanh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitTanhConstExp(settingsParser::TanhConstExpContext* ctx) override;
		/**
		 * @brief visitor of power function of constant expression
		 * @param ctx context of power function
		 * @return resulting constant
		 */
		antlrcpp::Any visitPowConstExp(settingsParser::PowConstExpContext* ctx) override;
		/**
		 * @brief visitor of positive function of constant expression
		 * @param ctx context of positive function
		 * @return resulting constant
		 */
		antlrcpp::Any visitPosConstExp(settingsParser::PosConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc tanh function of constant expression
		 * @param ctx context of arc tanh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAtanhConstExp(settingsParser::AtanhConstExpContext* ctx) override;
		/**
		 * @brief visitor of sqr function of constant expression
		 * @param ctx context of sqr function
		 * @return resulting constant
		 */
		antlrcpp::Any visitSqrConstExp(settingsParser::SqrConstExpContext* ctx) override;
		/**
		 * @brief visitor of constant expression enclosed in brackets
		 * @param ctx context of brackets enclosing a constant expression
		 * @return resulting constant
		 */
		antlrcpp::Any visitConstExpBra(settingsParser::ConstExpBraContext* ctx) override;
		/**
		 * @brief visitor of sinh function of constant expression
		 * @param ctx context of sinh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitSinhConstExp(settingsParser::SinhConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc tan function of constant expression
		 * @param ctx context of arc tan function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAtanConstExp(settingsParser::AtanConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc sin function of constant exprssion
		 * @param ctx context of arc sin function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAsinhConstExp(settingsParser::AsinhConstExpContext* ctx) override;
		/**
		 * @brief visitor of constant expression
		 * @param ctx context of constant expression
		 * @return resulting constant
		 */
		antlrcpp::Any visitConstExp(settingsParser::ConstExpContext* ctx) override;
		/**
		 * @brief visitor of negative function of constant expression
		 * @param ctx context of negative function
		 * @return resulting constant
		 */
		antlrcpp::Any visitNegConstExp(settingsParser::NegConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc sin function of constant expression
		 * @param ctx context of arc sin function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAsinConstExp(settingsParser::AsinConstExpContext* ctx) override;
		/**
		 * @brief visitor of tan function of constant expression
		 * @param ctx context of tanh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitTanConstExp(settingsParser::TanConstExpContext* ctx) override;
		/**
		 * @brief visitor of natural exponential function of constant expression
		 * @param ctx context of natural exponential function
		 * @return resulting constant
		 */
		antlrcpp::Any visitNexpConstExp(settingsParser::NexpConstExpContext* ctx) override;
		/**
		 * @brief visitor of cos function of constant expression
		 * @param ctx context of cos function
		 * @return resulting constant
		 */
		antlrcpp::Any visitCosConstExp(settingsParser::CosConstExpContext* ctx) override;
		/**
		 * @brief visitor of multiplication or division of constant expression
		 * @param ctx context of multiplication or division
		 * @return resulting constant
		 */
		antlrcpp::Any visitConstExpMulDiv(settingsParser::ConstExpMulDivContext* ctx) override;
		/**
		 * @brief visitor of exponential function of constant expression
		 * @param ctx context of exponential function
		 * @return resulting constant
		 */
		antlrcpp::Any visitExpConstExp(settingsParser::ExpConstExpContext* ctx) override;
		/**
		 * @brief visitor of cot function of constant expression
		 * @param ctx context of cot function
		 * @return resulting constant
		 */
		antlrcpp::Any visitCotConstExp(settingsParser::CotConstExpContext* ctx) override;
		/**
		 * @brief visitor of cosh function of constant expression
		 * @param ctx context of cosh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitCoshConstExp(settingsParser::CoshConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc cosh function of constant expression
		 * @param ctx context of arc cosh function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAcoshConstExp(settingsParser::AcoshConstExpContext* ctx) override;
		/**
		 * @brief visitor of sin function of constant expression
		 * @param ctx context of sin function
		 * @return resulting constant
		 */
		antlrcpp::Any visitSinConstExp(settingsParser::SinConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc cos function of constant expression
		 * @param ctx context of arc cos function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAcosConstExp(settingsParser::AcosConstExpContext* ctx) override;
		/**
		 * @brief visitor of addition or subtraction of constant expression
		 * @param ctx context of addition or subtraction
		 * @return resulting constant
		 */
		antlrcpp::Any visitConstExpAddSub(settingsParser::ConstExpAddSubContext* ctx) override;
		/**
		 * @brief visitor of ln function of constant expression
		 * @param ctx context of ln function
		 * @return resulting constant
		 */
		antlrcpp::Any visitLnConstExp(settingsParser::LnConstExpContext* ctx) override;
		/**
		 * @brief visitor of arc cot function of constant expression
		 * @param ctx context of arc cot function
		 * @return resulting constant
		 */
		antlrcpp::Any visitAcotConstExp(settingsParser::AcotConstExpContext* ctx) override;
	};
} // namespace irafhy
#endif //UTILITY_PARSER_VISITOR_SETTINGS_VISITOR_H