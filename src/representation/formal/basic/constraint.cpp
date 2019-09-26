#include <irafhy/representation/formal/basic/constraint.h>

namespace irafhy
{
	Constraint::Constraint(const irafhy::Item& lhsExpression,
						   const irafhy::Item& rhsExpression,
						   irafhy::RELATION	relation)
	{
		lhsExpression_ = lhsExpression;
		rhsExpression_ = rhsExpression;
		relation_	  = relation;
	}

	bool Constraint::isSatisfy(const capd::interval&			  t,
							   const std::vector<capd::interval>& in,
							   const std::vector<capd::interval>& params) const
	{
		capd::interval lhsValue = lhsExpression_.value(t, in, params);
		capd::interval rhsValue = rhsExpression_.value(t, in, params);
		switch (relation_)
		{
			case RELATION::LESS_THAN:
				return lhsValue < rhsValue;
			case RELATION::LESS_THAN_OR_EQUAL_TO:
				return lhsValue <= rhsValue;
			case RELATION::EQUAL_TO:
				return lhsValue == rhsValue;
			case RELATION::UNEQUAL_TO:
				return lhsValue != rhsValue;
			case RELATION::GREATER_THAN_OR_EQUAL_TO:
				return lhsValue >= rhsValue;
			case RELATION::GREATER_THAN:
				return lhsValue > rhsValue;
			default:
				exit(EXIT_FAILURE);
		}
	}

	RELATION Constraint::relation() const { return relation_; }

	std::ostream& operator<<(std::ostream& out, const Constraint& rhs)
	{
		out << rhs.lhsExpression_;
		switch (rhs.relation_)
		{
			case RELATION::UNEQUAL_TO:
			{
				out << " != ";
				break;
			}
			case RELATION::LESS_THAN_OR_EQUAL_TO:
			{
				out << " <= ";
				break;
			}
			case RELATION::LESS_THAN:
			{
				out << " < ";
				break;
			}
			case RELATION::EQUAL_TO:
			{
				out << " == ";
				break;
			}
			case RELATION::GREATER_THAN_OR_EQUAL_TO:
			{
				out << " >= ";
				break;
			}
			case RELATION::GREATER_THAN:
			{
				out << " > ";
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
		out << rhs.rhsExpression_;
		return out;
	}

	capd::interval Constraint::lhsValue(const capd::interval&			   t,
										const std::vector<capd::interval>& in,
										const std::vector<capd::interval>& params) const
	{
		return lhsExpression_.value(t, in, params);
	}

	capd::interval Constraint::rhsValue(const capd::interval&			   t,
										const std::vector<capd::interval>& in,
										const std::vector<capd::interval>& params) const
	{
		return rhsExpression_.value(t, in, params);
	}
} // namespace irafhy