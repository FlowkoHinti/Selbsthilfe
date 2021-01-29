#pragma once
#include <stdexcept>

template <typename integral, integral min, integral max>
class LimitedValue
{
private:
	integral x{ 0 };
public:
	LimitedValue(integral x) : x{ x }
	{
		if (!std::is_integral_v<integral>) throw std::runtime_error("no integral value");
		if (x < min) throw std::runtime_error("value below min!");
		else if(x > max) throw std::runtime_error("value beyond max!");
	}
	void setVal(integral v)
	{
		if (x < min) throw std::runtime_error("value below min!");
		else if (x > max) throw std::runtime_error("value beyond max!");
		else this->x = v;
	}

	integral getVal() const { return x; }
};

