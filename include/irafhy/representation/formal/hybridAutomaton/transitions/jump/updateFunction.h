#ifndef REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_JUMP_UPDATE_FUNCTION_H
#define REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_JUMP_UPDATE_FUNCTION_H

#include <irafhy/representation/formal/basic/formula.h>

namespace irafhy
{
	class UpdateFunction
	{
	private:
		long	index_ = -1;
		Formula formula_;


	public:
		UpdateFunction() = default;
		UpdateFunction(const Formula& formula, long index);
		~UpdateFunction() = default;
		long	index() const;
		Formula formula() const;
		void	update(const capd::interval&			  time,
					   const std::vector<capd::interval>& oriConstraints,
					   const std::vector<capd::interval>& oriParams,
					   std::vector<capd::interval>&		  constraints) const;
	};
	std::ostream& operator<<(std::ostream& out, const UpdateFunction& rhs);
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_JUMP_UPDATE_FUNCTION_H