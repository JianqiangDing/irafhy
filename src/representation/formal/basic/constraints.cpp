#include <irafhy/representation/formal/basic/constraints.h>

namespace irafhy
{
	Constraints::Constraints(const std::vector<Constraint>& inequalities, std::size_t dimension)
	{
		inequalities_ = inequalities;
		dimension_	= dimension;
	}

	std::size_t Constraints::size() const { return inequalities_.size(); }

	std::size_t Constraints::dimension() const { return dimension_; }

	CONSTRAINTS_SOLUTION Constraints::isSatisfy(const capd::interval&			   t,
												const std::vector<capd::interval>& in,
												const std::vector<capd::interval>& params) const
	{
		std::size_t numOfSatisfied = 0;
		for (const auto& inequality : inequalities_)
			if (inequality.isSatisfy(t, in, params))
				numOfSatisfied++;
		if (numOfSatisfied == 0)
			return CONSTRAINTS_SOLUTION::ALL_UNSATISFIED;
		if (numOfSatisfied == inequalities_.size())
			return CONSTRAINTS_SOLUTION::ALL_SATISFIED;
		return CONSTRAINTS_SOLUTION::PARTIAL_SATISFIED;
	}

	std::ostream& operator<<(std::ostream& out, const Constraints& rhs)
	{
		for (const auto& inequality : rhs.inequalities_)
			out << inequality << std::endl;
		return out;
	}

	Constraint Constraints::operator[](std::size_t index)
	{
		assert(index >= 0 && index < dimension_);
		return inequalities_[index];
	}

	const Constraint& Constraints::operator[](std::size_t index) const
	{
		assert(index >= 0 && index < inequalities_.size());
		return inequalities_[index];
	}
} // namespace irafhy