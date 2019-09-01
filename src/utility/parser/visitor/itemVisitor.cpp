#include <irafhy/representation/formal/basic/item.h>
#include <irafhy/utility/parser/visitor/itemVisitor.h>
#include <boost/lexical_cast.hpp>

namespace irafhy
{
	double ItemVisitor::strToNum(const std::string& numStr) const
	{
		double retNum;
		try
		{
			retNum = boost::lexical_cast<double>(numStr);
		}
		catch (const boost::bad_lexical_cast& e)
		{
			std::cout << e.what() << std::endl;
			exit(EXIT_FAILURE);
		}
		return retNum;
	}

	ItemVisitor::ItemVisitor(const std::vector<std::string>& vars)
	{
		assert(!vars.empty());
		vars_ = vars;
	}

	antlrcpp::Any ItemVisitor::visitTanExp(hybridautomatonParser::TanExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::TAN));
	}

	antlrcpp::Any ItemVisitor::visitSqrExp(hybridautomatonParser::SqrExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::SQR));
	}

	antlrcpp::Any ItemVisitor::visitConstant(hybridautomatonParser::ConstantContext* ctx)
	{
		double thisNum = strToNum(ctx->getText());
		return Item(Constant(thisNum));
	}

	antlrcpp::Any ItemVisitor::visitAsinhExp(hybridautomatonParser::AsinhExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::ASINH));
	}

	antlrcpp::Any ItemVisitor::visitAcosExp(hybridautomatonParser::AcosExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::ACOS));
	}

	antlrcpp::Any ItemVisitor::visitAcothExp(hybridautomatonParser::AcothExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::ACOTH));
	}

	antlrcpp::Any ItemVisitor::visitAcoshExp(hybridautomatonParser::AcoshExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::ACOSH));
	}

	antlrcpp::Any ItemVisitor::visitCosExp(hybridautomatonParser::CosExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::COS));
	}

	antlrcpp::Any ItemVisitor::visitPowExp(hybridautomatonParser::PowExpContext* ctx)
	{
		Item lhs = visit(ctx->expression(0));
		Item rhs = visit(ctx->expression(1));
		return Item(BinaryItem(lhs, rhs, BINARY::POWER));
	}

	antlrcpp::Any ItemVisitor::visitCothExp(hybridautomatonParser::CothExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::COTH));
	}

	antlrcpp::Any ItemVisitor::visitPosExp(hybridautomatonParser::PosExpContext* ctx)
	{
		return visit(ctx->expression());
	}

	antlrcpp::Any ItemVisitor::visitNegExp(hybridautomatonParser::NegExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::OPPOSITE));
	}

	antlrcpp::Any ItemVisitor::visitExpBra(hybridautomatonParser::ExpBraContext* ctx)
	{
		return visit(ctx->expression());
	}

	antlrcpp::Any ItemVisitor::visitAtanhExp(hybridautomatonParser::AtanhExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::ATANH));
	}

	antlrcpp::Any ItemVisitor::visitSinExp(hybridautomatonParser::SinExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::SIN));
	}

	antlrcpp::Any ItemVisitor::visitLnExp(hybridautomatonParser::LnExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::LN));
	}

	antlrcpp::Any ItemVisitor::visitTanhExp(hybridautomatonParser::TanhExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::TANH));
	}

	antlrcpp::Any ItemVisitor::visitSqrtExp(hybridautomatonParser::SqrtExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::SQRT));
	}

	antlrcpp::Any ItemVisitor::visitExpMulDiv(hybridautomatonParser::ExpMulDivContext* ctx)
	{
		Item lhs = visit(ctx->expression(0));
		Item rhs = visit(ctx->expression(1));
		if (ctx->OP->getType() == hybridautomatonParser::MULTIPLY)
			return Item(BinaryItem(lhs, rhs, BINARY::MULTIPLY));
		return Item(BinaryItem(lhs, rhs, BINARY::DIVIDE));
	}

	antlrcpp::Any ItemVisitor::visitAtanExp(hybridautomatonParser::AtanExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::ATAN));
	}

	antlrcpp::Any ItemVisitor::visitAcotExp(hybridautomatonParser::AcotExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::ACOT));
	}

	antlrcpp::Any ItemVisitor::visitExpExp(hybridautomatonParser::ExpExpContext* ctx)
	{
		Item lhs = visit(ctx->expression(0));
		Item rhs = visit(ctx->expression(1));
		return Item(BinaryItem(lhs, rhs, BINARY::POWER));
	}

	antlrcpp::Any ItemVisitor::visitCoshExp(hybridautomatonParser::CoshExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::COSH));
	}

	antlrcpp::Any ItemVisitor::visitLogExp(hybridautomatonParser::LogExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::LOG));
	}

	antlrcpp::Any ItemVisitor::visitAsinExp(hybridautomatonParser::AsinExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::ASIN));
	}

	antlrcpp::Any ItemVisitor::visitCotExp(hybridautomatonParser::CotExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::LOG));
	}

	antlrcpp::Any ItemVisitor::visitVariable(hybridautomatonParser::VariableContext* ctx)
	{
		assert(!vars_.empty());
		std::string varName = ctx->getText();
		if (varName == "t")
			return Item(Variable(static_cast<long int>(-1)));
		std::vector<std::string>::iterator iter   = std::find(vars_.begin(), vars_.end(), varName);
		long int						   varIdx = iter - vars_.begin();
		return Item(Variable(varIdx));
	}

	antlrcpp::Any ItemVisitor::visitSinhExp(hybridautomatonParser::SinhExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::SINH));
	}

	antlrcpp::Any ItemVisitor::visitNexpExp(hybridautomatonParser::NexpExpContext* ctx)
	{
		Item item = visit(ctx->expression());
		return Item(UnaryItem(item, UNARY::NEXP));
	}

	antlrcpp::Any ItemVisitor::visitExpAddSub(hybridautomatonParser::ExpAddSubContext* ctx)
	{
		Item lhs = visit(ctx->expression(0));
		Item rhs = visit(ctx->expression(1));
		if (ctx->OP->getType() == hybridautomatonParser::PLUS)
			return Item(BinaryItem(lhs, rhs, BINARY::PLUS));
		return Item(BinaryItem(lhs, rhs, BINARY::MINUS));
	}
} // namespace irafhy