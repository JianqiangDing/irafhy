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
	};
} // namespace irafhy
#endif //UTILITY_PARSER_VISITOR_SETTINGS_VISITOR_H