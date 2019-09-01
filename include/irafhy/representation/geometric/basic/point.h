#ifndef REPRESENTATION_GEOMETRIC_BASIC_POINT_H
#define REPRESENTATION_GEOMETRIC_BASIC_POINT_H

#include <Eigen/Core>
#include <Eigen/Dense>

namespace irafhy
{
	class Point
	{
	private:
		Eigen::VectorXd coordinate_;

	public:
		static Point zero(std::size_t dimension = 0);
		static Point one(std::size_t dimension = 0);

	public:
		Point();
		Point(const Point& point) = default;
		Point(Point&& point)	  = default;
		explicit Point(double value);
		explicit Point(const std::vector<double>& coordinate);
		explicit Point(const Eigen::VectorXd& coordinate);
		explicit Point(Eigen::VectorXd&& coordinate);
		virtual ~Point() = default;
		Eigen::VectorXd coordinate() const;
		double			value(std::size_t index) const;
		int				dimension() const;
		bool			empty() const;
		bool			operator<(const Point& rhs) const;
		bool			operator<=(const Point& rhs) const;
		bool			operator>(const Point& rhs) const;
		bool			operator>=(const Point& rhs) const;
		bool			operator==(const Point& rhs) const;
		bool			operator!=(const Point& rhs) const;
		Point&			operator+=(const Eigen::VectorXd& rhs);
		Point&			operator+=(const Point& rhs);
		Point&			operator-=(const Eigen::VectorXd& rhs);
		Point&			operator-=(const Point& rhs);
		Point&			operator-();
		Point&			operator/=(double divisor);
		Point&			operator*=(double factor);
		Point&			operator=(const Eigen::VectorXd& rhs);
		Point&			operator=(Eigen::VectorXd&& rhs);
		Point&			operator=(const Point& rhs) = default;
		Point&			operator=(Point&& rhs) noexcept = default;
		double&			operator[](std::size_t index);
		const double&   operator[](std::size_t index) const;
	};
	const Point   operator+(const Point& lhs, const Point& rhs);
	const Point   operator+(const Point& lhs, const Eigen::VectorXd& rhs);
	const Point   operator+(const Eigen::VectorXd& lhs, const Point& rhs);
	const Point   operator-(const Point& lhs, const Point& rhs);
	const Point   operator-(const Point& lhs, const Eigen::VectorXd& rhs);
	const Point   operator-(const Eigen::VectorXd& lhs, const Point& rhs);
	const Point   operator/(const Point& lhs, double divisor);
	const Point   operator*(const Point& lhs, double factor);
	const Point   operator*(double factor, const Point& rhs);
	std::ostream& operator<<(std::ostream& out, const Point& point);
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_BASIC_POINT_H