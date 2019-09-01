#include <irafhy/representation/formal/basic/constraints.h>
#include <irafhy/utility/parser/visitor/constriantsVisitor.h>
#include <irafhy/utility/parser/visitor/itemVisitor.h>

namespace irafhy
{
	ConstraintsVisitor::ConstraintsVisitor(const std::vector<std::string>& vars)
	{
		assert(!vars.empty());
		vars_ = vars;
	}

	antlrcpp::Any ConstraintsVisitor::visitConstraint(hybridautomatonParser::ConstraintContext* ctx)
	{
		ItemVisitor itemVisitor(vars_);
		Item		lhsExpression = itemVisitor.visit(ctx->expression(0));
		Item		rhsExpression = itemVisitor.visit(ctx->expression(1));
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