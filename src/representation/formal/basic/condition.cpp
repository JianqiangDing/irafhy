#include <irafhy/representation/formal/basic/condition.h>

namespace irafhy
{
	Condition::Condition() { geoEntity_ = IntervalHull::Empty(); }

	Condition Condition::Empty(GEOMETRY geometry, std::size_t dimension)
	{
		switch (geometry)
		{
			case GEOMETRY::INTERVAL_HULL:
				return Condition(IntervalHull::Empty(dimension));
			case GEOMETRY::POLYTOPE:
				return Condition(Polytope::Empty(dimension));
			default:
				exit(EXIT_FAILURE);
		}
	}

	Condition::Condition(const std::vector<Point>& points, GEOMETRY geometry)
	{
		switch (geometry)
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				geoEntity_ = IntervalHull(points);
				break;
			}
			case GEOMETRY::POLYTOPE:
			{
				geoEntity_ = Polytope(points);
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
	}

	Condition::Condition(const std::vector<capd::interval>& constraints, irafhy::GEOMETRY geometry)
	{
		switch (geometry)
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				geoEntity_ = IntervalHull(constraints);
				break;
			}
			case GEOMETRY::POLYTOPE:
			{
				geoEntity_ = Polytope(constraints);
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
	}

	Condition::Condition(const GeoEntity& geoEntity) { geoEntity_ = geoEntity; }

	Condition::Condition(const Point& center, double radius, GEOMETRY geometry)
	{
		switch (geometry)
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				geoEntity_ = IntervalHull(center, radius);
				break;
			}
			case GEOMETRY::POLYTOPE:
			{
				geoEntity_ = Polytope(center, radius);
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
	}

	Condition::Condition(const capd::C0Rect2Set& set, GEOMETRY geometry)
	{
		switch (geometry)
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				geoEntity_ = IntervalHull(set);
				break;
			}
			case GEOMETRY::POLYTOPE:
			{
				geoEntity_ = Polytope(set);
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
	}

