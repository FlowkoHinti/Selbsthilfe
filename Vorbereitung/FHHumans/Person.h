#pragma once
#include <string>
#include <iostream>

enum class gender
{
	male,
	female,
	diverse
};

class person
{
protected:
	std::string Name{ "" };
	unsigned int GebDat{0};
	gender Geschlecht{gender::diverse};

public:
	person(const char* name, unsigned int birth, gender sex)
		: Name{std::string{name}}, GebDat{birth}, Geschlecht{sex}
	{}
	virtual ~person()
	{}

	std::string getName() const { return Name; }
	void setName(std::string name) { Name = name; }

	virtual std::ostream& ausgabe(std::ostream& ausgabestream, person& pers);
	friend std::ostream& operator<<(std::ostream& ausgabestream, person& pers);
};

