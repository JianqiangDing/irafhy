#include <irafhy/representation/formal/basic/formula.h>

namespace irafhy
{
	Formula::Formula(const Item& expression) { expression_ = expression; }

	std::function<capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
		Formula::arithmetic() const
	{
		if (isReversed_)
		{
			auto thisArithmetic = expression_.arithmetic();
			return [thisArithmetic](capd::autodiff::Node t,
									capd::autodiff::Node in[],
									int					 dimIn,
									capd::autodiff::Node params[],
									int					 nParams) -> capd::autodiff::Node {
				return capd::autodiff::Node(-1.0) * thisArithmetic(t, in, dimIn, params, nParams);
			};
		}
		return expression_.arithmetic();
	}

	capd::interval Formula::value(const capd::interval&				 t,
								  const std::vector<capd::interval>& in,
								  const std::vector<capd::interval>& params) const
	{
		capd::interval retInterval = expression_.value(t, in, params);
		if (isReversed_)
			return capd::interval(-1.0) * retInterval;
		return retInterval;
	}

	bool Formula::isReversed() const { return isReversed_; }

	void Formula::reverse() const { isReversed_ = !isReversed_; }

	std::ostream& operator<<(std::ostream& out, const Formula& rhs)
	{
		if (rhs.isReversed_)
			out << "-1*(" << rhs.expression_ << ")";
		else
			out << rhs.expression_;
		return out;
	}
} // namespace irafhy