	capd::IVector Condition::constraints() const
	{
		switch (GEOMETRY(geoEntity_.which()))
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				std::vector<capd::interval> thisConstraints = boost::get<IntervalHull>(geoEntity_).constraints();
				capd::IVector				retConstraints(thisConstraints.size());
				for (int index = 0; index < thisConstraints.size(); ++index)
					retConstraints[index] = thisConstraints[index];
				return retConstraints;
			}
			case GEOMETRY::POLYTOPE:
			{
				//TODO
			}
			default:
				exit(EXIT_FAILURE);
		}
	}

	GeoEntity Condition::entity() const { return geoEntity_; }

	bool Condition::empty() const
	{
		switch (GEOMETRY(geoEntity_.which()))
		{
			case GEOMETRY::INTERVAL_HULL:
				return boost::get<IntervalHull>(geoEntity_).empty();
			case GEOMETRY::POLYTOPE:
				return boost::get<Polytope>(geoEntity_).empty();
			default:
				exit(EXIT_FAILURE);
		}
	}

	int Condition::dimension() const
	{
		switch (GEOMETRY(geoEntity_.which()))
		{
			case GEOMETRY::INTERVAL_HULL:
				return boost::get<IntervalHull>(geoEntity_).dimension();
			case GEOMETRY::POLYTOPE:
				return boost::get<Polytope>(geoEntity_).dimension();
			default:
				exit(EXIT_FAILURE);
		}
	}

	bool Condition::intersect(const Condition& rhs, Condition& result) const
	{
		assert(GEOMETRY(geoEntity_.which()) == GEOMETRY(rhs.entity().which()));
		switch (GEOMETRY(geoEntity_.which()))
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				IntervalHull retIntervalHull  = IntervalHull::Empty(this->dimension());
				IntervalHull thisIntervalHull = boost::get<IntervalHull>(geoEntity_);
				IntervalHull rhsIntervalHull  = boost::get<IntervalHull>(rhs.entity());
				bool		 ret			  = thisIntervalHull.intersect(rhsIntervalHull, retIntervalHull);
				result						  = Condition(retIntervalHull);
				return ret;
			}
			case GEOMETRY::POLYTOPE:
			{
				//TODO
			}
			default:
				exit(EXIT_FAILURE);
		}
		return false;
	}

	Condition Condition::unite(const Condition& rhs) const
	{
		assert(GEOMETRY(geoEntity_.which()) == GEOMETRY(rhs.entity().which()));
		switch (GEOMETRY(geoEntity_.which()))
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				IntervalHull thisIntervalHull = boost::get<IntervalHull>(geoEntity_);
				IntervalHull rhsIntervalHull  = boost::get<IntervalHull>(rhs.entity());
				IntervalHull retIntervalHull  = thisIntervalHull.unite(rhsIntervalHull);
				return Condition(retIntervalHull);
			}
			case GEOMETRY::POLYTOPE:
			{
				//TODO
			}
			default:
				exit(EXIT_FAILURE);
		}
	}

	Point Condition::randInnerPoint() const
	{
		switch (GEOMETRY(geoEntity_.which()))
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				//TODO
			}
			case GEOMETRY::POLYTOPE:
			{
				//TODO
			}
			default:
				exit(EXIT_FAILURE);
		}
	}

	Point Condition::centroid() const
	{
		switch (GEOMETRY(geoEntity_.which()))
		{
			case GEOMETRY::INTERVAL_HULL:
				return boost::get<IntervalHull>(geoEntity_).centroid();
			case GEOMETRY::POLYTOPE:
				return boost::get<Polytope>(geoEntity_).centroid();
			default:
				exit(EXIT_FAILURE);
		}
	}

	bool Condition::contains(const irafhy::Point& point) const
	{
		//TODO
		return false;
	}

	bool Condition::contains(const irafhy::Condition& rhs) const
	{
		assert(geoEntity_.which() == rhs.entity().which());
		switch (GEOMETRY(geoEntity_.which()))
		{
			case GEOMETRY::INTERVAL_HULL:
				return boost::get<IntervalHull>(geoEntity_).contains(boost::get<IntervalHull>(rhs.entity()));
			case GEOMETRY::POLYTOPE:
			{
				//TODO
				return false;
			}
			default:
				exit(EXIT_FAILURE);
		}
		return false;
	}

	std::ostream& operator<<(std::ostream& out, const Condition& rhs)
	{
		switch (GEOMETRY(rhs.entity().which()))
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				out << boost::get<IntervalHull>(rhs.entity());
				return out;
			}
			case GEOMETRY::POLYTOPE:
			{
				out << boost::get<Polytope>(rhs.entity());
				return out;
			}
			default:
				exit(EXIT_FAILURE);
		}
	}

	std::vector<Point> Condition::vertices() const
	{
		switch (GEOMETRY(geoEntity_.which()))
		{
			case GEOMETRY::INTERVAL_HULL:
				return boost::get<IntervalHull>(geoEntity_).extremeVertices();
			case GEOMETRY::POLYTOPE:
				return boost::get<Polytope>(geoEntity_).pointConstraints();
			default:
				exit(EXIT_FAILURE);
		}
	}

	capd::C0Rect2Set Condition::set() const
	{
		switch (GEOMETRY(geoEntity_.which()))
		{
			case GEOMETRY::INTERVAL_HULL:
			{
				IntervalHull  intervalHull = boost::get<IntervalHull>(geoEntity_);
				capd::IVector iVector(intervalHull.dimension());
				for (int index = 0; index < intervalHull.dimension(); ++index)
					iVector[index] = intervalHull.constraints()[index];
				return capd::C0Rect2Set(iVector);
			}
			case GEOMETRY::POLYTOPE:
			{
				std::cout << "operation unsupported" << std::endl;
				exit(EXIT_FAILURE);
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
	}
} // namespace irafhy