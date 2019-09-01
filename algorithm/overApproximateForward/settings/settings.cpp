#include "settings.h"

namespace irafhy
{
	OAFSettings::OAFSettings(const irafhy::Settings& settings)
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

	void OAFSettings::help() const { std::cout << "Over Approximating Forward  Simulating" << std::endl; }
} // namespace irafhy