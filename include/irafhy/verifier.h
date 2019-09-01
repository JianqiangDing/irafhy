#ifndef VERIFIER_H
#define VERIFIER_H

#include <irafhy/settings.h>

namespace irafhy
{
	class Verifier
	{
	public:
		virtual ~Verifier()																 = default;
		virtual bool verify(const Settings& settings, const void* hybridAutomaton) const = 0;
	};
} // namespace irafhy
#endif // VERIFIER_H