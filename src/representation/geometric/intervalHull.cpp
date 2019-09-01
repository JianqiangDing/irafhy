#include <irafhy/representation/geometric/intervalHull.h>

namespace irafhy
{
	IntervalHull IntervalHull::Empty(size_t dimension) { return IntervalHull(); }

	IntervalHull::IntervalHull() { constraints_ = std::vector<capd::interval>(0); }

	IntervalHull::IntervalHull(const std::vector<capd::interval>& constraints) { constraints_ = constraints; }

	IntervalHull::IntervalHull(const std::vector<Point>& points)
	{
		if (points.empty())
		{
			constraints_.clear();
			return;
		}
		int pointsCnt = points.size();
		//assert all the points in same space
		int dim = points.front().dimension();
		for (int index = 0; index < pointsCnt; ++index)
			assert(points[index].dimension() == dim);
		constraints_.reserve(dim);
		for (int dimIdx = 0; dimIdx < dim; ++dimIdx)
		{
			double leftBound  = std::numeric_limits<double>::infinity();
			double rightBound = std::numeric_limits<double>::infinity() * -1.0;
			for (int index = 0; index < pointsCnt; ++index)
			{
				leftBound  = points[index][dimIdx] < leftBound ? points[index][dimIdx] : leftBound;
				rightBound = points[index][dimIdx] > rightBound ? points[index][dimIdx] : rightBound;
			}
			assert(leftBound <= rightBound);
			constraints_.emplace_back(capd::interval(leftBound, rightBound));
		}
	}

	IntervalHull::IntervalHull(const Point& center, double radius)
	{
		if (center.empty())
		{
			constraints_.clear();
			return;
		}
		int dim = center.dimension();
		constraints_.resize(center.dimension());
		for (int index = 0; index < dim; ++index)
			constraints_[index] = capd::interval(center[index] - radius, center[index] + radius);
	}

	IntervalHull::IntervalHull(const capd::C0Rect2Set& set)
	{
		if (set.dimension() == 0)
		{
			constraints_.clear();
			return;
		}
		capd::IVector iVector(set);
		std::size_t   dim = set.dimension();
		constraints_.resize(dim);
		for (std::size_t index = 0; index < dim; ++index)
			constraints_[index] = iVector[index];
	}

	IntervalHull::IntervalHull(const Eigen::VectorXd& center, double radius)
	{
		if (center.rows() == 0)
		{
			constraints_.clear();
			return;
		}
		int dim = center.rows();
		constraints_.resize(dim);
		for (int index = 0; index < dim; ++index)
			constraints_[index] = capd::interval(center(index) - radius, center(index) + radius);
	}

	std::vector<capd::interval> IntervalHull::constraints() const { return constraints_; }

	bool IntervalHull::empty() const
	{
		if (constraints_.empty())
			return true;
		double volume = 0.0;
		int	dim	= this->dimension();
		for (int index = 0; index < dim; ++index)
		{
			if (std::isinf(constraints_[index].leftBound()) || std::isinf(constraints_[index].rightBound()))
				return false;
			double thisVolume = constraints_[index].rightBound() - constraints_[index].leftBound();
			assert(thisVolume >= 0);
			volume += thisVolume;
		}
		return volume <= 0;
	}

	int IntervalHull::dimension() const { return constraints_.size(); }

	std::vector<Point> IntervalHull::extremVertices() const
	{
		std::vector<Point> result;
		std::size_t		   dimension = constraints_.size();
		std::size_t		   sampleCnt = std::size_t(std::pow(2, dimension));
		for (std::size_t sampleIdx = 0; sampleIdx < sampleCnt; ++sampleIdx)
		{
			Eigen::VectorXd coordinate = Eigen::VectorXd::Zero(dimension);
			for (std::size_t dimIdx = 0; dimIdx < dimension; ++dimIdx)
			{
				std::size_t pos(std::size_t(1) << dimIdx);
				if (sampleIdx & pos)
				{
					coordinate(dimIdx) = constraints_[dimIdx].rightBound();
				}
				else
				{
					coordinate(dimIdx) = constraints_[dimIdx].leftBound();
				}
			}
			result.emplace_back(Point(coordinate));
		}
		return result;
	}

	Point IntervalHull::randInnerPoint() const
	{
		//TODO
		return Point();
	}

