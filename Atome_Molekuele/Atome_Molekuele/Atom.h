#pragma once
#include <string>
#include <iostream>

class Atom
{
protected:
	std::string Elementsymbol;
	unsigned int Ordnungszahl;
	unsigned int Dichte;
	float Elektronegativit�t;
	std::string Aggregatzustand;
	bool istIsotop;
	unsigned int Wertigkeit;

public:
	Atom(const std::string& element, unsigned int ordnungsz, unsigned int dichte, float elektroneg, const std::string& aggregat, bool isotop, unsigned int wertigkeit)
		: Elementsymbol(element), Ordnungszahl(ordnungsz), Dichte(dichte), Elektronegativit�t(elektroneg), Aggregatzustand(aggregat), istIsotop(isotop), Wertigkeit(wertigkeit)
	{
	}

	Atom(const Atom& source)
		: Elementsymbol(source.Elementsymbol), Ordnungszahl(source.Ordnungszahl), Dichte(source.Dichte), Elektronegativit�t(source.Elektronegativit�t), Aggregatzustand(source.Aggregatzustand), bin(source.bin), Wertigkeit(source.Wertigkeit)
	{

	}



	void Daten_Ausgabe(Atom Element)
	{
		std::cout << "Elementsymbol: " << this->Elementsymbol << std::endl;
		std::cout << "Ordnungszahl: " << this->Ordnungszahl << std::endl;
		std::cout << "Dichte: " << this->Dichte << std::endl;
		std::cout << "Elektronegativit�t: " << this->Elektronegativit�t << std::endl;
		std::cout << "Aggregatzustand bei 20 C: " << this->Aggregatzustand << std::endl;
		//std::cout << "" << << std::endl;
		std::cout << "Wertigkeit: " << this->Wertigkeit << std::endl;
	}




};

