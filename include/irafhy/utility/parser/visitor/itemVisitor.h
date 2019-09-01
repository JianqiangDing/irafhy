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
		double strToNum(const std::string& numStr) const;

	private:
		std::vector<std::string> vars_;

	public:
		explicit ItemVisitor(const std::vector<std::string>& vars);

		antlrcpp::Any visitTanExp(hybridautomatonParser::TanExpContext* ctx) override;

		antlrcpp::Any visitSqrExp(hybridautomatonParser::SqrExpContext* ctx) override;

		antlrcpp::Any visitConstant(hybridautomatonParser::ConstantContext* ctx) override;

		antlrcpp::Any visitAsinhExp(hybridautomatonParser::AsinhExpContext* ctx) override;

		antlrcpp::Any visitAcosExp(hybridautomatonParser::AcosExpContext* ctx) override;

		antlrcpp::Any visitAcothExp(hybridautomatonParser::AcothExpContext* ctx) override;

		antlrcpp::Any visitAcoshExp(hybridautomatonParser::AcoshExpContext* ctx) override;

		antlrcpp::Any visitCosExp(hybridautomatonParser::CosExpContext* ctx) override;

		antlrcpp::Any visitPowExp(hybridautomatonParser::PowExpContext* ctx) override;

		antlrcpp::Any visitCothExp(hybridautomatonParser::CothExpContext* ctx) override;

		antlrcpp::Any visitPosExp(hybridautomatonParser::PosExpContext* ctx) override;

		antlrcpp::Any visitNegExp(hybridautomatonParser::NegExpContext* ctx) override;

		antlrcpp::Any visitExpBra(hybridautomatonParser::ExpBraContext* ctx) override;

		antlrcpp::Any visitAtanhExp(hybridautomatonParser::AtanhExpContext* ctx) override;

		antlrcpp::Any visitSinExp(hybridautomatonParser::SinExpContext* ctx) override;

		antlrcpp::Any visitLnExp(hybridautomatonParser::LnExpContext* ctx) override;

		antlrcpp::Any visitTanhExp(hybridautomatonParser::TanhExpContext* ctx) override;

		antlrcpp::Any visitSqrtExp(hybridautomatonParser::SqrtExpContext* ctx) override;

		antlrcpp::Any visitExpMulDiv(hybridautomatonParser::ExpMulDivContext* ctx) override;

		antlrcpp::Any visitAtanExp(hybridautomatonParser::AtanExpContext* ctx) override;

		antlrcpp::Any visitAcotExp(hybridautomatonParser::AcotExpContext* ctx) override;

		antlrcpp::Any visitExpExp(hybridautomatonParser::ExpExpContext* ctx) override;

		antlrcpp::Any visitCoshExp(hybridautomatonParser::CoshExpContext* ctx) override;

		antlrcpp::Any visitLogExp(hybridautomatonParser::LogExpContext* ctx) override;

		antlrcpp::Any visitAsinExp(hybridautomatonParser::AsinExpContext* ctx) override;

		antlrcpp::Any visitCotExp(hybridautomatonParser::CotExpContext* ctx) override;

		antlrcpp::Any visitVariable(hybridautomatonParser::VariableContext* ctx) override;

		antlrcpp::Any visitSinhExp(hybridautomatonParser::SinhExpContext* ctx) override;

		antlrcpp::Any visitNexpExp(hybridautomatonParser::NexpExpContext* ctx) override;

		antlrcpp::Any visitExpAddSub(hybridautomatonParser::ExpAddSubContext* ctx) override;
	};
} // namespace irafhy
#endif //UTILITY_PARSER_VISITOR_ITEM_VISITOR_H