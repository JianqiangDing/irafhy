#include <irafhy/representation/formal/basic/entity/constant.h>

namespace irafhy
{
	Constant::Constant() { value_ = 0.0; }

	Constant::Constant(double value) { value_ = value; }

	std::function<capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
		Constant::arithmetic() const
	{
		double thisValue = value_;
		return [thisValue](capd::autodiff::Node t,
						   capd::autodiff::Node in[],
						   int					dimIn,
						   capd::autodiff::Node params[],
						   int nParams) -> capd::autodiff::Node { return capd::autodiff::Node(thisValue); };
	}

	capd::interval Constant::value(const capd::interval&			  t,
								   const std::vector<capd::interval>& in,
								   const std::vector<capd::interval>& params)
	{
		return capd::interval(value_);
	}

	std::ostream& operator<<(std::ostream& out, const Constant& rhs)
	{
		out << rhs.value_;
		return out;
	}
} // namespace irafhy