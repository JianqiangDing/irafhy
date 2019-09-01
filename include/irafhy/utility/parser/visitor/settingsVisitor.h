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
		double strToNum(const std::string& numStr) const;

	private:
		std::vector<std::string> vars_;

	public:
		SettingsVisitor() = default;

		explicit SettingsVisitor(const std::vector<std::string>& vars);

		antlrcpp::Any visitCondition(settingsParser::ConditionContext* ctx) override;

		antlrcpp::Any visitPolytope(settingsParser::PolytopeContext* ctx) override;

		antlrcpp::Any visitHpolytope(settingsParser::HpolytopeContext* ctx) override;

		antlrcpp::Any visitVpolytope(settingsParser::VpolytopeContext* ctx) override;

		antlrcpp::Any visitMatrix(settingsParser::MatrixContext* ctx) override;

		antlrcpp::Any visitVector(settingsParser::VectorContext* ctx) override;

		antlrcpp::Any visitIntervalhull(settingsParser::IntervalhullContext* ctx) override;

		antlrcpp::Any visitInterval(settingsParser::IntervalContext* ctx) override;

		antlrcpp::Any visitTimeHorizonsetting(settingsParser::TimeHorizonsettingContext* ctx) override;

		antlrcpp::Any visitStepSetting(settingsParser::StepSettingContext* ctx) override;

		antlrcpp::Any visitPlotsetting(settingsParser::PlotsettingContext* ctx) override;

		antlrcpp::Any visitPrintsetting(settingsParser::PrintsettingContext* ctx) override;

		antlrcpp::Any visitGeometrysetting(settingsParser::GeometrysettingContext* ctx) override;

		antlrcpp::Any visitAnalysissetting(settingsParser::AnalysissettingContext* ctx) override;

		antlrcpp::Any visitMaxjumpsetting(settingsParser::MaxjumpsettingContext* ctx) override;

		antlrcpp::Any visitStartmodelidsetting(settingsParser::StartmodelidsettingContext* ctx) override;

		antlrcpp::Any visitInitialconditionsetting(settingsParser::InitialconditionsettingContext* ctx) override;

		antlrcpp::Any visitSetting(settingsParser::SettingContext* ctx) override;
	};
}
#endif //UTILITY_PARSER_VISITOR_SETTINGS_VISITOR_H