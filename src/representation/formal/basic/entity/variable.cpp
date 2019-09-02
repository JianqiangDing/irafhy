#include <irafhy/representation/formal/basic/entity/variable.h>

namespace irafhy
{
	Variable::Variable(long index)
	{
		assert(index > -2);
		index_ = index;
	}

	std::function<capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
		Variable::arithmetic() const
	{
		//should capture the value, not by reference
		long int thisIndex = index_;
		return [thisIndex](capd::autodiff::Node t,
						   capd::autodiff::Node in[],
						   int					dimIn,
						   capd::autodiff::Node params[],
						   int					nParams) -> capd::autodiff::Node {
			assert(thisIndex > -2 && thisIndex < dimIn);
			if (thisIndex == -1)
				return t;
			return in[thisIndex];
		};
	}

	capd::interval Variable::value(const capd::interval&			  t,
								   const std::vector<capd::interval>& in,
								   const std::vector<capd::interval>& params)
	{
		assert(index_ > -2 && index_ < in.size());
		return in[index_];
	}

	std::ostream& operator<<(std::ostream& out, const Variable& rhs)
	{
		if (rhs.index_ == -1)
			out << "t";
		else
			out << "var_" << rhs.index_;
		return out;
	}
} // namespace irafhy