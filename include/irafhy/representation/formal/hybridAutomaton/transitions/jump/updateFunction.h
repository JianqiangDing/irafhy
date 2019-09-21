#ifndef REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_JUMP_UPDATE_FUNCTION_H
#define REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_JUMP_UPDATE_FUNCTION_H

#include <irafhy/representation/formal/basic/formula.h>

namespace irafhy
{
	class UpdateFunction
	{
	private:
		/**
		 * @brief index of the variable which shall be updated
		 */
		long index_ = -1;
		/**
		 * @brief formula which used to calculate the value to update the target variable indicated by the index
		 */
		Formula formula_;


	public:
		/**
		 * @brief constructor
		 */
		UpdateFunction() = default;
		/**
		 * @brief constructor with given formula and index of the variable
		 * @param formula given formula
		 * @param index index of the target variable
		 */
		UpdateFunction(const Formula& formula, long index);
		/**
		 * @brief destructor
		 */
		~UpdateFunction() = default;
		/**
		 * @brief get the index of the target variable
		 * @return the index of the target variable
		 */
		long index() const;
		/**
		 * @brief get the updating expression
		 * @return expression which used to update the target variable
		 */
		Formula formula() const;
		/**
		 * @brief update the target variable with given values
		 * @param time time value in interval form
		 * @param oriConstraints original values of the variables
		 * @param oriParams original parameters' value
		 * @param constraints updated variables
		 */
		void update(const capd::interval&			   time,
					const std::vector<capd::interval>& oriConstraints,
					const std::vector<capd::interval>& oriParams,
					std::vector<capd::interval>&	   constraints) const;
	};

	/**
	 * @brief out the right hand side update function to standard stream
	 * @param out given out stream
	 * @param rhs given update function
	 * @return resulting out stream
	 */
	std::ostream& operator<<(std::ostream& out, const UpdateFunction& rhs);
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_TRANSITIONS_JUMP_UPDATE_FUNCTION_H