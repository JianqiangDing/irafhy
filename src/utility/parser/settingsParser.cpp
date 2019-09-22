#include <irafhy/utility/parser/settingsParser.h>

namespace irafhy
{
	Settings SettingsParser::parse(const std::string& filePath, const std::vector<std::string>& vars)
	{
		if (filePath.empty() || vars.empty())
			return Settings();
		std::ifstream					thisIfstream(filePath);
		antlr4::ANTLRInputStream		settingAntlrInputStream(thisIfstream);
		settingsLexer					settingLexer(&settingAntlrInputStream);
		antlr4::CommonTokenStream		settingCommonTokenStream(&settingLexer);
		settingsParser					settingParser(&settingCommonTokenStream);
		settingsParser::SettingContext* settingContext = settingParser.setting();
		irafhy::SettingsVisitor			settingsVisitor(vars);
		return settingsVisitor.visit(settingContext);
	}
}