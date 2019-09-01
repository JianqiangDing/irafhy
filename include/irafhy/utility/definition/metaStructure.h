#ifndef UTILITY_DEFINITION_META_STRUCTURE_H
#define UTILITY_DEFINITION_META_STRUCTURE_H

#include <cassert>
#include <iostream>
//TODO
#include <fmt/format.h>

namespace irafhy
{
	struct Time
	{
		double start_ = 0.0;
		double end_   = 0.0;
		Time()
			: start_(0.0)
			, end_(0.0){};
		Time(const Time& time)	 = default;
		Time(Time&& time) noexcept = default;
		Time(const double& start, const double& end)
		{
			assert(start <= end);
			start_ = start;
			end_   = end;
		};
		[[nodiscard]] double start() const { return start_; };
		[[nodiscard]] double end() const { return end_; };
		[[nodiscard]] double range() const { return end_ - start_; };
		inline bool			 operator<(const Time& rhs) const
		{
			if (start_ != rhs.start())
				return start_ < rhs.start();
			return end_ < rhs.end();
		}
		inline Time& operator=(const Time& time) = default;
		inline Time& operator=(Time&& time) noexcept = default;
		~Time()										 = default;
		friend std::ostream& operator<<(std::ostream& out, const Time& time)
		{
			out << "[" << time.start_ << ", " << time.end_ << "]";
			return out;
		}
	};
} // namespace irafhy
#endif //UTILITY_DEFINITION_META_STRUCTURE_H