#ifndef REPRESENTATION_FORMAL_BASIC_CONSTRAINT_H
#define REPRESENTATION_FORMAL_BASIC_CONSTRAINT_H

#include <irafhy/utility/definition/enum.h>
#include <irafhy/representation/formal/basic/item.h>

namespace irafhy
{
	class Constraint
	{
	private:
		Item	 lhsExpression_;
		Item	 rhsExpression_;
		RELATION relation_ = RELATION::EQUAL_TO;

	public:
		Constraint() = default;
		Constraint(const Item& lhsExpression, const Item& rhsExpression, RELATION relation);
		~Constraint() = default;
		[[nodiscard]] bool   isSatisfy(const capd::interval&			  t,
									   const std::vector<capd::interval>& in,
									   const std::vector<capd::interval>& params) const;
		friend std::ostream& operator<<(std::ostream& out, const Constraint& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_CONSTRAINT_H