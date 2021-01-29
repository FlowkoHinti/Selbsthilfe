#include "Time.h"
#include <ctime>


FHTime::Time::Time(const std::time_t t)
{
	std::tm now;
	localtime_s(&now, &t);
	this->sekunden = now.tm_sec;
	this->minuten = now.tm_min;
	this->stunden = now.tm_hour;
}
FHTime::Swatch::Swatch(const std::time_t beats)
	: FHTime::Time(0, 0, 0), beats{ beats }
{
	long double b = static_cast<long double>(beats);
	while (b > 0)
	{
		if (b > bph)
		{
			stunden.setVal(stunden.getVal() + 1);
			b -= bph;
		}
		else if (b > bpm)
		{
			minuten.setVal(minuten.getVal() + 1);
			b -= bpm;
		}
		else
		{
			sekunden.setVal(b);
			b = 0;
		}
	}
}

std::string FHTime::Time::to_string()
{
	return std::to_string(stunden.getVal()) + ":" + std::to_string(minuten.getVal()) + ":" +
	std::to_string(sekunden.getVal());
}

std::string FHTime::Swatch::to_string()
{
	return Time::to_string() + "@" + std::to_string(beats.getVal());
}

std::ostream& FHTime::Time::output(std::ostream& os)
{
	os << to_string();
	return os;
}

std::ostream& FHTime::Swatch::output(std::ostream& os)
{
	os << to_string();
	return os;
}