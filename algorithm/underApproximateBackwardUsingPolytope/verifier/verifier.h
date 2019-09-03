#pragma once

#include <irafhy/verifier.h>
#include <irafhy/representation/formal/hybridAutomaton/hybridautomaton.h>

namespace irafhy
{
	class UABPVerifier : public Verifier
	{
	public:
		bool verify(const Settings& settings, const void* hybridAutomaton) const override;
	};
} // namespace irafhy