	Point IntervalHull::centroid() const
	{
		assert(this->dimension() > 0);
		Eigen::VectorXd coordinate(this->dimension());
		for (std::size_t dimIdx = 0; dimIdx < this->dimension(); ++dimIdx)
			coordinate(dimIdx)
				= (this->constraints_[dimIdx].leftBound() + this->constraints_[dimIdx].rightBound()) / 2.0;
		return Point(coordinate);
	}

	bool IntervalHull::intersect(const IntervalHull& rhs, IntervalHull& result) const
	{
		if (this->empty() || rhs.empty())
			return false;
		assert(this->dimension() == rhs.dimension());
		int							dim = this->dimension();
		std::vector<capd::interval> intersectionConstraints(dim, capd::interval(0.0, 0.0));
		for (int dimIdx = 0; dimIdx < dim; ++dimIdx)
		{
			capd::interval curIntersection(0.0, 0.0);
			bool		   isNull = !(intersection(constraints_[dimIdx], rhs.constraints()[dimIdx], curIntersection));
			if (isNull)
			{
				result = IntervalHull::Empty(dim);
				return false;
			}
			intersectionConstraints[dimIdx] = curIntersection;
		}
		result = IntervalHull(intersectionConstraints);
		return true;
	}

	IntervalHull IntervalHull::unite(const IntervalHull& rhs) const
	{
		if (this->empty() && !rhs.empty())
			return rhs;
		if (!this->empty() && rhs.empty())
			return *this;
		assert(this->dimension() == rhs.dimension());
		std::vector<capd::interval> unionConstraints(this->dimension());
		for (int index = 0; index < this->dimension(); ++index)
			unionConstraints[index] = intervalHull(constraints_[index], rhs.constraints()[index]);
		return IntervalHull(unionConstraints);
	}

	bool IntervalHull::contains(const Point& point) const
	{
		assert(this->dimension() == point.dimension());
		for (int index = 0; index < this->dimension(); ++index)
			if (!constraints_[index].contains(point[index]))
				return false;
		return true;
	}

	bool IntervalHull::contains(const Eigen::VectorXd& coordinate) const
	{
		assert(this->dimension() == coordinate.rows());
		for (int index = 0; index < this->dimension(); ++index)
			if (!constraints_[index].contains(coordinate(index)))
				return false;
		return true;
	}

	bool IntervalHull::contains(const irafhy::IntervalHull& rhs) const
	{
		assert(this->dimension() == rhs.dimension());
		for (std::size_t index = 0; index < this->dimension(); ++index)
		{
			if (this->constraints_[index].leftBound() > rhs.constraints()[index].leftBound()
				|| this->constraints_[index].rightBound() < rhs.constraints()[index].rightBound())
				return false;
		}
		return true;
	}

	capd::interval& IntervalHull::operator[](std::size_t index)
	{
		assert(index >= 0 && index < constraints_.size());
		return constraints_[index];
	}

	const capd::interval& IntervalHull::operator[](std::size_t index) const
	{
		assert(index >= 0 && index < constraints_.size());
		return constraints_[index];
	}

	bool IntervalHull::operator==(const IntervalHull& rhs) const
	{
		if (this->dimension() != rhs.dimension())
			return false;
		return constraints_ == rhs.constraints();
	}

	bool IntervalHull::operator!=(const IntervalHull& rhs) const { return !(*this == rhs); }

	bool IntervalHull::operator<(const IntervalHull& rhs) const
	{
		if (this->dimension() != rhs.dimension())
			return false;
		for (int index = 0; index < this->dimension(); ++index)
			if (constraints_[index] >= rhs.constraints()[index])
				return false;
		return true;
	}

	bool IntervalHull::operator<=(const IntervalHull& rhs) const
	{
		if (this->dimension() != rhs.dimension())
			return false;
		for (int index = 0; index < this->dimension(); ++index)
			if (constraints_[index] > rhs.constraints()[index])
				return false;
		return true;
	}

	bool IntervalHull::operator>(const IntervalHull& rhs) const { return !(*this <= rhs); }

	bool IntervalHull::operator>=(const IntervalHull& rhs) const { return !(*this < rhs); }

	std::ostream& operator<<(std::ostream& out, const IntervalHull& rhs)
	{
		int dim = rhs.dimension();
		out << "IntervalHull: {" << std::endl;
		for (int index = 0; index < dim; ++index)
		{
			out << "               " << rhs.constraints()[index] << std::endl;
		}
		out << "              }" << std::endl;
		return out;
	}
} // namespace irafhy