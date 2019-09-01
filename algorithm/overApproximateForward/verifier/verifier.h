#pragma once

#include <irafhy/verifier.h>
#include <irafhy/representation/formal/hybridAutomaton/hybridautomaton.h>

namespace irafhy
{
	class OAFVerifier : public Verifier
	{
	public:
		bool verify(const Settings& settings, const void* hybridAutomaton) const;
	};
} // namespace irafhy
