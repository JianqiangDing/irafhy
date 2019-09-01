#include <irafhy/representation/geometric/basic/point.h>
#include <irafhy/utility/extension/extEigen.h>

namespace irafhy
{
	Point Point::zero(size_t dimension)
	{
		assert(dimension >= 0);
		return Point(Eigen::VectorXd::Zero(dimension));
	}

	Point Point::one(size_t dimension)
	{
		assert(dimension >= 0);
		return Point(Eigen::VectorXd::Ones(dimension));
	}

	Point::Point() { coordinate_ = Eigen::VectorXd::Zero(0); }

	Point::Point(double value)
	{
		coordinate_	= Eigen::VectorXd::Zero(1);
		coordinate_(0) = value;
	}

	Point::Point(const std::vector<double>& coordinate)
	{
		std::size_t thisSize = coordinate.size();
		coordinate_			 = Eigen::VectorXd::Zero(thisSize);
		for (std::size_t index = 0; index < thisSize; ++index)
			coordinate_(index) = coordinate[index];
	}

	Point::Point(const Eigen::VectorXd& coordinate) { coordinate_ = coordinate; }

	Point::Point(Eigen::VectorXd&& coordinate) { std::exchange(coordinate_, coordinate); }

	Eigen::VectorXd Point::coordinate() const { return coordinate_; }

	double Point::value(std::size_t index) const
	{
		assert(index >= 0 && index < coordinate_.rows());
		return coordinate_(index);
	}

	int Point::dimension() const { return coordinate_.rows(); }

	bool Point::empty() const { return coordinate_.rows() == 0; }

	bool Point::operator<(const Point& rhs) const { return coordinate_ < rhs.coordinate(); }

	bool Point::operator<=(const Point& rhs) const { return coordinate_ <= rhs.coordinate(); }

	bool Point::operator>(const Point& rhs) const { return coordinate_ > rhs.coordinate(); }

	bool Point::operator>=(const Point& rhs) const { return coordinate_ >= rhs.coordinate(); }

	bool Point::operator==(const Point& rhs) const { return coordinate_ == rhs.coordinate(); }

	bool Point::operator!=(const Point& rhs) const { return coordinate_ != rhs.coordinate(); }

	Point& Point::operator+=(const Eigen::VectorXd& rhs)
	{
		assert(coordinate_.rows() == rhs.rows());
		int				dimension = coordinate_.rows();
		Eigen::VectorXd newCoordinate(dimension);
		for (int index = 0; index < dimension; ++index)
			coordinate_(index) += rhs(index);
		return *this;
	}

	Point& Point::operator+=(const Point& rhs)
	{
		assert(coordinate_.rows() == rhs.dimension());
		int				dimension = coordinate_.rows();
		Eigen::VectorXd newCoordinate(dimension);
		for (int index = 0; index < dimension; ++index)
			coordinate_(index) += rhs.value(index);
		return *this;
	}

	Point& Point::operator-=(const Eigen::VectorXd& rhs)
	{
		assert(coordinate_.rows() == rhs.rows());
		int				dimension = coordinate_.rows();
		Eigen::VectorXd newCoordinate(dimension);
		for (int index = 0; index < dimension; ++index)
			coordinate_(index) -= rhs(index);
		return *this;
	}

	Point& Point::operator-=(const Point& rhs)
	{
		assert(coordinate_.rows() == rhs.dimension());
		int				dimension = coordinate_.rows();
		Eigen::VectorXd newCoordinate(dimension);
		for (int index = 0; index < dimension; ++index)
			coordinate_(index) -= rhs.value(index);
		return *this;
	}

	Point& Point::operator-()
	{
		coordinate_ *= -1;
		return *this;
	}

	Point& Point::operator/=(double divisor)
	{
		assert(divisor != 0);
		int dimension = coordinate_.rows();
		for (int index = 0; index < dimension; ++index)
			coordinate_(index) /= divisor;
		return *this;
	}

	Point& Point::operator*=(double factor)
	{
		int dimension = coordinate_.rows();
		for (int index = 0; index < dimension; ++index)
			coordinate_(index) *= factor;
		return *this;
	}

	Point& Point::operator=(const Eigen::VectorXd& rhs)
	{
		coordinate_ = rhs;
		return *this;
	}

	Point& Point::operator=(Eigen::VectorXd&& rhs)
	{
		std::exchange(coordinate_, rhs);
		return *this;
	}

	double& Point::operator[](std::size_t index)
	{
		assert(index >= 0 && index < coordinate_.rows());
		return coordinate_(index);
	}

	const double& Point::operator[](std::size_t index) const
	{
		assert(index >= 0 && index < coordinate_.rows());
		return coordinate_(index);
	}

	std::ostream& operator<<(std::ostream& out, const Point& point) { return out << point.coordinate(); }

	const Point operator+(const Point& lhs, const Point& rhs)
	{
		assert(lhs.dimension() == rhs.dimension());
		return Point(lhs.coordinate() + rhs.coordinate());
	}

	const Point operator+(const Point& lhs, const Eigen::VectorXd& rhs)
	{
		assert(lhs.dimension() == rhs.rows());
		return Point(lhs.coordinate() + rhs);
	}

	const Point operator+(const Eigen::VectorXd& lhs, const Point& rhs)
	{
		assert(lhs.rows() == rhs.dimension());
		return Point(lhs + rhs.coordinate());
	}

	const Point operator-(const Point& lhs, const Point& rhs)
	{
		assert(lhs.dimension() == rhs.dimension());
		return Point(lhs.coordinate() - rhs.coordinate());
	}

	const Point operator-(const Point& lhs, const Eigen::VectorXd& rhs)
	{
		assert(lhs.dimension() == rhs.rows());
		return Point(lhs.coordinate() + rhs);
	}

	const Point operator-(const Eigen::VectorXd& lhs, const Point& rhs)
	{
		assert(lhs.rows() == rhs.dimension());
		return Point(lhs + rhs.coordinate());
	}

	const Point operator/(const Point& lhs, double divisor) { return Point(lhs.coordinate() / divisor); }

	const Point operator*(const Point& lhs, double factor) { return Point(lhs.coordinate() * factor); }

	const Point operator*(double factor, const Point& rhs) { return Point(rhs.coordinate() * factor); }
} // namespace irafhy