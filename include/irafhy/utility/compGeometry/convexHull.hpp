#ifndef UTILITY_COMP_GEOMETRY_CONVEX_HULL_H
#define UTILITY_COMP_GEOMETRY_CONVEX_HULL_H

#include <irafhy/representation/geometric/basic/point.h>
#include <irafhy/representation/geometric/basic/halfSpace.h>
#include <irafhy/utility/extension/extQhull.hpp>
#include <iterator>
#include <libqhull_r/poly_r.h>
#include <libqhullcpp/Qhull.h>
#include <libqhullcpp/RboxPoints.h>
#include <libqhullcpp/QhullFacetList.h>
#include <libqhullcpp/QhullPoints.h>
#include <libqhullcpp/QhullError.h>
#include <libqhullcpp/QhullVertexSet.h>
#include <Eigen/Sparse>
#include <utility>
#include <vector>

namespace irafhy
{
	struct convexConstraints
	{
	private:
		/**
		 * @brief extreme vertices which define the convex hull
		 */
		std::vector<Point> pointConstraints_;
		/**
		 * @brief boundary half spaces which define the convex hull
		 */
		std::vector<HalfSpace> halfSpaceConstraints_;
		/**
		 * @brief each half space's neighbor half spaces
		 */
		std::vector<std::vector<HalfSpace>> neighborHalfSpaces_;
		/**
		 * @brief each facet's extreme vertices
		 */
		std::vector<std::vector<Point>> facetVertices_;
		/**
		 * @brief indexes of each facet's extreme vertices in whole convex hull extreme vertices
		 */
		std::vector<std::vector<int>> facetVerticesIdx_;
		/**
		 * @brief volume of the convex hull
		 */
		double volume_{};
		/**
		 * @brief dimension of the space which the convex hull in
		 */
		int dimension_{};

	public:
		/**
		 * @brief constructor
		 */
		convexConstraints() = default;
		/**
		 * @brief copy constructor
		 * @param constraints given constraint which defines the convex hull
		 */
		convexConstraints(const convexConstraints& constraints) = default;
		/**
		 * @brief move constructor
		 * @param constraints constraints which defines the convex hull
		 */
		convexConstraints(convexConstraints&& constraints) noexcept = default;
		/**
		 * @brief constructor with given information
		 * @param pointConstraints extreme vertices which define the convex hull
		 * @param halfSpaceConstraints half space constraints which define the convex hull
		 * @param neighborHalfSpaces vector storing each facet's neighbor facets
		 * @param facetVertices extreme vertices of each facet
		 * @param facetVerticesIdx indexes of each facet's extreme vertices in whole convex hull extreme vertices
		 * @param volume volume of the convex hull
		 * @param dimension dimension which the convex hull in
		 */
		convexConstraints(std::vector<Point>&				  pointConstraints,
						  std::vector<HalfSpace>&			  halfSpaceConstraints,
						  std::vector<std::vector<HalfSpace>> neighborHalfSpaces,
						  std::vector<std::vector<Point>>	 facetVertices,
						  std::vector<std::vector<int>>		  facetVerticesIdx,
						  double							  volume,
						  int								  dimension)
			: pointConstraints_(pointConstraints)
			, halfSpaceConstraints_(halfSpaceConstraints)
			, neighborHalfSpaces_(std::move(neighborHalfSpaces))
			, facetVertices_(std::move(facetVertices))
			, facetVerticesIdx_(std::move(facetVerticesIdx))
			, volume_(volume)
			, dimension_(dimension)
		{}
		/**
		 * @brief get the extreme vertices which define the convex hull
		 * @return the extreme vertices of the convex hull
		 */
		[[nodiscard]] std::vector<Point> pointConstraints() const { return pointConstraints_; }
		/**
		 * @brief get the half space constraints which define the convex hull
		 * @return the half space constraints of the convex hull
		 */
		[[nodiscard]] std::vector<HalfSpace> halfSpaceConstraints() const { return halfSpaceConstraints_; }
		/**
		 * @brief get the vector storing each facet's neighbor facets
		 * @return the vector storing each facet's neighbor facets
		 */
		[[nodiscard]] std::vector<std::vector<HalfSpace>> neighborHalfSpaces() const { return neighborHalfSpaces_; }
		/**
		 * @brief get the vertices of each facet
		 * @return the vertices of each facet
		 */
		[[nodiscard]] std::vector<std::vector<Point>> faceVertices() const { return facetVertices_; }
		/**
		 * @brief get the indexes of each facet
		 * @return indexes of each facet
		 */
		[[nodiscard]] std::vector<std::vector<int>> faceVerticesIdx() const { return facetVerticesIdx_; }
		/**
		 * @brief get the volume of the convex  hull
		 * @return the volume of the convex hull
		 */
		[[nodiscard]] double volume() const { return volume_; }
		/**
		 * @brief get the dimension of the space which the convex hull in
		 * @return the dimension of the space which the convex hull in
		 */
		[[nodiscard]] int dimension() const { return dimension_; }
	};

	class ConvexHull
	{
	public:
		/**
		 * @brief constructor of convex hull with given points
		 * @param points given points
		 * @return the resulting convex hull
		 */
		static convexConstraints constraints(const std::vector<Point>& points)
		{
			assert(!points.empty());
			//check if all points have same dimension
			int dimension = points.front().dimension();
			for (const auto& point : points)
				assert(dimension == point.dimension());
			//construct a qhull solver
			orgQhull::RboxPoints rboxPoints;
			rboxPoints.setDimension(dimension);
			std::vector<coordT> tempData;
			for (const Point& point : points)
			{
				for (int dimIdx = 0; dimIdx < dimension; ++dimIdx)
					tempData.emplace_back(point[dimIdx]);
			}
			orgQhull::QhullPoints qhullPoints(
				dimension, static_cast<countT>(points.size() * dimension), tempData.data());
			for (const orgQhull::QhullPoint& qhullPoint : qhullPoints)
				rboxPoints.append(qhullPoint);
			//the qhull disable the copy constructor function
			orgQhull::Qhull qhull(rboxPoints, "");
			//self check the facets
			// qh_check_points(qhull.qh());
			//get the constraints of the given qhull
			std::vector<Point>	 pointConstraints		= orgQhull::getVertices(qhull);
			std::vector<HalfSpace> halfSpaceConstraints = orgQhull::getHalfSpaces(qhull);
			//get the constraint of per facet
			std::vector<std::vector<Point>>		facetVertices;
			std::vector<std::vector<HalfSpace>> neighborHalfSpaces;
			std::vector<std::vector<int>>		facetVerticesIdx;
			for (const orgQhull::QhullFacet& qhullFacet : qhull.facetList())
			{
				facetVertices.emplace_back(orgQhull::getVertices(qhullFacet));
				facetVerticesIdx.emplace_back(orgQhull::getVerticesIdx(qhullFacet));
				neighborHalfSpaces.emplace_back(orgQhull::getHalfSpaces(qhullFacet.neighborFacets()));
			}
			for (auto& fIndex : facetVerticesIdx)
			{
				for (int& pIndex : fIndex)
				{
					auto curIter = std::find(pointConstraints.begin(), pointConstraints.end(), points[pIndex]);
					pIndex		 = std::distance(pointConstraints.begin(), curIter);
				}
			}
			return convexConstraints(pointConstraints,
									 halfSpaceConstraints,
									 neighborHalfSpaces,
									 facetVertices,
									 facetVerticesIdx,
									 qhull.volume(),
									 qhull.dimension());
		}
	};
} // namespace irafhy
#endif //UTILITY_COMP_GEOMETRY_CONVEX_HULL_H