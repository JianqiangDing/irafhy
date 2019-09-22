#ifndef UTILITY_PARSER_SETTINGS_PARSER_H
#define UTILITY_PARSER_SETTINGS_PARSER_H

#include <irafhy/settings.h>
#include <irafhy/utility/parser/visitor/settingsVisitor.h>

namespace irafhy
{
	class SettingsParser
	{
	public:
		/**
		 * @brief parse the setting from the given file
		 * @param filePath path of the file
		 * @param vars variables of the related hybrid automaton
		 * @return resulting settings instance
		 */
		static Settings parse(const std::string& filePath, const std::vector<std::string>& vars);
	};
} // namespace irafhy
#endif //UTILITY_PARSER_SETTINGS_PARSER_H
