#pragma once
#include <array>
#include <vector>
#include <string>
#include "Pokemon.h"
#include "Entity.h"
#define gameheight 15
#define gamewidth 40

class Spiel
{
public:
	Spiel() = default;
	void startGame();
	void addEntity();
	void moveEntity();
	bool fight(Entity& Player, Entity& Enemy);

private:
	
	vector<Pokemon> PokemonList;
	const size_t width{ gameheight };
	const size_t height{ gamewidth };
	std::array<std::string, gameheight> game {
		"_______________________________________",
		"|iii*******************************iii|",
		"|iii*******************************iii|",
		"|iii*******************************iii|",
		"|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii|",
		"|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii|",
		"|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii|",
		"|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii|",
		"|iiiii................................|",
		"|iiiii................................|",
		"|iiiii................................|",
		"|iiiii.....iiiiiiiiiiiiiiiiiiiiiiiiiii|",
		"|iiiii.....iiiiiiiiiiiiiiiiiiiiiiiiiii|",
		"|iiiii.....iiiiiiiiiiiiiiiiiiiiiiiiiii|",
		"---------------------------------------"
	};

	std::array<std::string, gameheight> copygame{game};

	void drawGame();
	void addAllPokemon();


};

