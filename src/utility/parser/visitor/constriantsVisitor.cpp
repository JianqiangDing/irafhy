#include <irafhy/representation/formal/basic/constraints.h>
#include <irafhy/utility/parser/visitor/constriantsVisitor.h>
#include <irafhy/utility/parser/visitor/itemVisitor.h>
#include <boost/lexical_cast.hpp>

namespace irafhy
{
	double ConstraintsVisitor::strToNum(const std::string& numStr) const
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

	ConstraintsVisitor::ConstraintsVisitor(const std::vector<std::string>& vars)
	{
		assert(!vars.empty());
		vars_ = vars;
	}

	antlrcpp::Any ConstraintsVisitor::visitConstraint(hybridautomatonParser::ConstraintContext* ctx)
	{
		ItemVisitor itemVisitor(vars_);
		Item		lhsExpression = itemVisitor.visit(ctx->expression());
		double		rhsConstant   = itemVisitor.visit(ctx->const_expression());
		// if (ctx->NUMBER() != nullptr)
		// {
		// 	std::string numStr = ctx->NUMBER()->getText();
		// 	rhsConstant		   = strToNum(numStr);
		// }
		// else
		// {
		// 	std::string numStr = ctx->SCINUM()->getText();
		// 	rhsConstant		   = strToNum(numStr);
		// }
		// if (ctx->OP != nullptr)
		// {
		// 	switch (ctx->OP->getType())
		// 	{
		// 		case hybridautomatonParser::PLUS:
		// 			break;
		// 		case hybridautomatonParser::MINUS:
		// 		{
		// 			rhsConstant *= -1.0;
		// 			break;
		// 		}
		// 		default:
		// 			exit(EXIT_FAILURE);
		// 	}
		// }
		Item rhsExpression = Item(Constant(rhsConstant));
		switch (ctx->RELATION->getType())
		{
			case hybridautomatonParser::UNEQUAL:
				return Constraint(lhsExpression, rhsExpression, RELATION::UNEQUAL_TO);
			case hybridautomatonParser::EQUAL:
				return Constraint(lhsExpression, rhsExpression, RELATION::EQUAL_TO);
			case hybridautomatonParser::LEQ:
				return Constraint(lhsExpression, rhsExpression, RELATION::LESS_THAN_OR_EQUAL_TO);
			case hybridautomatonParser::LSS:
				return Constraint(lhsExpression, rhsExpression, RELATION::LESS_THAN);
			case hybridautomatonParser::GEQ:
				return Constraint(lhsExpression, rhsExpression, RELATION::GREATER_THAN_OR_EQUAL_TO);
			case hybridautomatonParser::GTR:
				return Constraint(lhsExpression, rhsExpression, RELATION::GREATER_THAN);
			default:
				exit(EXIT_FAILURE);
		}
	}

	antlrcpp::Any ConstraintsVisitor::visitConstraints(hybridautomatonParser::ConstraintsContext* ctx)
	{
		std::vector<Constraint> inequalities;
		inequalities.reserve(ctx->constraint().size());
		for (const auto& constraintCtx : ctx->constraint())
			inequalities.emplace_back(visit(constraintCtx));
		return Constraints(inequalities, vars_.size());
	}

} // namespace irafhy