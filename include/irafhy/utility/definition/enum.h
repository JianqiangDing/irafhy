#ifndef UTILITY_DEFINITION_ENUM_H
#define UTILITY_DEFINITION_ENUM_H

namespace irafhy
{
	/**
	 * @brief style of viewing geometry objects
	 */
	enum VIEW_TYPE
	{
		POINT,
		LINE,
		PLANE
	};
	/**
	 * @brief supported unary math functions
	 */
	enum UNARY
	{
		OPPOSITE,
		SIN,
		ASIN,
		COS,
		ACOS,
		TAN,
		ATAN,
		COT,
		ACOT,
		LN,
		LOG,
		NEXP,
		SINH,
		ASINH,
		COSH,
		ACOSH,
		TANH,
		ATANH,
		COTH,
		ACOTH,
		SQR,
		SQRT
	};
	/**
	 * @brief supported binary math functions
	 */
	enum BINARY
	{
		PLUS,
		MINUS,
		MULTIPLY,
		DIVIDE,
		POWER
	};
	/**
	 * @brief type of the item assembling a formula
	 */
	enum ITEM_T
	{
		CONSTANT_T,
		VARIABLE_T,
		UNARY_T,
		BINARY_T
	};
	/**
	 * @brief direction of the integration respect to the direction of vector filed
	 */
	enum ANALYSIS
	{
		FORWARD,
		BACKWARD
	};
	/**
	 * @brief supported geometry object
	 */
	enum GEOMETRY
	{
		INTERVAL_HULL,
		POLYTOPE
	};
	/**
	 * @brief optimization direction of the linear programming
	 */
	enum LINEPROG_DIRECTION
	{
		MAX,
		MIN
	};
	/**
	 * @brief status of the solution return by glpk
	 */
	enum LINEPROG_SOLUTION
	{
		UNDEFINED,
		FEASIBLE,
		INFEASIBLE,
		NO_FEASIBLE,
		OPTIMAL,
		UNBOUNDED
	};
	/**
	 * @brief relation between two expressions
	 */
	enum RELATION
	{
		LESS_THAN,
		LESS_THAN_OR_EQUAL_TO,
		EQUAL_TO,
		UNEQUAL_TO,
		GREATER_THAN_OR_EQUAL_TO,
		GREATER_THAN
	};
	/**
	 * @brief flag which indicates the statue of the constraints system
	 */
	enum CONSTRAINTS_SOLUTION
	{
		ALL_SATISFIED,
		PARTIAL_SATISFIED,
		ALL_UNSATISFIED
	};
} // namespace irafhy
#endif //UTILITY_DEFINITION_ENUM_H