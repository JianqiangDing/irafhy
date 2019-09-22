#ifndef UTILITY_PARSER_HYBRID_AUTOMATON_PARSER_H
#define UTILITY_PARSER_HYBRID_AUTOMATON_PARSER_H

#include <irafhy/utility/parser/visitor/hybridautomatonVisitor.h>

namespace irafhy
{
	template <typename Analyser, typename Verifier>
	class HybridAutomatonParser
	{
	public:
		/**
		 * @brief parse the hybrid automaton defined in the given file
		 * @param filePath path of the file
		 * @return resulting hybrid automaton instance
		 */
		static HybridAutomaton<Analyser, Verifier> parse(const std::string& filePath);
	};
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../src/utility/parser/hybridAutomatonParser.tpp"
#endif
#endif //UTILITY_PARSER_HYBRID_AUTOMATON_PARSER_H