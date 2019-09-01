#include <irafhy/representation/geometric/basic/halfSpace.h>

namespace irafhy
{
	HalfSpace HalfSpace::Empty(size_t dimension) { return HalfSpace(Eigen::VectorXd::Zero(0), 0.0); }

	HalfSpace::HalfSpace()
	{
		normal_ = Eigen::VectorXd::Zero(0);
		offset_ = 0.0;
	}

	HalfSpace::HalfSpace(const Eigen::VectorXd& normal, double offset)
	{
		normal_ = normal;
		offset_ = offset;
	}

	HalfSpace::HalfSpace(Eigen::VectorXd&& normal, double&& offset)
	{
		std::exchange(normal_, normal);
		std::exchange(offset_, offset);
	}

	int HalfSpace::dimension() const { return normal_.rows(); }

	Eigen::VectorXd HalfSpace::normal() const { return normal_; }

	double HalfSpace::offset() const { return offset_; }

	bool HalfSpace::contains(const Point& point) const { return normal_.dot(point.coordinate()) + offset_ <= 0; }

	bool HalfSpace::contains(const Eigen::VectorXd& coordinate) const { return normal_.dot(coordinate) + offset_ <= 0; }

	bool HalfSpace::holds(const Point& point) const
	{
		return normal_.dot(point.coordinate()) + offset_ >= -1e15 && normal_.dot(point.coordinate()) + offset_ <= 1e15;
	}

	bool HalfSpace::holds(const Eigen::VectorXd& coordinate) const
	{
		return normal_.dot(coordinate) + offset_ >= -1e15 && normal_.dot(coordinate) + offset_ <= 1e15;
	}

	bool HalfSpace::intersect(const Eigen::VectorXd& lhsEndPoint,
							  const Eigen::VectorXd& rhsEndPoint,
							  Eigen::VectorXd&		 intersection) const
	{
		assert(lhsEndPoint.rows() == rhsEndPoint.rows() && lhsEndPoint.rows() == this->dimension());
		Eigen::MatrixXd interMatrix(2, this->dimension());
		interMatrix.row(0) = lhsEndPoint;
		interMatrix.row(1) = rhsEndPoint;
		interMatrix.transposeInPlace();
		Eigen::VectorXd constraintVector(2);
		constraintVector(0) = -1 * offset_;
		constraintVector(1) = 1;
		Eigen::MatrixXd constraintMatrix(2, 2);
		constraintMatrix.row(0)		 = normal_ * interMatrix;
		constraintMatrix.row(1)		 = Eigen::VectorXd::Ones(2);
		Eigen::VectorXd coefficients = Eigen::FullPivLU<Eigen::MatrixXd>(constraintMatrix).solve(constraintVector);
		if (coefficients(0) + coefficients(1) == 1 && coefficients(0) >= 0 && coefficients(1) >= 0)
		{
			intersection = lhsEndPoint * coefficients(0) + rhsEndPoint * coefficients(1);
			return true;
		}
		return false;
	}

	HalfSpace& HalfSpace::operator-()
	{
		normal_ *= -1;
		offset_ *= -1;
		return *this;
	}

	HalfSpace& HalfSpace::reverse()
	{
		normal_ *= -1;
		offset_ *= -1;
		return *this;
	}

	std::ostream& operator<<(std::ostream& out, const HalfSpace& halfSpace)
	{
		out << "HalfSpace:{" << std::endl;
		out << "           normal: ";
		for (int index = 0; index < halfSpace.dimension(); ++index)
			out << halfSpace.normal()(index) << " ";
		out << std::endl;
		out << "           offset: " << halfSpace.offset() << " }" << std::endl;
		return out;
	}
} // namespace irafhy