#include <irafhy/representation/formal/hybridAutomaton/transitions/jump/updateFunction.h>

namespace irafhy
{
	UpdateFunction::UpdateFunction(const irafhy::Formula& formula, long index)
	{
		assert(index >= 0);
		formula_ = formula;
		index_   = index;
	}

	long UpdateFunction::index() const
	{
		assert(index_ >= 0);
		return index_;
	}

	Formula UpdateFunction::formula() const { return formula_; }

	void UpdateFunction::update(const capd::interval&			   time,
								const std::vector<capd::interval>& oriConstraints,
								const std::vector<capd::interval>& oriParams,
								std::vector<capd::interval>&	   constraints) const
	{
		assert(index_ >= 0 && index_ < oriConstraints.size() && oriConstraints.size() == constraints.size());
		constraints[index_] = formula_.value(time, oriConstraints, oriParams);
	}

	std::ostream& operator<<(std::ostream& out, const UpdateFunction& rhs)
	{
		out << "out[" << rhs.index() << "] = ";
		out << rhs.formula() << std::endl;
		return out;
	}
} // namespace irafhy