#ifndef UTILITY_EXTENSION_EXT_QHULL_H
#define UTILITY_EXTENSION_EXT_QHULL_H

#include <irafhy/representation/geometric/basic/halfSpace.h>
#include <irafhy/representation/geometric/basic/point.h>
#include <libqhullcpp/QhullHyperplane.h>
#include <libqhullcpp/QhullFacet.h>
#include <libqhullcpp/QhullVertexSet.h>
#include <libqhullcpp/QhullFacetSet.h>
#include <libqhullcpp/QhullFacetList.h>
#include <libqhullcpp/Qhull.h>
#include <vector>

namespace orgQhull
{
	static Eigen::VectorXd getNormal(const QhullHyperplane& qhullHyperplane)
	{
		int				dimension = qhullHyperplane.dimension();
		Eigen::VectorXd retNorm   = Eigen::VectorXd::Zero(dimension);
		const realT*	c		  = qhullHyperplane.coordinates();
		for (int dimIdx = 0; dimIdx < dimension; ++dimIdx)
			retNorm(dimIdx) = double(*c++);
		return retNorm;
	}

	static double getOffset(const QhullHyperplane& qhullHyperplane) { return qhullHyperplane.offset(); }

	static std::vector<int> getVerticesIdx(const QhullFacet& qhullFacet)
	{
		std::vector<int> retIndices;
		retIndices.reserve(qhullFacet.vertices().size());
		for (const QhullVertex& qhullVertex : qhullFacet.vertices())
			retIndices.emplace_back(qhullVertex.point().id());
		return retIndices;
	}

	static std::vector<irafhy::Point> getVertices(const Qhull& qhull)
	{
		std::vector<irafhy::Point> retVertices;
		retVertices.reserve(qhull.vertexCount());
		for (const QhullVertex& qhullVertex : qhull.vertexList())
			retVertices.emplace_back(irafhy::Point(qhullVertex.point().toStdVector()));
		return retVertices;
	}

	static std::vector<irafhy::Point> getVertices(const QhullFacet& qhullFacet)
	{
		std::vector<irafhy::Point> retVertices;
		retVertices.reserve(qhullFacet.vertices().size());
		for (const QhullVertex& qhullVertex : qhullFacet.vertices())
			retVertices.emplace_back(irafhy::Point(qhullVertex.point().toStdVector()));
		return retVertices;
	}

	static std::vector<irafhy::HalfSpace> getHalfSpaces(const Qhull& qhull)
	{
		std::vector<irafhy::HalfSpace> retHalfSpaces;
		retHalfSpaces.reserve(qhull.facetCount());
		for (const QhullFacet& qhullFacet : qhull.facetList())
			retHalfSpaces.emplace_back(
				irafhy::HalfSpace(getNormal(qhullFacet.hyperplane()), getOffset(qhullFacet.hyperplane())));
		return retHalfSpaces;
	}

	static std::vector<irafhy::HalfSpace> getHalfSpaces(const QhullFacetSet& qhullFacetSet)
	{
		std::vector<irafhy::HalfSpace> retHalfSpaces;
		retHalfSpaces.reserve(qhullFacetSet.size());
		for (const QhullFacet& qhullFacet : qhullFacetSet)
			retHalfSpaces.emplace_back(
				irafhy::HalfSpace(getNormal(qhullFacet.hyperplane()), getOffset(qhullFacet.hyperplane())));
		return retHalfSpaces;
	}

	static bool contains(const irafhy::Point& point, const Qhull& qhull)
	{
		for (const QhullFacet& qhullFacet : qhull.facetList())
		{
			Eigen::VectorXd normal = getNormal(qhullFacet.hyperplane());
			double			offset = getOffset(qhullFacet.hyperplane());
			if (normal.dot(point.coordinate()) + offset > 0)
				return false;
		}
		return true;
	}
} // namespace orgQhull
#endif //UTILITY_EXTENSION_EXT_QHULL_H