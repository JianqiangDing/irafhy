#pragma once

#include <irafhy/analyser.h>
#include <irafhy/representation/geometric/intervalHull.h>
#include "../settings/settings.h"

namespace irafhy
{
	class OAFAnalyser : public irafhy::Analyser
	{
	public:
		capd::C0Rect2Set compute(const irafhy::Time&	 duration,
								 const irafhy::System&   system,
								 const capd::C0Rect2Set& initCondition,
								 const Settings&		 settings) const override;
	};
} // namespace irafhy
