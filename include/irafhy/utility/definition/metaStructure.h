#ifndef UTILITY_DEFINITION_META_STRUCTURE_H
#define UTILITY_DEFINITION_META_STRUCTURE_H

#include <cassert>
#include <iostream>
//TODO
#include <fmt/format.h>

namespace irafhy
{
	/**
	 * @brief struct used to hold the duration information
	 */
	struct Time
	{
		/**
		 * @brief start of the duration
		 */
		double start_ = 0.0;
		/**
		 * @brief end of the duration
		 */
		double end_ = 0.0;
		/**
		 * @brief constructor
		 */
		Time()
			: start_(0.0)
			, end_(0.0){};
		/**
		 * @brief copy constructor
		 * @param time given duration
		 */
		Time(const Time& time) = default;
		/**
		 * @brief move constructor
		 * @param time given duration
		 */
		Time(Time&& time) noexcept = default;
		/**
		 * @brief constructor with given start and end of the duration
		 * @param start start of the duration
		 * @param end end of the duration
		 */
		Time(const double& start, const double& end)
		{
			assert(start <= end);
			start_ = start;
			end_   = end;
		};
		/**
		 * @brief get the start of the duration
		 * @return the start of the duration
		 */
		[[nodiscard]] double start() const { return start_; };
		/**
		 * @brief get the end of the duration
		 * @return the end of the duration
		 */
		[[nodiscard]] double end() const { return end_; };
		/**
		 * @brief get the range of the interval specified by duration
		 * @return the reange of the interval specified by duration
		 */
		[[nodiscard]] double range() const { return end_ - start_; };
		/**
		 * @brief relational operator
		 * @param rhs right hand side duration
		 * @return TRUE if start or end less than the right hand side one
		 */
		inline bool operator<(const Time& rhs) const
		{
			if (start_ != rhs.start())
				return start_ < rhs.start();
			return end_ < rhs.end();
		}
		/**
		 * @brief assignment operator
		 * @param time right hand side duration
		 * @return resulting duration
		 */
		inline Time& operator=(const Time& time) = default;
		/**
		 * @brief assignment operator
		 * @param time right hand side duration
		 * @return resulting duration
		 */
		inline Time& operator=(Time&& time) noexcept = default;
		/**
		 * @brief destructor
		 */
		~Time() = default;
		/**
		 * @brief out the given right hand side duration to standard out stream
		 * @param out given out stream
		 * @param time given right hand side duration
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const Time& time)
		{
			out << "[" << time.start_ << ", " << time.end_ << "]";
			return out;
		}
	};
} // namespace irafhy
#endif //UTILITY_DEFINITION_META_STRUCTURE_H