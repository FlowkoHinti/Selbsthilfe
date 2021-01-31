#include "Email.h"
#include <regex>

void Email::validate(const std::string& email)
{
	std::regex regexp{ "^([a-z0-9]+[.|-]?[a-z0-9]+)@([a-z-]+.?[a-z]+.[a-z]+)" };
	if (std::regex_match(email, regexp) || email == "")
		return;
	else throw std::invalid_argument("Format der Email ist Falsch!");
}