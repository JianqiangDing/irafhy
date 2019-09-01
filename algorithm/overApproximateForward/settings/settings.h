#pragma once

#include <irafhy/settings.h>

namespace irafhy
{
	class OAFSettings : public Settings
	{
	public:
		OAFSettings(const Settings& settings);

		void help() const override;
	};
} // namespace irafhy
