#pragma once
#include <string>

enum class Type
{
	nA,
	fire,
	water,
	leaf,
	electric,
	stone,
	ground,
	bug,
	poison,
	ghost,
	dark,
	steel,
	psychic,
	fairy,
	flying,
	ice,
	fighting,
	dragon
};

class Pokemon
{
public:
	Pokemon() = default;
	Pokemon(
		std::string name,
		unsigned short level,
		unsigned long currentXP,
		unsigned long levelupXP,
		short hp,
		unsigned short attack,
		unsigned short defense,
		unsigned short specialAttack,
		unsigned short specialDefense,
		unsigned short speed);

	void gainXP(unsigned long amount);
	void levelUp();

	short getHP() const;
	unsigned short getAttack() const;
	unsigned short getDefense() const;
	unsigned short getSpecialAttack() const;
	unsigned short getSpecialDefense() const;
	unsigned short getSpeed() const;



private:
	std::string name{ "" };
	unsigned short level{ 1 };
	unsigned long currentXP{ 0 };
	unsigned long levelupXP{ 100 };
	bool alive{ true };

	short hp{ 0 };
	unsigned short attack{ 0 };
	unsigned short defense{ 0 };
	unsigned short specialAttack{ 0 };
	unsigned short specialDefense{ 0 };
	unsigned short speed{ 0 };

	Type FirstType{ Type::nA };
	Type SecondType{ Type::nA };
};

