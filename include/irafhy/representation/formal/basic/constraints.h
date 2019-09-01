#ifndef REPRESENTATION_FORMAL_BASIC_CONSTRAINTS_H
#define REPRESENTATION_FORMAL_BASIC_CONSTRAINTS_H

#include <capd/capdlib.h>
#include <irafhy/representation/formal/basic/constraint.h>
#include <vector>

namespace irafhy
{
	class Constraints
	{
	private:
		std::vector<Constraint> inequalities_;
		std::size_t				dimension_ = 0;

	public:
		Constraints() = default;
		Constraints(const std::vector<Constraint>& inequalities, std::size_t dimension);
		~Constraints() = default;
		[[nodiscard]] std::size_t		   size() const;
		[[nodiscard]] std::size_t		   dimension() const;
		[[nodiscard]] CONSTRAINTS_SOLUTION isSatisfy(const capd::interval&				t,
													 const std::vector<capd::interval>& in,
													 const std::vector<capd::interval>& params) const;
		friend std::ostream&			   operator<<(std::ostream& out, const Constraints& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_CONSTRAINTS_H