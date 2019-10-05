#include <irafhy/utility/plotter.h>
#include <irafhy/utility/matplotlibcpp.h>

namespace irafhy
{
	void Plotter::plot(const std::vector<capd::interval>& timeSequence,
					   const std::vector<IntervalHull>&   intervalHulls,
					   const std::vector<std::size_t>&	dimensions)
	{
		assert(dimensions.size() >= 1 && dimensions.size() <= 3);
		{
			if (intervalHulls.empty())
				return;
			if (!timeSequence.empty())
				assert(timeSequence.size() == intervalHulls.size());
			//check if all the given dimensions are valid
			std::size_t thisDimension = intervalHulls.front().dimension();
			for (const auto& dimension : dimensions)
				assert(dimension < thisDimension);
		}
		matplotlibcpp::figure_size(1000, 1000);
		matplotlibcpp::axis("equal");
		if (dimensions.size() == 2 || !timeSequence.empty())
		{
			//if 2D plotting
			//setting
			std::map<std::string, std::string> keywords;
			keywords["alpha"] = "0.4";
			keywords["color"] = "blue";
			keywords["hatch"] = "";
			double XLow		  = std::numeric_limits<double>::max();
			double XUp		  = std::numeric_limits<double>::min();
			double YLow		  = std::numeric_limits<double>::max();
			double YUp		  = std::numeric_limits<double>::min();
			//prepare data
			std::vector<double> x(2), y1(2), y2(2);
			if (!timeSequence.empty())
			{
				for (std::size_t index = 0; index < intervalHulls.size(); ++index)
				{
					x[0]  = timeSequence[index].leftBound();
					XLow  = XLow < x[0] ? XLow : x[0];
					x[1]  = timeSequence[index].rightBound();
					XUp   = XUp > x[1] ? XUp : x[1];
					y1[0] = intervalHulls[index][dimensions[0]].leftBound();
					y1[1] = intervalHulls[index][dimensions[0]].leftBound();
					YLow  = YLow < y1[0] ? YLow : y1[0];
					y2[0] = intervalHulls[index][dimensions[0]].rightBound();
					y2[1] = intervalHulls[index][dimensions[0]].rightBound();
					YUp   = YUp > y2[1] ? YUp : y2[1];
					matplotlibcpp::fill_between(x, y1, y2, keywords);
				}
				matplotlibcpp::xlabel("Time");
				matplotlibcpp::ylabel("variable 0");
			}
			else
			{
				for (const auto& intervalHull : intervalHulls)
				{
					x[0]  = intervalHull[dimensions[0]].leftBound();
					XLow  = XLow < x[0] ? XLow : x[0];
					x[1]  = intervalHull[dimensions[0]].rightBound();
					XUp   = XUp > x[1] ? XUp : x[1];
					y1[0] = intervalHull[dimensions[1]].leftBound();
					y1[1] = intervalHull[dimensions[1]].leftBound();
					YLow  = YLow < y1[0] ? YLow : y1[0];
					y2[0] = intervalHull[dimensions[1]].rightBound();
					y2[1] = intervalHull[dimensions[1]].rightBound();
					YUp   = YUp > y2[1] ? YUp : y2[1];
					matplotlibcpp::fill_between(x, y1, y2, keywords);
				}
				matplotlibcpp::xlabel("variable 0");
				matplotlibcpp::ylabel("variable 1");
			}
			XLow = std::floor(XLow);
			XUp  = std::ceil(XUp);
			YLow = std::floor(YLow);
			YUp  = std::ceil(YUp);
			matplotlibcpp::xlim(XLow, XUp);
			matplotlibcpp::ylim(YLow, YUp);
		}
		else
		{
			//if 3D plotting
			//TODO
		}
		//set the name of the window
		matplotlibcpp::title("Figure");
		//show the figure
		matplotlibcpp::show();
	}
} // namespace irafhy