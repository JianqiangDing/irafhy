#ifndef REPRESENTATION_GEOMETRIC_INTERVAL_HULL_H
#define REPRESENTATION_GEOMETRIC_INTERVAL_HULL_H

#include <capd/capdlib.h>
#include <vector>
#include <iostream>
#include <irafhy/representation/geometric/basic/point.h>
#include <irafhy/representation/geometric/geometry.h>

namespace irafhy
{
	class IntervalHull : public Geometry<IntervalHull>
	{
	private:
		/**
		 * @brief interval constraints of each dimension related entries
		 */
		std::vector<capd::interval> constraints_;

	public:
		/**
		 * @brief static constructor of Empty interval hull in specified space
		 * @param dimension dimension of the space which the interval hull in
		 * @return resulting Empty interval hull
		 */
		static IntervalHull Empty(std::size_t dimension = 0);

	public:
		/**
		 * @brief default constructor
		 */
		IntervalHull();
		/**
		 * @brief copy constructor with given interval hull
		 * @param intervalHull given interval hull
		 */
		IntervalHull(const IntervalHull& intervalHull) = default;
		/**
		 * @brief move constructor with given interval hull
		 * @param intervalHull given interval hull
		 */
		IntervalHull(IntervalHull&& intervalHull) noexcept = default;
		/**
		 * @brief constructor with given constraints
		 * @param constraints given constraints
		 */
		explicit IntervalHull(const std::vector<capd::interval>& constraints);
		/**
		 * @brief constructor with given points
		 * @param points given points
		 */
		explicit IntervalHull(const std::vector<Point>& points);
		/**
		 * @brief constructor with one given center and related radius which can specify the variance of each dimension
		 * @param center point which specify the center of the interval hull
		 * @param radius given radius
		 */
		IntervalHull(const Point& center, double radius);
		/**
		 * @brief constructor with given state set
		 * @param set given state set
		 */
		explicit IntervalHull(const capd::C0Rect2Set& set);
		/**
		 * @brief constructor with given coordinate of the center and related radius
		 * @param center coordinate of the center
		 * @param radius gvien radius
		 */
		IntervalHull(const Eigen::VectorXd& center, double radius);
		/**
		 * @brief destructor
		 */
		~IntervalHull() override = default;
		/**
		 * @brief get the constraints of the interval hull
		 * @return the constraints of the interval hull
		 */
		[[nodiscard]] std::vector<capd::interval> constraints() const;
		/**
		 * @brief check if the interval hull is empty or not
		 * @return TRUE if the interval hull's volume is zero or has empty constraints
		 */
		[[nodiscard]] bool empty() const override;
		/**
		 * @brief get the dimension of the space which the interval hull in
		 * @return the dimension of the target space
		 */
		[[nodiscard]] int dimension() const override;
		/**
		 * @brief get the extreme vertices of the interval hull
		 * @return the extreme vertices of the interval hull
		 */
		[[nodiscard]] std::vector<Point> extremeVertices() const;
		/**
		 * @brief randomly sample a point from the domain defined by the interval hull
		 * @return resulting point which randomly sampled from the domain defined by the interval hull
		 */
		[[nodiscard]] Point randInnerPoint() const;
		/**
		 * @brief get the centroid of the interval hull
		 * @return the centroid of the interal hull
		 */
		[[nodiscard]] Point centroid() const;
		/**
		 * @brief check if the current interval hull intersects with the right hand side interval hull or not
		 * @param rhs right hand side interval hull
		 * @param result intersection of two interval hulls if exists
		 * @return TRUE if the intersection isn't empty
		 */
		bool intersect(const IntervalHull& rhs, IntervalHull& result) const override;
		/**
		 * @brief get the union of the current interval hull and right hand side interval hull
		 * @param rhs right hand side interval hull
		 * @return the union of two interval hulls
		 */
		[[nodiscard]] IntervalHull unite(const IntervalHull& rhs) const override;
		/**
		 * @brief check if the given point inside the domain defined by the interval hull or not
		 * @param point the given point
		 * @return TRUE if the given point inside the domain defined by the interval hull
		 */
		[[nodiscard]] bool contains(const Point& point) const override;
		/**
		 * @brief check if the given coordinate inside the domain defined by the interval hull or not
		 * @param coordinate the given coordinate
		 * @return TRUE if the given coordinate inside the domain defined by the interval hull
		 */
		[[nodiscard]] bool contains(const Eigen::VectorXd& coordinate) const override;
		/**
		 * @brief check if the given interval hull inside the current interval hull or not
		 * @param rhs right hand side interval hull
		 * @return TRUE if the given interval hull inside the current interval hull
		 */
		[[nodiscard]] bool contains(const IntervalHull& rhs) const;
		/**
		 * @brief get the constraint of specified dimension
		 * @param index index of the dimension
		 * @return the constraint of given dimension in interval form
		 */
		capd::interval& operator[](std::size_t index);
		/**
		 * @brief get the constraint of specified dimension
		 * @param index index of the dimension
		 * @return the constraint of given dimension in interval form
		 */
		const capd::interval& operator[](std::size_t index) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side interval hull
		 * @return TRUE if the two interval hulls equal to each other
		 */
		bool operator==(const IntervalHull& rhs) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side interval hull
		 * @return TRUE if the current interval hull does not equal to the given one
		 */
		bool operator!=(const IntervalHull& rhs) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side interval hull
		 * @return FALSE if the there exist at least one dimension in which the constraint of current interval hull is greater than or equal to the right hand side one's
		 */
		bool operator<(const IntervalHull& rhs) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side interval hull
		 * @return FALSE if the there exist at least one dimension in which the constraint of current interval hull is greater than the right hand side one's
		 */
		bool operator<=(const IntervalHull& rhs) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side interval hull
		 * @return FALSE if there exist at least one dimension in which the constraint of current interval hull is less than or equal to the right hand side one's
		 */
		bool operator>(const IntervalHull& rhs) const;
		/**
		 * @brief relational operator
		 * @param rhs right hand side interval hull
		 * @return FALSE if there exist at least one dimension in which the constraint of current interval hull less than the right hand side one's
		 */
		bool operator>=(const IntervalHull& rhs) const;
		/**
		 * @brief assignment operator
		 * @param rhs right hand side interval hull
		 * @return resulting interval hull
		 */
		IntervalHull& operator=(const IntervalHull& rhs) = default;
		/**
		 * @brief assignment operator
		 * @param rhs right hand side interval hull
		 * @return resulting interval hull
		 */
		IntervalHull& operator=(IntervalHull&& rhs) = default;
	};

	/**
	 * @brief out the right hand side interval hull to standard out stream
	 * @param out given out stream
	 * @param rhs right hand side interval hull
	 * @return resulting out stream
	 */
	std::ostream& operator<<(std::ostream& out, const IntervalHull& rhs);
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_INTERVAL_HULL_H