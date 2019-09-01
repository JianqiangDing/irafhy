#ifndef ANALYSER_H
#define ANALYSER_H

#include <irafhy/utility/definition/enum.h>
#include <irafhy/utility/definition/metaStructure.h>
#include <irafhy/representation/formal/basic/condition.h>
#include <irafhy/representation/formal/basic/system.h>

namespace irafhy
{
	class Settings;
	class Analyser
	{
	public:
		virtual ~Analyser()															   = default;
		[[nodiscard]] virtual capd::C0Rect2Set compute(const Time&			   duration,
													   const System&		   system,
													   const capd::C0Rect2Set& initCondition,
													   const Settings&		   settings) const = 0;
	};
} // namespace irafhy
#endif //ANALYSER_H