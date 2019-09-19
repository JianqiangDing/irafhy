#ifndef UTILITY_PARSER_SETTINGS_PARSER_H
#define UTILITY_PARSER_SETTINGS_PARSER_H

#include <irafhy/settings.h>
#include <irafhy/utility/parser/visitor/settingsVisitor.h>

namespace irafhy
{
	class SettingsParser
	{
	public:
		static Settings parse(const std::string& filePath, const std::vector<std::string>& vars);
	};
} // namespace irafhy
#endif //UTILITY_PARSER_SETTINGS_PARSER_H
