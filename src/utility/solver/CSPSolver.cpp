#include <irafhy/utility/solver/CSPSolver.h>

namespace irafhy
{
	std::vector<IntervalHull> CSPSolver::solve(const irafhy::IntervalHull& intervalHull, double epsilon)
	{
		assert(epsilon > 0);
		if (intervalHull.dimension() == 0)
		{
			return std::vector<IntervalHull>(0);
		}
		std::vector<capd::interval> constraints = intervalHull.constraints();
		int							dim			= intervalHull.dimension();
		std::vector<double>			axisEpsilon(dim);
		std::vector<int>			levels(dim);
		for (std::size_t dimIdx = 0; dimIdx < dim; ++dimIdx)
		{
			double curRange		= constraints[dimIdx].rightBound() - constraints[dimIdx].leftBound();
			axisEpsilon[dimIdx] = curRange / (std::ceil(curRange / epsilon));
			levels[dimIdx]		= curRange / axisEpsilon[dimIdx];
		}
		for (std::size_t dimIdx = 0; dimIdx < dim; ++dimIdx)
			constraints[dimIdx] = capd::interval(constraints[dimIdx].leftBound() - axisEpsilon[dimIdx] / 2,
												 constraints[dimIdx].rightBound() + axisEpsilon[dimIdx] / 2);
		std::vector<IntervalHull> retIntervalHulls;
		for (int dimIdx = 1; dimIdx <= dim; ++dimIdx)
		{
			std::vector<bool> indicator(dim, false);
			std::fill(indicator.end() - dimIdx, indicator.end(), true);
			do
			{
				std::vector<std::vector<double>> possibleCoordinate(indicator.size());
				for (std::size_t idx = 0; idx < indicator.size(); ++idx)
				{
					if (indicator[idx])
					{
						possibleCoordinate[idx].emplace_back(constraints[idx].leftBound());
						possibleCoordinate[idx].emplace_back(constraints[idx].rightBound());
					}
					else
					{
						if (std::isnan(axisEpsilon[idx]))
						{
							possibleCoordinate[idx].emplace_back(
								(constraints[idx].leftBound() + constraints[idx].rightBound()) / 2);
						}
						else
						{
							double curLower = constraints[idx].leftBound() + axisEpsilon[idx];
							double curUpper = constraints[idx].rightBound() - axisEpsilon[idx];
							for (int levelIdx = 0; levelIdx < levels[idx]; ++levelIdx)
								possibleCoordinate[idx].emplace_back(curLower + levelIdx * axisEpsilon[idx]);
						}
					}
				}
				//total combinations
				int totalCombination = 1;
				for (std::size_t idx = 0; idx < indicator.size(); ++idx)
				{
					if (possibleCoordinate[idx].empty())
					{
						std::cout << "epsilon is too small to the interval constraint in dimension:" << idx
								  << std::endl;
						exit(EXIT_FAILURE);
					}
					totalCombination *= possibleCoordinate[idx].size();
				}
				for (int idx = 0; idx < totalCombination; ++idx)
				{
					std::vector<int> curOffsets(dim, 0);
					int				 curIdx = dim - 1;
					int				 auxIdx = idx;
					while (auxIdx)
					{
						curOffsets[curIdx] = auxIdx % possibleCoordinate[curIdx].size();
						auxIdx /= possibleCoordinate[curIdx].size();
						curIdx--;
					}
					std::vector<capd::interval> curConstraints;
					curConstraints.reserve(dim);
					for (int iIdx = 0; iIdx < dim; ++iIdx)
					{
						if (std::isnan(axisEpsilon[iIdx]))
						{
							curConstraints.emplace_back(capd::interval(possibleCoordinate[iIdx][curOffsets[iIdx]],
																	   possibleCoordinate[iIdx][curOffsets[iIdx]]));
						}
						else
						{
							double centerLeftBound = possibleCoordinate[iIdx][curOffsets[iIdx]] - axisEpsilon[iIdx] / 2;
							double centerRightBound
								= possibleCoordinate[iIdx][curOffsets[iIdx]] + axisEpsilon[iIdx] / 2;
							curConstraints.emplace_back(capd::interval(centerLeftBound, centerRightBound));
						}
					}
					retIntervalHulls.emplace_back(IntervalHull(curConstraints));
				}

			} while (std::next_permutation(indicator.begin(), indicator.end()));
		}
		return retIntervalHulls;
	}

