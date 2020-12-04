#include "Pokemon.h"
#include <string>

Pokemon::Pokemon(	
					std::string name,
					unsigned short level,
					unsigned long currentXP,
					unsigned long levelupXP,
					short hp,
					unsigned short attack,
					unsigned short defense,
					unsigned short specialAttack,
					unsigned short specialDefense,
					unsigned short speed)
{
	this->name = name;
	this->level = level;
	this->currentXP = currentXP;
	this->levelupXP = levelupXP;
	this->hp = hp;
	this->attack = attack;
	this->defense = defense;
	this->specialAttack = specialAttack;
	this->specialDefense = specialDefense;
	this->speed = speed;
}