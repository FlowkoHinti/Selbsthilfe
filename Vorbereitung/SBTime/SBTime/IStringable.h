#pragma once
#include <string>
class IStringable
{
public:
	virtual std::string to_string() = 0;
};

