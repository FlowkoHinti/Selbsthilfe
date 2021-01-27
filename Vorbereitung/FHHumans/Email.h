#pragma once
#include <string>
#include <exception>
class Email
{
protected:
	std::string email{ "" };
public:
	std::string getEmail() const
	{
		return email;
	}
	void setEmail(std::string newEmail)
	{
		email = newEmail;
	}

	static void validate(const std::string& email);

};

