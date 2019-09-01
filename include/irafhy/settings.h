#ifndef SETTINGS_H
#define SETTINGS_H

#include <irafhy/utility/definition/metaStructure.h>
#include <irafhy/utility/definition/enum.h>
#include <irafhy/representation/formal/basic/condition.h>
#include <vector>
#include <string>

namespace irafhy
{
	class Settings
	{
	protected:
		Time	 duration_ = Time(0.0, 0.0);
		double   step_	 = -1.0;
		long int maxJump_  = 1;
		bool	 plot_	 = false;
		bool	 print_	= false;
		ANALYSIS analysis_ = ANALYSIS::FORWARD;
		//TODO order setting
		std::string startModelID_  = std::string();
		Condition   initCondition_ = Condition::Empty();
		GEOMETRY	geometry_	  = GEOMETRY::INTERVAL_HULL;

	public:
		virtual ~Settings() = default;
		virtual void		 setDuration(const Time& duration);
		virtual void		 setStep(double step);
		virtual void		 setMaxJump(long int maxJump);
		virtual void		 setPlot(bool plot);
		virtual void		 setPrint(bool print);
		virtual void		 setAnalysis(ANALYSIS analysis);
		virtual void		 setGeometry(GEOMETRY geometry);
		virtual void		 setStartModelID(const std::string& startModelID);
		virtual void		 setInitCondition(const Condition& initCondition);
		virtual Time		 duration() const;
		virtual double		 step() const;
		virtual long int	 maxJump() const;
		virtual bool		 plot() const;
		virtual bool		 print() const;
		virtual ANALYSIS	 analysis() const;
		virtual GEOMETRY	 geometry() const;
		virtual std::string  startModelID() const;
		virtual Condition	initCondition() const;
		virtual void		 help() const;
		friend std::ostream& operator<<(std::ostream& out, const Settings& rhs);
	};
} // namespace irafhy
#endif //SETTINGS_H