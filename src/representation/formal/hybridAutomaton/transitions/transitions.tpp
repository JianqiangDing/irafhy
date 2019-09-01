#include <irafhy/representation/formal/hybridAutomaton/transitions/transitions.h>
#include <cassert>

namespace irafhy
{
	template <typename Analyser>
	Transitions<Analyser>::Transitions(const std::vector<irafhy::Jump<Analyser>>& jumps)
	{
		if (jumps.empty())
			return;
		jumps_ = jumps;
	}

	template <typename Analyser>
	const std::vector<Jump<Analyser>>& Transitions<Analyser>::jumps() const
	{
		return jumps_;
	}

	template <typename Analyser>
	std::vector<Jump<Analyser>>& Transitions<Analyser>::jumps()
	{
		return jumps_;
	}

	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Transitions<Analyser>& rhs)
	{
		out << "Transitions: {" << std::endl;
		for (const auto& jump : rhs.jumps())
			out << jump << std::endl;
		out << "             }" << std::endl;
		return out;
	}
} // namespace irafhy
