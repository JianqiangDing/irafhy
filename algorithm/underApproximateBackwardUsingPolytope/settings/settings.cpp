#include "settings.h"
#include <iostream>

namespace irafhy
{
	UABPSettings::UABPSettings(const irafhy::Settings& settings)
	{
		this->duration_		 = settings.duration();
		this->step_			 = settings.step();
		this->maxJump_		 = settings.maxJump();
		this->plot_			 = settings.plot();
		this->print_		 = settings.print();
		this->analysis_		 = settings.analysis();
		this->startModelID_  = settings.startModelID();
		this->initCondition_ = settings.initCondition();
	}

	UABPSettings::UABPSettings(const Time&		  duration,
							   const std::string& startModelID,
							   const Condition&   initCondition,
							   long				  maxJump,
							   ANALYSIS			  analysis,
							   bool				  plot,
							   bool				  print)
	{
		assert(duration.range() >= 0 && !startModelID.empty() && maxJump >= 1 && !initCondition.empty());
		this->duration_		 = duration;
		this->startModelID_  = startModelID;
		this->initCondition_ = initCondition;
		this->maxJump_		 = maxJump;
		this->analysis_		 = analysis;
		this->plot_			 = plot;
		this->print_		 = print;
	}

	void UABPSettings::help() const
	{
		std::cout << "==========================================================================" << std::endl;
		std::cout << "Under Approximating Backward Reachable Sets by Polytopes" << std::endl;
		std::cout << "duration: the duration of the simulation" << std::endl;
		std::cout << "startModelID: the NAME of the model which start the simulation" << std::endl;
		std::cout << "initCondition: the initial condition of the simulation" << std::endl;
		std::cout << "maxJump: the maximum depth of model level simulation" << std::endl;
		std::cout << "plot: plot the result or not" << std::endl;
		std::cout << "print: write out the result into files or not" << std::endl;
		std::cout << "==========================================================================" << std::endl;
	}

	void UABPSettings::setDuration(const Time& duration)
	{
		assert(duration.range() >= 0);
		this->duration_ = duration;
	}

	void UABPSettings::setStep(double step)
	{
		assert(step > 0);
		this->step_ = step;
	}

	void UABPSettings::setPlot(bool plot) { this->plot_ = plot; }

	void UABPSettings::setMaxJump(long int maxJump)
	{
		assert(maxJump >= 1);
		this->maxJump_ = maxJump;
	}

	void UABPSettings::setPrint(bool print) { this->print_ = print; }

	void UABPSettings::setAnalysis(ANALYSIS analysis) { this->analysis_ = analysis; }

	void UABPSettings::setStartModelID(const std::string& startModelID)
	{
		assert(!startModelID.empty());
		this->startModelID_ = startModelID;
	}

	void UABPSettings::setInitCondition(const Condition& initCondition)
	{
		assert(!initCondition.empty());
		this->initCondition_ = initCondition;
	}

	Time UABPSettings::duration() const
	{
		assert(this->duration_.range() >= 0);
		return this->duration_;
	}

	long UABPSettings::maxJump() const
	{
		assert(this->maxJump_ >= 1);
		return this->maxJump_;
	}

	double UABPSettings::step() const
	{
		assert(this->step_ > 0);
		return this->step_;
	}

	bool UABPSettings::print() const { return this->print_; }

	bool UABPSettings::plot() const { return this->plot_; }

	ANALYSIS UABPSettings::analysis() const { return this->analysis_; }

	std::string UABPSettings::startModelID() const
	{
		assert(!this->startModelID_.empty());
		return this->startModelID_;
	}

	Condition UABPSettings::initCondition() const
	{
		assert(!this->initCondition_.empty());
		return this->initCondition_;
	}

	void UABPSettings::setEpsilon(double epsilon)
	{
		assert(epsilon > 0);
		epsilon_ = epsilon;
	}

	double UABPSettings::epsilon() const
	{
		assert(epsilon_ > 0);
		return epsilon_;
	}

	void UABPSettings::setIsExact(bool isExact) { isExact_ = isExact; }

	bool UABPSettings::isExact() const { return isExact_; }

	std::ostream& operator<<(std::ostream& out, const UABPSettings& rhs)
	{
		//TODO
		return out;
	}
} // namespace irafhy