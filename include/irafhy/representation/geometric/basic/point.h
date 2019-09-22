#ifndef REPRESENTATION_GEOMETRIC_BASIC_POINT_H
#define REPRESENTATION_GEOMETRIC_BASIC_POINT_H

#include <Eigen/Core>
#include <Eigen/Dense>

namespace irafhy
{
	class Point
	{
	private:
		/**
		 * @brief coordinate of the point
		 */
		Eigen::VectorXd coordinate_;

	public:
		/**
		 * @brief constructor of the origin of the given target space
		 * @param dimension dimension of the target space
		 * @return resulting origin
		 */
		static Point zero(std::size_t dimension = 0);
		/**
		 * @brief constructor of a point which all elements of the coordinate are ones in given target space
		 * @param dimension dimension of target space
		 * @return resulting point instance
		 */
		static Point one(std::size_t dimension = 0);

	public:
		/**
		 * @brief default constructor
		 */
		Point();
		/**
		 * @brief copy constructor
		 * @param point given point
		 */
		Point(const Point& point) = default;
		/**
		 * @brief move constructor
		 * @param point given point
		 */
		Point(Point&& point) = default;
		/**
		 * @brief constructor of the point in one dimensional space with given value as coordinate
		 * @param value given value
		 */
		explicit Point(double value);
		/**
		 * @brief constructor with given coordinate
		 * @param coordinate given coordinate of the point
		 */
		explicit Point(const std::vector<double>& coordinate);
		/**
		 * @brief constructor with given coordinate
		 * @param coordinate given coordinate of the point
		 */
		explicit Point(const Eigen::VectorXd& coordinate);
		/**
		 * @brief constructor with given coordinate
		 * @param coordinate given coordinate of the point
		 */
		explicit Point(Eigen::VectorXd&& coordinate);
		/**
		 * @brief destructor
		 */
		virtual ~Point() = default;
		/**
		 * @brief get the coordinate of the point
		 * @return the coordinate of the point
		 */
		[[nodiscard]] Eigen::VectorXd coordinate() const;
		/**
		 * @brief get the value of coordinate in specified dimension
		 * @param index index of the dimension
		 * @return value in target dimension
		 */
		[[nodiscard]] double value(std::size_t index) const;
		/**
		 * @brief get the dimension of the space which the point in
		 * @return the dimension of the space
		 */
		[[nodiscard]] int dimension() const;
		/**
		 * @brief check if the point in valid space or not
		 * @return TRUE if the dimension of the space greater than zero
		 */
		[[nodiscard]] bool empty() const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side of the operator
		 * @return TRUE if the coordinate of the point less than the right hand side one's
		 */
		bool operator<(const Point& rhs) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side of the operator
		 * @return TRUE if the coordinate of the point less than or equal to the right hand side one's
		 */
		bool operator<=(const Point& rhs) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side of the operator
		 * @return TRUE if the coordinate of the point greater than the right hand side one's
		 */
		bool operator>(const Point& rhs) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side of the operator
		 * @return TRUE if the coordinate of the point greater than or equal to the right hand side one's
		 */
		bool operator>=(const Point& rhs) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side of the operator
		 * @return TRUE if the coordinate of the point equal to the right hand side one's
		 */
		bool operator==(const Point& rhs) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side of the operator
		 * @return TRUE if the coordinate of the point unequal to the right hand side one's
		 */
		bool operator!=(const Point& rhs) const;
		/**
		 * @brief addition assignment operator
		 * @param rhs right hand side of the operator
		 * @return resulting point whose coordinate is the summation of the current coordinate and the right hand side one's
		 */
		Point& operator+=(const Eigen::VectorXd& rhs);
		/**
		 * @brief addition assignment operator
		 * @param rhs right hand side of the operator
		 * @return resulting point whose coordinate is the summation of the current coordinate and the right hand side one's
		 */
		Point& operator+=(const Point& rhs);
		/**
		 * @brief subtraction assignment operator
		 * @param rhs right hand side of the operator
		 * @return resulting point whose coordinate is the subtraction of the current coordinate and the right hand side one's
		 */
		Point& operator-=(const Eigen::VectorXd& rhs);
		/**
		 * @brief subtraction assignment operator
		 * @param rhs right hand side of the operator
		 * @return resulting point whose coordinate is the subtraction of the current coordinate and the right hand side one's
		 */
		Point& operator-=(const Point& rhs);
		/**
		 * @brief unary minus operator
		 * @return resulting point whose coordinate is the current coordinate multiply by minus one
		 */
		Point& operator-();
		/**
		 * @brief division assignment operator
		 * @param divisor given divisor
		 * @return resulting point whose coordinate is the quotient of the current coordinate divided by the given divisor
		 */
		Point& operator/=(double divisor);
		/**
		 * @brief multiplication assignment operator
		 * @param factor given factor
		 * @return resulting point whose coordinate is the product of the current coordinate and the given factor
		 */
		Point& operator*=(double factor);
		/**
		 * @brief assignment operator
		 * @param rhs right hand side of the operator
		 * @return resulting point
		 */
		Point& operator=(const Eigen::VectorXd& rhs);
		/**
		 * @brief assignment operator
		 * @param rhs right hand side of the operator
		 * @return resulting point
		 */
		Point& operator=(Eigen::VectorXd&& rhs);
		/**
		 * @brief assignment operator
		 * @param rhs right hand side of the operator
		 * @return resulting point
		 */
		Point& operator=(const Point& rhs) = default;
		/**
		 * @brief assignment operator
		 * @param rhs right hand side of the operator
		 * @return resulting point
		 */
		Point& operator=(Point&& rhs) noexcept = default;
		/**
		 * @brief get the value of the specified dimension
		 * @param index index of the dimension
		 * @return value of the specified dimension
		 */
		double& operator[](std::size_t index);
		/**
		 * @brief get the value of the specified dimension
		 * @param index index of the dimension
		 * @return value of the specified dimension
		 */
		const double& operator[](std::size_t index) const;
	};

