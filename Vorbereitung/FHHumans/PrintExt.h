#pragma once
#include <string>
namespace PrintExt
{
	template<typename typ>
	static std::string to_PrintItemStr(std::string p1, typ p2)
	{
		if (std::is_arithmetic_v<typ>)
		{
			return "\"" + p1 + "\"" + "=" + std::to_string(p2);
		}
		else return "";
	}
	template<>
	static std::string to_PrintItemStr(std::string p1, std::string p2)
	{
		return "\"" + p1 + "\"" + "=\"" + p2 + "\"";
	}

}