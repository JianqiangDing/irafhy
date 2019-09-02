#pragma once

#include <irafhy/settings.h>

namespace irafhy
{
	class UABPSettings : public Settings
	{
	private:
		double epsilon_ = -1;
		bool   isExact_ = false;

	public:
		UABPSettings() = default;
		explicit UABPSettings(const Settings& settings);
		UABPSettings(const Time&		duration,
					 const std::string& startModelID,
					 const Condition&   initCondition,
					 long				maxJump  = 1,
					 ANALYSIS			analysis = ANALYSIS::BACKWARD,
					 bool				plot	 = true,
					 bool				print	= true);
		void					  setDuration(const Time& duration) override;
		void					  setStep(double step) override;
		void					  setPlot(bool plot) override;
		void					  setMaxJump(long int maxJump) override;
		void					  setPrint(bool print) override;
		void					  setAnalysis(ANALYSIS analysis) override;
		void					  setStartModelID(const std::string& startModelID) override;
		void					  setInitCondition(const Condition& initCondition) override;
		[[nodiscard]] Time		  duration() const override;
		[[nodiscard]] double	  step() const override;
		[[nodiscard]] long int	maxJump() const override;
		[[nodiscard]] bool		  plot() const override;
		[[nodiscard]] bool		  print() const override;
		[[nodiscard]] ANALYSIS	analysis() const override;
		[[nodiscard]] std::string startModelID() const override;
		[[nodiscard]] Condition   initCondition() const override;
		void					  help() const override;
		void					  setEpsilon(double epsilon);
		[[nodiscard]] double	  epsilon() const;
		void					  setIsExact(bool isExact);
		[[nodiscard]] bool		  isExact() const;
	};
	std::ostream& operator<<(std::ostream& out, const UABPSettings& rhs);
} // namespace irafhy