#include <thread>
#include <memory>
#include <iostream>
#include <string>
#include "Spiel.h"
#include <Windows.h>
#include <conio.h>
#include "Entity.h"

using namespace std;



void readInput(char* input, bool* stop) noexcept
{
	char c = '\0';
	while (!stop) {
		c = _getch();
		if (c == 'w' || c == 'a' || c == 's' || c == 'd') *input = c;
		Sleep(50);
		c = '\0';
	}
	return;
}

int main()
{
	Enemy Ash;
	Item Pokeball;
	Gras HohesGras;
	Entity Missingno = Ash;

	/*
	bool*  end = new bool(false);
	char* input = new char('\0');
	thread inputThread(readInput, input, end);

	Sleep(10000);
	*end = true;
	inputThread.join();

	
	
	delete input;
	delete end;
	*/

	//Spiel dasSpielObjekt;

	//dasSpielObjekt.startGame();
}