	std::vector<IntervalHull> CSPSolver::branchPruneSolve(const irafhy::IntervalHull& intervalHull, double epsilon)
	{
		//default set the infinite space as the potential solution space
		assert(epsilon > 0);
		if (intervalHull.dimension() == 0)
		{
			return std::vector<IntervalHull>(0);
		}
		//construct the default space in interval hull form
		std::vector<capd::interval> defaultConstraints;
		defaultConstraints.reserve(intervalHull.dimension());
		for (std::size_t dimIdx = 0; dimIdx < intervalHull.dimension(); ++dimIdx)
			defaultConstraints.emplace_back(capd::interval(std::numeric_limits<double>::infinity() * -1.0,
														   std::numeric_limits<double>::infinity()));
		IntervalHull defaultIntervalHull(defaultConstraints);
		//construct the multimap using for storing the sub spaces
		std::multimap<std::size_t, IntervalHull> Map;
		Map.insert(std::make_pair(0, defaultIntervalHull));
		//construct the vector to store the resulting solutions
		while (!Map.empty())
		{
			//get the current space
			std::size_t  curNextDimension = Map.begin()->first;
			IntervalHull curSpace		  = Map.begin()->second;
			//check whether or not the current space contains solutions
			//if FALSE, continue the procedure
			//if TRUE, check whether or not the current space need to be split further
			//if FALSE, store the current space as a solution
			//if TRUE, split the current space and push into the checking queue
			//TODO
		}
		//return the solutions

		//TODO
		return std::vector<IntervalHull>();
	}

	std::vector<IntervalHull> CSPSolver::branchPruneSolve(const irafhy::Constraints& constraints, double epsilon)
	{
		//default set the infinite space as the potential solution space
		assert(epsilon > 0);
		if (constraints.size() == 0)
			return std::vector<IntervalHull>(0);
		//construct the default space in interval hull form
		std::vector<capd::interval> defaultConstraints;
		defaultConstraints.reserve(constraints.dimension());
		for (std::size_t dimIdx = 0; dimIdx < constraints.dimension(); ++dimIdx)
			defaultConstraints.emplace_back(capd::interval(50 * -1.0, 50));
		IntervalHull defaultIntervalHull(defaultConstraints);
		//construct the multimap using for storing the sub spaces
		std::multimap<std::size_t, IntervalHull> Map;
		Map.insert(std::make_pair(0, defaultIntervalHull));
		//construct the vector to store the resulting solutions
		std::vector<IntervalHull> retIntervalHulls;
		//construct dummy values
		capd::interval				time(0.0, 0.0);
		std::vector<capd::interval> dummyParams(0);
		while (!Map.empty())
		{
			//get the current space
			std::size_t  curNextDimension = Map.begin()->first;
			IntervalHull curSpace		  = Map.begin()->second;
			//erase the beginning element
			Map.erase(Map.begin());
			//DEBUG
			std::cout << Map.size() << std::endl;
			//DEBUG
			//check whether or not the current space contains solutions
			//construct the values used for constraints checking
			std::vector<capd::interval> curIn	= curSpace.constraints();
			CONSTRAINTS_SOLUTION		solution = constraints.isSatisfy(time, curIn, dummyParams);
			//if partial satisfied
			if (solution == CONSTRAINTS_SOLUTION::PARTIAL_SATISFIED)
			{
				//then check the current space need to split further or not
				//if can not split further, then store the current space
				if (curNextDimension >= constraints.dimension())
				{
					retIntervalHulls.emplace_back(curSpace);
					continue;
				}
				//if can split further, split the space and insert into the space checking map
				std::vector<capd::interval> lhsConstraints = curIn;
				std::vector<capd::interval> rhsConstraints = curIn;
				capd::interval&				thisInterval   = curIn[curNextDimension];
				lhsConstraints[curNextDimension]		   = capd::interval(
					  thisInterval.leftBound(), (thisInterval.leftBound() + thisInterval.rightBound()) / 2.0);
				rhsConstraints[curNextDimension] = capd::interval(
					(thisInterval.leftBound() + thisInterval.rightBound()) / 2.0, thisInterval.rightBound());
				std::size_t thisNextDimension = curNextDimension;
				if (lhsConstraints[curNextDimension].rightBound() - lhsConstraints[curNextDimension].leftBound()
					<= epsilon)
					thisNextDimension++;
				//insert the two spaces into space checking map
				Map.insert(std::make_pair(thisNextDimension, IntervalHull(lhsConstraints)));
				Map.insert(std::make_pair(thisNextDimension, IntervalHull(rhsConstraints)));
				//DEBUG
				std::cout << Map.size() << std::endl;
				//DEBUG
			}
		}
		return retIntervalHulls;
	}
} // namespace irafhy