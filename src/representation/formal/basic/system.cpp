#include <irafhy/representation/formal/basic/system.h>

namespace irafhy
{
	System::System(const std::vector<irafhy::Formula>& formulas) { formulas_ = formulas; }

	std::function<void(
		capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
		System::assign(const std::function<capd::autodiff::Node(
						   capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>& f,
					   int																					 index)
	{
		return [f, index](capd::autodiff::Node t,
						  capd::autodiff::Node in[],
						  int				   dimIn,
						  capd::autodiff::Node out[],
						  int				   dimOut,
						  capd::autodiff::Node params[],
						  int				   nParams) {
			assert(index >= 0 && index < dimOut);
			out[index] = f(t, in, dimIn, params, nParams);
		};
	}

	std::function<void(
		capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
		System::group(const std::function<void(capd::autodiff::Node,
											   capd::autodiff::Node[],
											   int,
											   capd::autodiff::Node[],
											   int,
											   capd::autodiff::Node[],
											   int)>& lhs,
					  const std::function<void(capd::autodiff::Node,
											   capd::autodiff::Node[],
											   int,
											   capd::autodiff::Node[],
											   int,
											   capd::autodiff::Node[],
											   int)>& rhs)
	{
		return [lhs, rhs](capd::autodiff::Node t,
						  capd::autodiff::Node in[],
						  int				   dimIn,
						  capd::autodiff::Node out[],
						  int				   dimOut,
						  capd::autodiff::Node params[],
						  int				   nParams) {
			lhs(t, in, dimIn, out, dimOut, params, nParams);
			rhs(t, in, dimIn, out, dimOut, params, nParams);
		};
	}

	std::function<void(
		capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
		System::odeSystem() const
	{
		assert(!formulas_.empty());
		if (formulas_.size() == 1)
			return System::assign(formulas_.front().arithmetic(), 0);
		auto retODESystem = System::assign(formulas_.front().arithmetic(), 0);
		for (std::size_t index = 1; index < formulas_.size(); ++index)
		{
			auto curFormula = System::assign(formulas_[index].arithmetic(), index);
			retODESystem	= System::group(retODESystem, curFormula);
		}
		return retODESystem;
	}

	bool System::empty() const { return formulas_.empty(); }

	void System::reverse() const
	{
		for (auto& formula : formulas_)
			formula.reverse();
	}

	std::ostream& operator<<(std::ostream& out, const System& rhs)
	{
		std::size_t formulaCnt = rhs.formulas_.size();
		for (std::size_t index = 0; index < formulaCnt; ++index)
			out << "var_" << index << "' = " << rhs.formulas_[index] << std::endl;
		out << "t' = 1";
		return out;
	}
} // namespace irafhy