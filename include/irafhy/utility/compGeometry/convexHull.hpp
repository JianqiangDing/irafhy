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
		std::vector<Point>					pointConstraints_;
		std::vector<HalfSpace>				halfSpaceConstraints_;
		std::vector<std::vector<HalfSpace>> neighborHalfSpaces_;
		std::vector<std::vector<Point>>		facetVertices_;
		std::vector<std::vector<int>>		facetVerticesIdx_;
		double								volume_{};
		int									dimension_{};

	public:
		convexConstraints()											= default;
		convexConstraints(const convexConstraints& constraints)		= default;
		convexConstraints(convexConstraints&& constraints) noexcept = default;
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
		[[nodiscard]] std::vector<Point>				  pointConstraints() const { return pointConstraints_; }
		[[nodiscard]] std::vector<HalfSpace>			  halfSpaceConstraints() const { return halfSpaceConstraints_; }
		[[nodiscard]] std::vector<std::vector<HalfSpace>> neighborHalfSpaces() const { return neighborHalfSpaces_; }
		[[nodiscard]] std::vector<std::vector<Point>>	 faceVertices() const { return facetVertices_; }
		[[nodiscard]] std::vector<std::vector<int>>		  faceVerticesIdx() const { return facetVerticesIdx_; }
		[[nodiscard]] double							  volume() const { return volume_; }
		[[nodiscard]] int								  dimension() const { return dimension_; }
	};

	class ConvexHull
	{
	public:
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