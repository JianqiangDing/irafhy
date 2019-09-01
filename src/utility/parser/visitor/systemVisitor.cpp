#include <irafhy/representation/formal/basic/system.h>
#include <irafhy/utility/parser/visitor/systemVisitor.h>
#include <irafhy/utility/parser/visitor/itemVisitor.h>

namespace irafhy
{
	SystemVisitor::SystemVisitor(const std::vector<std::string>& vars)
	{
		assert(!vars.empty());
		vars_ = vars;
	}

	antlrcpp::Any SystemVisitor::visitFormula(hybridautomatonParser::FormulaContext* ctx)
	{
		ItemVisitor itemVisitor(vars_);
		Item		expression = itemVisitor.visit(ctx->expression());
		return Formula(expression);
	}

	antlrcpp::Any SystemVisitor::visitSystem(hybridautomatonParser::SystemContext* ctx)
	{
		std::vector<Formula> formulas(vars_.size());
		for (const auto& formulaCtx : ctx->formula())
		{
			std::string varName = formulaCtx->VARIABLE()->getText();
			Formula		formula = visit(formulaCtx);
			auto		iter	= std::find(vars_.begin(), vars_.end(), varName);
			if (iter == vars_.end())
			{
				std::cout << "undefined variable: " << varName << std::endl;
				exit(EXIT_FAILURE);
			}
			else
			{
				formulas[int(iter - vars_.begin())] = formula;
			}
		}
		return System(formulas);
	}
} // namespace irafhy