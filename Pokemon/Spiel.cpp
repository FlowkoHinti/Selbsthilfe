#include "Spiel.h"
#include "Pokemon.h"
#include <iostream>

using namespace std;

unsigned int randomNum(unsigned int start, unsigned int end)
{
	if (end > start)return (rand() % (end - start)) + start;
	else return start;
}

void Spiel::drawGame()
{
	cout << string(100, '\n');
	for (auto& zeile : game)
	{
		cout << zeile << endl;
	}
}

void Spiel::startGame()
{
	this->drawGame();
	this->drawGame();
	this->drawGame();
}


void Spiel::addAllPokemon()
{
	this->PokemonList.push_back(Pokemon{ "Bisasam",1, 0, 100 ,45, 49, 49, 65, 65, 45 });
	this->PokemonList.push_back(Pokemon{ "Glumanda",1, 0, 100 ,39, 	52, 43, 60, 50, 65 });
	this->PokemonList.push_back(Pokemon{ "Shiggy",1, 0, 100 ,44, 48, 65, 50, 64, 43 });
}

bool fight(const Entity& Player,const Entity& Enemy)
{
	return true;
}