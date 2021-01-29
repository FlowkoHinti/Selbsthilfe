#pragma once
#include "LimitedValue.h"
#include "IStringable.h"
#include <string>
#include <ctime>
#include <iostream>

namespace FHTime
{
	class Time
		: IStringable
	{	
	public:
		LimitedValue<unsigned short, 0, 60> sekunden{ 0 };
		LimitedValue<unsigned short, 0, 60> minuten{ 0 };
		LimitedValue<unsigned short, 0, 24> stunden{ 0 };

		Time(unsigned short stunde, unsigned short minute, unsigned short sekunde)
		: sekunden{sekunde}, minuten{minute}, stunden{stunde}
		{}

		Time(const std::time_t t = std::time(nullptr));
		virtual ~Time() {}

		Time(Time& copyT)
			: sekunden{copyT.sekunden}, minuten{copyT.minuten}, stunden{copyT.stunden}
		{}

		std::string to_string();
		virtual std::ostream& output(std::ostream& os);
		friend static std::ostream& operator<<(std::ostream& os, Time& t);
	};



	class Swatch :
		public Time
	{
		const long double bph{ 1000.0 / 24.0 };
		const long double bpm{ bph/60.0 };
		const long double bps{ bpm/60.0 };
	public:
		LimitedValue<unsigned short, 0, 1000> beats{ 0 };

		Swatch(unsigned short stunde, unsigned short minute, unsigned short sekunde)
			: Time(stunde, minute, sekunde), beats{(stunde*bph + minute*bpm + sekunde*bps)}
		{}

		Swatch(const std::time_t beats);
		
		Swatch(Time& copyS)
			: Time(copyS.stunden.getVal(), copyS.minuten.getVal(), copyS.sekunden.getVal())
			, beats{ (copyS.stunden.getVal() * bph + copyS.minuten.getVal() * bpm + copyS.sekunden.getVal() * bps) }
		{}

		std::string to_string();
		std::ostream& output(std::ostream& os) override;
	};

	static std::ostream& operator<<(std::ostream& os, FHTime::Time& t)
	{
		return t.output(os);
	}
}



