#ifndef VERIFIER_H
#define VERIFIER_H

#include <irafhy/settings.h>

namespace irafhy
{
	class Verifier
	{
	public:
		/**
		 * @brief destructor
		 */
		virtual ~Verifier() = default;
		/**
		 * @brief check if the simulation should be terminated or not
		 * @param settings related settings of the simulation
		 * @param hybridAutomaton hybrid automaton object
		 * @return TRUE if the simulation can go on
		 */
		virtual bool verify(const Settings& settings, const void* hybridAutomaton) const = 0;
	};
} // namespace irafhy
#endif // VERIFIER_H