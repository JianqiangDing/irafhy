#include <irafhy/representation/geometric/polytope.h>
#include <limits>

namespace irafhy
{
	Polytope::Polytope(const std::vector<Point>&	 pointConstraints,
					   const std::vector<HalfSpace>& halfSpaceConstraints,
					   double						 volume,
					   int							 dimension)
	{
		pointConstraints_	 = pointConstraints;
		halfSpaceConstraints_ = halfSpaceConstraints;
		volume_				  = volume;
		dimension_			  = dimension;
	}

	void Polytope::init(const irafhy::convexConstraints& constraints)
	{
		pointConstraints_	 = constraints.pointConstraints();
		halfSpaceConstraints_ = constraints.halfSpaceConstraints();
		volume_				  = constraints.volume();
		dimension_			  = constraints.dimension();
	}

	std::vector<Point> Polytope::verticesEnumerationDualPly(const std::vector<HalfSpace>& halfSpaces)
	{
		if (halfSpaces.empty())
			return std::vector<Point>();
		//ensure all the halfSpaces within same dimension
		int dimension	 = halfSpaces.front().dimension();
		int halfSpacesCnt = halfSpaces.size();
		for (int index = 0; index < halfSpacesCnt; ++index)
			assert(dimension == halfSpaces[index].dimension());
		Eigen::MatrixXd A(halfSpacesCnt, dimension);
		Eigen::VectorXd b(halfSpacesCnt);
		for (int index = 0; index < halfSpacesCnt; ++index)
		{
			A.row(index) = halfSpaces[index].normal();
			b(index)	 = -1.0 * halfSpaces[index].offset();
		}
		Eigen::VectorXd	x	= A.bdcSvd(Eigen::ComputeThinU | Eigen::ComputeThinV).solve(b);
		Eigen::VectorXd	curB = b - A * x;
		Eigen::MatrixXd	D	= A;
		std::vector<Point> dualPts;
		for (int index = 0; index < D.rows(); ++index)
		{
			D.row(index) /= curB(index);
			Eigen::VectorXd curV = D.row(index);
			dualPts.emplace_back(Point(curV));
		}
		convexConstraints			  dualPolytope = ConvexHull::constraints(dualPts);
		std::vector<std::vector<int>> indexes	  = dualPolytope.faceVerticesIdx();
		Eigen::MatrixXd				  G(indexes.size(), D.cols());
		for (int fIndex = 0; fIndex < indexes.size(); ++fIndex)
		{
			Eigen::MatrixXd F(indexes[fIndex].size(), D.cols());
			for (int vIndex = 0; vIndex < indexes[fIndex].size(); ++vIndex)
				F.row(vIndex) = D.row(indexes[fIndex][vIndex]);
			Eigen::VectorXd one = Eigen::VectorXd::Ones(F.rows());
			G.row(fIndex)		= F.bdcSvd(Eigen::ComputeThinU | Eigen::ComputeThinV).solve(one);
		}
		Eigen::MatrixXd V(G.rows(), x.rows());
		for (int index = 0; index < V.rows(); ++index)
			V.row(index) = x;
		V = G + V;
		std::vector<Point> constraintsVertices;
		constraintsVertices.reserve(V.rows());
		for (int index = 0; index < V.rows(); ++index)
		{
			Eigen::VectorXd curCoordinate(V.cols());
			for (int dimIdx = 0; dimIdx < dimension; ++dimIdx)
				curCoordinate(dimIdx) = V(index, dimIdx);
			constraintsVertices.emplace_back(Point(curCoordinate));
		}
		return constraintsVertices;
	}

