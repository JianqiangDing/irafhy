#include <irafhy/representation/formal/hybridAutomaton/transitions/jump/updateFunction.h>
#include <irafhy/representation/formal/hybridAutomaton/transitions/transitions.h>
#include <irafhy/utility/parser/visitor/definitionVisitor.h>
#include <irafhy/utility/parser/visitor/itemVisitor.h>
#include <irafhy/utility/parser/visitor/transitionsVisitor.h>

namespace irafhy
{
	template <typename Analyser>
	TransitionsVisitor<Analyser>::TransitionsVisitor(const std::vector<std::string>& vars)
	{
		assert(!vars.empty());
		vars_ = vars;
	}

	template <typename Analyser>
	antlrcpp::Any TransitionsVisitor<Analyser>::visitDirection(hybridautomatonParser::DirectionContext* ctx)
	{
		assert(ctx->VARIABLE().size() == 2);
		std::string source = ctx->VARIABLE(0)->getText();
		std::string target = ctx->VARIABLE(1)->getText();
		return std::pair<std::string, std::string>(source, target);
	}

	template <typename Analyser>
	antlrcpp::Any TransitionsVisitor<Analyser>::visitGuardcondition(hybridautomatonParser::GuardconditionContext* ctx)
	{
		assert(!vars_.empty());
		Condition guardCondition;
		if (!ctx->condition()->isEmpty())
		{
			DefinitionVisitor definitionVisitor(vars_);
			guardCondition = definitionVisitor.visit(ctx->condition());
		}
		return guardCondition;
	}

	template <typename Analyser>
	antlrcpp::Any TransitionsVisitor<Analyser>::visitUpdatefunction(hybridautomatonParser::UpdatefunctionContext* ctx)
	{
		assert(!vars_.empty());
		std::string varName = ctx->VARIABLE()->getText();
		ItemVisitor itemVisitor(vars_);
		Item		expression = itemVisitor.visit(ctx->expression());
		Formula		formula(expression);
		auto		iter = std::find(vars_.begin(), vars_.end(), varName);
		if (iter == vars_.end())
			exit(EXIT_FAILURE);
		long		   varIndex = static_cast<long>(iter - vars_.begin());
		UpdateFunction updateFunction(formula, varIndex);
		return updateFunction;
	}

	template <typename Analyser>
	antlrcpp::Any TransitionsVisitor<Analyser>::visitResetmap(hybridautomatonParser::ResetmapContext* ctx)
	{
		std::vector<UpdateFunction> resetMap;
		if (ctx->updatefunction().empty())
			return resetMap;
		for (const auto& updateFunctionCtx : ctx->updatefunction())
		{
			UpdateFunction updateFunction = visit(updateFunctionCtx);
			resetMap.emplace_back(updateFunction);
		}
		return resetMap;
	}

	template <typename Analyser>
	antlrcpp::Any TransitionsVisitor<Analyser>::visitJump(hybridautomatonParser::JumpContext* ctx)
	{
		std::pair<std::string, std::string> direction	  = visit(ctx->direction());
		Condition							guardCondition = visit(ctx->guardcondition());
		std::vector<UpdateFunction>			resetMap	   = visit(ctx->resetmap());
		Jump<Analyser>						jump;
		jump.setSourceName(direction.first);
		jump.setTargetName(direction.second);
		jump.setGuardCondition(guardCondition);
		jump.setResetMap(resetMap);
		return jump;
	}

	template <typename Analyser>
	antlrcpp::Any TransitionsVisitor<Analyser>::visitTransitions(hybridautomatonParser::TransitionsContext* ctx)
	{
		std::vector<Jump<Analyser>> jumps;
		jumps.reserve(ctx->jump().size());
		for (const auto& jumpCtx : ctx->jump())
		{
			Jump<Analyser> jump = visit(jumpCtx);
			jumps.emplace_back(jump);
		}
		return Transitions<Analyser>(jumps);
	}
} // namespace irafhy