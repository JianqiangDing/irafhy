#include <irafhy/utility/parser/hybridAutomatonParser.h>

namespace irafhy
{
	template <typename Analyser, typename Verifier>
	HybridAutomaton<Analyser, Verifier> HybridAutomatonParser<Analyser, Verifier>::parse(const std::string& filePath)
	{
		if (filePath.empty())
			return HybridAutomaton<Analyser, Verifier>();
		std::ifstream								   thisIfstream(filePath);
		antlr4::ANTLRInputStream					   modelAntlrInputStream(thisIfstream);
		hybridautomatonLexer						   modelLexer(&modelAntlrInputStream);
		antlr4::CommonTokenStream					   modelCommonTokenStream(&modelLexer);
		hybridautomatonParser						   modelParser(&modelCommonTokenStream);
		hybridautomatonParser::HybridautomatonContext* modelContext = modelParser.hybridautomaton();
		HybridAutomatonVisitor<Analyser, Verifier>	   hybridAutomatonVisitor;
		return hybridAutomatonVisitor.visit(modelContext);
	}
}