	std::vector<Point> Polytope::verticesEnumerationIntersect(const std::vector<HalfSpace>& halfSpaces)
	{
		if (halfSpaces.empty())
			return std::vector<Point>();
		//ensure all the halfSpaces within same dimension
		int dimension	 = halfSpaces.front().dimension();
		int halfSpacesCnt = halfSpaces.size();
		for (int index = 0; index < halfSpacesCnt; ++index)
			assert(dimension == halfSpaces[index].dimension());
		Eigen::MatrixXd normals(halfSpacesCnt, dimension);
		Eigen::VectorXd offsets(halfSpacesCnt);
		for (int index = 0; index < halfSpacesCnt; ++index)
		{
			normals.row(index) = halfSpaces[index].normal();
			offsets(index)	 = halfSpaces[index].offset();
		}
		Eigen::FullPivLU<Eigen::MatrixXd> LU(normals);
		assert(LU.rank() >= normals.cols());
		std::vector<int> indicatorVec(normals.rows(), 0);
		for (int index = 0; index < normals.cols(); ++index)
			indicatorVec[index] = 1;
		std::vector<Point> intersections;
		std::vector<bool>  indicator(normals.rows(), false);
		std::fill(indicator.end() - normals.cols(), indicator.end(), true);
		do
		{
			Eigen::MatrixXd constraintMatrix(normals.cols(), normals.cols());
			Eigen::VectorXd constraintVector(normals.cols());
			int				pos = 0;
			for (std::size_t index = 0; index < normals.rows(); ++index)
			{
				if (indicator[index])
				{
					constraintMatrix.row(pos) = normals.row(index);
					constraintVector(pos)	 = -1.0 * offsets(index);
					++pos;
				}
			}
			Eigen::FullPivLU<Eigen::MatrixXd> curLU(constraintMatrix);
			if (curLU.rank() == dimension)
			{
				Eigen::VectorXd intersectionCoordinate = curLU.solve(constraintVector);
				intersections.emplace_back(Point(intersectionCoordinate));
			}
		} while (std::next_permutation(indicator.begin(), indicator.end()));
		//filter the points which out of the convex hull
		std::vector<Point> constraintVertices;
		for (std::size_t index = 0; index < intersections.size(); ++index)
		{
			bool			isAllSatisfy = true;
			Eigen::VectorXd curValues	= normals * intersections[index].coordinate() + offsets;
			for (int rowIndex = 0; rowIndex < curValues.rows(); ++rowIndex)
			{
				if (curValues(rowIndex) > 1e-10)
				{
					isAllSatisfy = false;
					break;
				}
			}
			if (isAllSatisfy)
				constraintVertices.emplace_back(intersections[index]);
		}
		intersections.clear();
		return constraintVertices;
	}

	std::vector<Point> Polytope::verticesEnumeration(const std::vector<capd::interval>& constraints)
	{
		//TODO
		assert(false);
		return std::vector<Point>();
	}

	std::vector<Point> Polytope::verticesEnumeration(const Eigen::VectorXd& center, double radius)
	{
		//TODO
		assert(false);
		return std::vector<Point>();
	}

	Polytope::Polytope()
	{
		pointConstraints_	 = std::vector<Point>(0);
		halfSpaceConstraints_ = std::vector<HalfSpace>(0);
		volume_				  = 0.0;
		dimension_			  = 0;
	}

	Polytope Polytope::Empty(size_t dimension)
	{
		assert(dimension >= 0);
		return Polytope({Point::zero(dimension)}, {HalfSpace::Empty(dimension)}, 0.0, dimension);
	}

	Polytope::Polytope(const std::vector<Point>& points)
	{
		if (points.empty())
		{
			halfSpaceConstraints_ = std::vector<HalfSpace>(0);
			pointConstraints_	 = std::vector<Point>(0);
			volume_				  = 0.0;
			dimension_			  = 0;
			return;
		}
		convexConstraints thisConstraints = ConvexHull::constraints(points);
		init(thisConstraints);
	}

