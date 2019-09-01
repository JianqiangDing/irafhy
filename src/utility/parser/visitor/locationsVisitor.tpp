#include <irafhy/representation/formal/hybridAutomaton/locations/locations.h>
#include <irafhy/utility/parser/visitor/locationsVisitor.h>
#include <irafhy/utility/parser/visitor/systemVisitor.h>
#include <irafhy/utility/parser/visitor/definitionVisitor.h>

namespace irafhy
{
	template <typename Analyser>
	LocationsVisitor<Analyser>::LocationsVisitor(const std::vector<std::string>& vars)
	{
		assert(!vars.empty());
		vars_ = vars;
	}

	template <typename Analyser>
	antlrcpp::Any LocationsVisitor<Analyser>::visitModelid(hybridautomatonParser::ModelidContext* ctx)
	{
		std::string modelID = ctx->VARIABLE()->getText();
		return modelID;
	}

	template <typename Analyser>
	antlrcpp::Any LocationsVisitor<Analyser>::visitFlows(hybridautomatonParser::FlowsContext* ctx)
	{
		assert(!vars_.empty());
		SystemVisitor systemVisitor(vars_);
		return systemVisitor.visit(ctx->system());
	}

	template <typename Analyser>
	antlrcpp::Any LocationsVisitor<Analyser>::visitInvariantcondition(
		hybridautomatonParser::InvariantconditionContext* ctx)
	{
		assert(!vars_.empty());
		DefinitionVisitor definitionVisitor(vars_);
		if (ctx->condition() != NULL)
			return definitionVisitor.visit(ctx->condition());
		return Condition::Empty();
	}

	template <typename Analyser>
	antlrcpp::Any LocationsVisitor<Analyser>::visitModel(hybridautomatonParser::ModelContext* ctx)
	{
		std::string modelID			   = visit(ctx->modelid());
		System		flows			   = visit(ctx->flows());
		Condition   invariantCondition = visit(ctx->invariantcondition());
		return Model<Analyser>(modelID, flows, invariantCondition);
	}

	template <typename Analyser>
	antlrcpp::Any LocationsVisitor<Analyser>::visitLocations(hybridautomatonParser::LocationsContext* ctx)
	{
		std::vector<Model<Analyser>> models;
		models.reserve(ctx->model().size());
		for (const auto& modelCtx : ctx->model())
		{
			Model<Analyser> model = visit(modelCtx);
			models.emplace_back(model);
		}
		return Locations<Analyser>(models);
	}
}