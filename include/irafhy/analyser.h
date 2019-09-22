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
		/**
		 * @brief destructor
		 */
		virtual ~Analyser() = default;
		/**
		 * @brief get the reachable condition with given system, initial condition and setting for specified duration
		 * @param duration specified duration
		 * @param system given continuous dynamics
		 * @param initCondition initial condition of the system
		 * @param settings settings of the computation
		 * @return resulting reachable state set
		 */
		[[nodiscard]] virtual capd::C0Rect2Set compute(const Time&			   duration,
													   const System&		   system,
													   const capd::C0Rect2Set& initCondition,
													   const Settings&		   settings) const = 0;
	};
} // namespace irafhy
#endif //ANALYSER_H