	Polytope::Polytope(const std::vector<HalfSpace>& halfSpaces)
	{
		if (halfSpaces.empty())
		{
			halfSpaceConstraints_ = std::vector<HalfSpace>(0);
			pointConstraints_	 = std::vector<Point>(0);
			volume_				  = 0.0;
			dimension_			  = 0;
			return;
		}
		//ensure all the halfspaces within same dimension
		std::size_t dimension	 = halfSpaces.front().dimension();
		std::size_t halfspacesCnt = halfSpaces.size();
		for (std::size_t index = 0; index < halfspacesCnt; ++index)
			assert(dimension == halfSpaces[index].dimension());
		//vertices enumeration
		std::vector<Point> vertices = verticesEnumerationIntersect(halfSpaces);
		// std::vector<Point> vertices		   = verticesEnumerationDualPly(halfSpaces);
		convexConstraints thisConstraints = ConvexHull::constraints(vertices);
		init(thisConstraints);
	}

	Polytope::Polytope(const std::vector<capd::interval>& constraints)
	{
		if (constraints.empty())
		{
			halfSpaceConstraints_ = std::vector<HalfSpace>(0);
			pointConstraints_	 = std::vector<Point>(0);
			volume_				  = 0.0;
			dimension_			  = 0;
			return;
		}
		std::vector<Point> vertices		   = verticesEnumeration(constraints);
		convexConstraints  thisConstraints = ConvexHull::constraints(vertices);
		init(thisConstraints);
	}

	Polytope::Polytope(const capd::C0Rect2Set& set)
	{
		if (set.dimension() == 0)
		{
			halfSpaceConstraints_ = std::vector<HalfSpace>(0);
			pointConstraints_	 = std::vector<Point>(0);
			volume_				  = 0.0;
			dimension_			  = 0;
			return;
		}
		//TODO
		std::cout << "unimplemented constructor" << std::endl;
		exit(EXIT_FAILURE);
	}

	Polytope::Polytope(const Point& center, double radius)
	{
		std::vector<Point> vertices		   = verticesEnumeration(center.coordinate(), radius);
		convexConstraints  thisConstraints = ConvexHull::constraints(vertices);
		init(thisConstraints);
	}

	Polytope::Polytope(const Eigen::VectorXd& center, double radius)
	{
		std::vector<Point> vertices		   = verticesEnumeration(center, radius);
		convexConstraints  thisConstraints = ConvexHull::constraints(vertices);
		init(thisConstraints);
	}

	std::vector<Point> Polytope::pointConstraints() const { return pointConstraints_; }

	std::vector<HalfSpace> Polytope::halfSpaceConstraints() const { return halfSpaceConstraints_; }

	Point Polytope::centroid() const
	{
		assert(!pointConstraints_.empty());
		Eigen::VectorXd sum = pointConstraints_.front().coordinate();
		for (std::size_t index = 1; index < pointConstraints_.size(); ++index)
			sum += pointConstraints_[index].coordinate();
		return Point(sum / pointConstraints_.size());
	}

	std::vector<capd::interval> Polytope::constraints() const
	{
		assert(dimension_ > 0);
		std::vector<capd::interval> retConstraints(0);
		for (int dimIdx = 0; dimIdx < dimension_; ++dimIdx)
		{
			double curLowerBound = std::numeric_limits<double>::max();
			double curUpperBound = std::numeric_limits<double>::lowest();
			for (std::size_t index = 0; index < pointConstraints_.size(); ++index)
			{
				if (pointConstraints_[index][dimIdx] < curLowerBound)
					curLowerBound = pointConstraints_[index][dimIdx];
				if (pointConstraints_[index][dimIdx] > curUpperBound)
					curUpperBound = pointConstraints_[index][dimIdx];
			}
			retConstraints.emplace_back(capd::interval(curLowerBound, curUpperBound));
		}
		return retConstraints;
	}

	bool Polytope::empty() const
	{
		return (pointConstraints_.empty() || halfSpaceConstraints_.empty() || volume_ <= 0.0);
	}

	int Polytope::dimension() const
	{
		assert(dimension_ >= 0);
		return dimension_;
	}

	double Polytope::volume() const
	{
		assert(volume_ >= 0);
		return volume_;
	}