	/**
	 * @brief binary addition operator
	 * @param lhs left hand side of the operator
	 * @param rhs right hand side of the operator
	 * @return resulting point whose coordinate is the summation of two given points' coordinates
	 */
	const Point operator+(const Point& lhs, const Point& rhs);
	/**
	 * @brief binary addition operator
	 * @param lhs left hand side of the operator
	 * @param rhs right hand side of the operator
	 * @return resulting point whose coordinate is the summation of given point's coordinate and the given coordinate
	 */
	const Point operator+(const Point& lhs, const Eigen::VectorXd& rhs);
	/**
	 * @brief binary addition operator
	 * @param lhs left hand side of the operator
	 * @param rhs right hand side of the operator
	 * @return resulting point whose coordinate is the summation of given coordinate and the given point's coordinate
	 */
	const Point operator+(const Eigen::VectorXd& lhs, const Point& rhs);
	/**
	 * @brief binary subtraction operator
	 * @param lhs left hand side of the operator
	 * @param rhs right hand side of the operator
	 * @return resulting point whose coordinate is the subtraction of given two points's coordinates
	 */
	const Point operator-(const Point& lhs, const Point& rhs);
	/**
	 * @brief binary subtraction operator
	 * @param lhs left hand side of the operator
	 * @param rhs right hand side of the operator
	 * @return resulting point whose coordinate is the subtraction of the given point's coordinate and the given coordinate
	 */
	const Point operator-(const Point& lhs, const Eigen::VectorXd& rhs);
	/**
	 * @brief binary subtraction operator
	 * @param lhs left hand side of the operator
	 * @param rhs right hand side of the operator
	 * @return resulting point whose coordinate is the subtraction of the given coordinate and the given point's coordinate
	 */
	const Point operator-(const Eigen::VectorXd& lhs, const Point& rhs);
	/**
	 * @brief binary division operator
	 * @param lhs left hand side of the operator as dividend
	 * @param divisor right hand side of the operator as divisor
	 * @return resulting point whose coordinate is the quotient of the given point's coordinate and the divisor
	 */
	const Point operator/(const Point& lhs, double divisor);
	/**
	 * @brief binary multiplication operator
	 * @param lhs left hand side of the operator
	 * @param factor right hand side of the operator as the factor
	 * @return resulting point whose coordinate is the product of given point's coordinate and the factor
	 */
	const Point operator*(const Point& lhs, double factor);
	/**
	 * @brief binary multiplication operator
	 * @param factor left hand side of the operator as the factor
	 * @param rhs right hand side of the operator
	 * @return resulting point whose coordinate is the product of given factor and given point's coordinate
	 */
	const Point operator*(double factor, const Point& rhs);
	/**
	 * @brief out the right hand side point to standard out stream
	 * @param out given out stream
	 * @param point right hand side point
	 * @return resulting out stream
	 */
	std::ostream& operator<<(std::ostream& out, const Point& point);
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_BASIC_POINT_H