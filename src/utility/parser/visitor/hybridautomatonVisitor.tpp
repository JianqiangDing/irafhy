#include <irafhy/representation/formal/hybridAutomaton/hybridautomaton.h>
#include <irafhy/utility/parser/visitor/locationsVisitor.h>
#include <irafhy/utility/parser/visitor/transitionsVisitor.h>
#include <irafhy/utility/parser/visitor/hybridautomatonVisitor.h>

namespace irafhy
{
	template <typename Analyser, typename Verifier>
	antlrcpp::Any HybridAutomatonVisitor<Analyser, Verifier>::visitHybridautomatonid(
		hybridautomatonParser::HybridautomatonidContext* ctx)
	{
		std::string id;
		for (const auto& varCtx : ctx->VARIABLE())
		{
			std::string str = varCtx->getText();
			if (id.empty())
			{
				id = str;
			}
			else
			{
				id += " " + str;
			}
		}
		return id;
	}

	template <typename Analyser, typename Verifier>
	antlrcpp::Any HybridAutomatonVisitor<Analyser, Verifier>::visitVariables(
		hybridautomatonParser::VariablesContext* ctx)
	{
		std::vector<std::string> vars;
		for (const auto& varCtx : ctx->VARIABLE())
		{
			std::string var = varCtx->getText();
			vars.emplace_back(var);
		}
		return vars;
	}

	template <typename Analyser, typename Verifier>
	antlrcpp::Any HybridAutomatonVisitor<Analyser, Verifier>::visitHybridautomaton(
		hybridautomatonParser::HybridautomatonContext* ctx)
	{
		std::string							id   = visit(ctx->hybridautomatonid());
		std::vector<std::string>			vars = visit(ctx->variables());
		LocationsVisitor<Analyser>			locationsVisitor(vars);
		Locations<Analyser>					locations = locationsVisitor.visit(ctx->locations());
		TransitionsVisitor<Analyser>		transitionsVisitor(vars);
		Transitions<Analyser>				transitions = transitionsVisitor.visit(ctx->transitions());
		HybridAutomaton<Analyser, Verifier> hybridAutomaton
			= HybridAutomaton<Analyser, Verifier>(locations, transitions);
		hybridAutomaton.setID(id);
		hybridAutomaton.setVariables(vars);
		return hybridAutomaton;
	}
} // namespace irafhy