	bool Polytope::intersect(const Polytope& rhs, Polytope& result) const
	{
		if (this->empty() || rhs.empty())
		{
			result = Polytope::Empty(0);
			return false;
		}
		std::vector<Point> constraintVertices;
		std::vector<Point> thisVertices = this->pointConstraints_;
		std::vector<Point> innerVertices;
		std::vector<Point> outerVertices;
		for (const auto& vertex : thisVertices)
		{
			if (rhs.contains(vertex))
			{
				innerVertices.emplace_back(vertex);
			}
			else
			{
				outerVertices.emplace_back(vertex);
			}
		}
		if (innerVertices.empty())
		{
			result = Polytope::Empty(dimension_);
			return false;
		}
		if (outerVertices.empty())
		{
			result = *this;
			return true;
		}
		for (const auto& innerVertex : innerVertices)
		{
			for (const auto& outerVertex : outerVertices)
			{
				for (const auto& halfSpace : rhs.halfSpaceConstraints())
				{
					Eigen::VectorXd thisIntersection;
					if (halfSpace.intersect(innerVertex.coordinate(), outerVertex.coordinate(), thisIntersection))
						constraintVertices.emplace_back(Point(thisIntersection));
				}
			}
		}
		innerVertices.clear();
		outerVertices.clear();
		thisVertices = rhs.pointConstraints();
		for (const auto& vertex : thisVertices)
		{
			if (this->contains(vertex))
			{
				innerVertices.emplace_back(vertex);
			}
			else
			{
				outerVertices.emplace_back(vertex);
			}
		}
		if (innerVertices.empty())
		{
			result = Polytope::Empty(dimension_);
			return false;
		}
		if (outerVertices.empty())
		{
			result = rhs;
			return true;
		}
		for (const auto& innerVertex : innerVertices)
		{
			for (const auto& outerVertex : outerVertices)
			{
				for (const auto& halfSpace : halfSpaceConstraints_)
				{
					Eigen::VectorXd thisIntersection;
					if (halfSpace.intersect(innerVertex.coordinate(), outerVertex.coordinate(), thisIntersection))
						constraintVertices.emplace_back(Point(thisIntersection));
				}
			}
		}
		result = Polytope(constraintVertices);
		return true;
	}

	Polytope Polytope::unite(const Polytope& rhs) const
	{
		std::vector<Point>		  constraintVertices;
		const std::vector<Point>& thisVertices	= this->pointConstraints();
		const std::vector<Point>& anotherVertices = rhs.pointConstraints();
		constraintVertices.insert(constraintVertices.end(), thisVertices.begin(), thisVertices.end());
		constraintVertices.insert(constraintVertices.end(), anotherVertices.begin(), anotherVertices.end());
		return Polytope(constraintVertices);
	}

	bool Polytope::contains(const Point& point) const
	{
		for (const auto& halfSpace : halfSpaceConstraints_)
		{
			if (!halfSpace.contains(point))
				return false;
		}
		return true;
	}

	bool Polytope::contains(const Eigen::VectorXd& coordinate) const
	{
		for (const auto& halfSpace : halfSpaceConstraints_)
		{
			if (!halfSpace.contains(coordinate))
				return false;
		}
		return true;
	}

	std::ostream& operator<<(std::ostream& out, const Polytope& rhs)
	{
		out << "Polytope:{" << std::endl;
		out << "          halfSpace constraints:{" << std::endl;
		for (const auto& halfSpace : rhs.halfSpaceConstraints())
			out << "                                 " << halfSpace << std::endl;
		out << "                                 }" << std::endl;
		out << "point constraints:{";
		for (const auto& point : rhs.pointConstraints())
			out << "                  " << point << std::endl;
		out << "                  }" << std::endl;
		out << "volume:" << rhs.volume() << std::endl;
		out << "dimension:" << rhs.dimension() << std::endl;
		out << "         }" << std::endl;
		return out;
	}
} // namespace irafhy