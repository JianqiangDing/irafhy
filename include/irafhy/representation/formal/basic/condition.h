#ifndef REPRESENTATION_FORMAL_BASIC_CONDITION_H
#define REPRESENTATION_FORMAL_BASIC_CONDITION_H

#include <irafhy/utility/definition/enum.h>
#include <irafhy/representation/geometric/intervalHull.h>
#include <irafhy/representation/geometric/polytope.h>
#include <boost/variant.hpp>

namespace irafhy
{
	/**
	 * @brief geometry entity which used for represent the interval hull or polytope and any other objects shall be supported in the future.
	 */
	using GeoEntity = boost::variant<IntervalHull, Polytope>;

	struct geoEntityVisitor : public boost::static_visitor<GeoEntity>
	{
	public:
		GeoEntity operator()(const GeoEntity& geoEntity) const { return geoEntity; }
	};

	class Condition
	{
	private:
		/**
		 * @brief entity of the condition
		 */
		GeoEntity geoEntity_;

	public:
		/**
		 * @brief constructor for empty condition
		 * @param geometry kind of the geometry entity
		 * @param dimension dimension of the condition
		 * @return the resulting empty condition
		 */
		static Condition Empty(GEOMETRY geometry = GEOMETRY::INTERVAL_HULL, std::size_t dimension = 0);

	public:
		/**
		 * @brief constructor
		 */
		Condition();
		/**
		 * @brief constructor with given points
		 * @param points given points
		 * @param geometry kind of the geometry entity
		 */
		explicit Condition(const std::vector<Point>& points, GEOMETRY geometry);
		/**
		 * @brief constructor with given constraints
		 * @param constraints given constraints
		 * @param geometry kind of the geometry entity
		 */
		explicit Condition(const std::vector<capd::interval>& constraints, GEOMETRY geometry);
		/**
		 * @brief constructor with given geometry entity
		 * @param geoEntity given geometry entity
		 */
		explicit Condition(const GeoEntity& geoEntity);
		/**
		 * @brief constructor with given center, radius
		 * @param center center of the geometry object
		 * @param radius radius used for geometry object constructing
		 * @param geometry kind of the geometry entity
		 */
		Condition(const Point& center, double radius, GEOMETRY geometry);
		/**
		 * @brief constructor with given set
		 * @param set the given capd set
		 * @param geometry kind of the geometry entity
		 */
		Condition(const capd::C0Rect2Set& set, GEOMETRY geometry);
		/**
		 * @brief destructor
		 */
		~Condition() = default;
		/**
		 * @brief get the constraints of the condition
		 * @return the constraints of the condition
		 */
		[[nodiscard]] capd::IVector constraints() const;
		/**
		 * @brief get the geometry entity of the condition
		 * @return the geometry entity of the condition
		 */
		[[nodiscard]] GeoEntity entity() const;
		/**
		 * @brief check if the condition is empty
		 * @return TRUE if the condition is in zero dimensional space or volume if equal to zero
		 */
		[[nodiscard]] bool empty() const;
		/**
		 * @brief get the dimension of the condition
		 * @return
		 */
		[[nodiscard]] int dimension() const;
		/**
		 * @brief get the intersection between two conditions
		 * @param rhs the right hand side condition
		 * @param result intersection condition
		 * @return TRUE if the intersection is not empty
		 */
		bool intersect(const Condition& rhs, Condition& result) const;
		/**
		 * @brief get the union of the two conditions
		 * @param rhs the right hand side condition
		 * @return the union of the conditions
		 */
		[[nodiscard]] Condition unite(const Condition& rhs) const;
		/**
		 * @brief get an point from the condition randomly
		 * @return the resulting point
		 */
		[[nodiscard]] Point randInnerPoint() const;
		/**
		 * @brief get the centroid of the condition
		 * @return the centroid of the entity
		 */
		Point centroid() const;
		/**
		 * @brief check if the current condition contains the given condition
		 * @param rhs the right hand side condition
		 * @return TRUE if the current condition contains the right hand side one
		 */
		[[nodiscard]] bool contains(const Condition& rhs) const;
		/**
		 * @brief check if the current condition contains the given point
		 * @param point the right hand side point
		 * @return TRUE if the current condition contains the given point
		 */
		[[nodiscard]] bool contains(const Point& point) const;
		/**
		 * @brief get the extrem vertices of the condtion
		 * @return the resulting vertices
		 */
		[[nodiscard]] std::vector<Point> vertices() const;
		/**
		 * @brief get the set representation of the current condition
		 * @return the resulting set representation
		 */
		[[nodiscard]] capd::C0Rect2Set set() const;
	};
	/**
	 * @brief output the right hand side condition to the standard out stream
	 * @param out the given out stream
	 * @param rhs the given right hand side condition
	 * @return the resulting out stream
	 */
	std::ostream& operator<<(std::ostream& out, const Condition& rhs);
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_CONDITION_H