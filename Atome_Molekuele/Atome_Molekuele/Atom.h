#pragma once
#include <string>
#include <iostream>

class Atom
{
protected:
	std::string Elementsymbol;
	unsigned int Ordnungszahl;
	unsigned int Dichte;
	float Elektronegativität;
	std::string Aggregatzustand;
	bool istIsotop;
	unsigned int Wertigkeit;

public:
	Atom(const std::string& element, unsigned int ordnungsz, unsigned int dichte, float elektroneg, const std::string& aggregat, bool isotop, unsigned int wertigkeit)
		: Elementsymbol(element), Ordnungszahl(ordnungsz), Dichte(dichte), Elektronegativität(elektroneg), Aggregatzustand(aggregat), istIsotop(isotop), Wertigkeit(wertigkeit)
	{
	}

	Atom(const Atom& source)
		: Elementsymbol(source.Elementsymbol), Ordnungszahl(source.Ordnungszahl), Dichte(source.Dichte), Elektronegativität(source.Elektronegativität), Aggregatzustand(source.Aggregatzustand), bin(source.bin), Wertigkeit(source.Wertigkeit)
	{

	}



	void Daten_Ausgabe(Atom Element)
	{
		std::cout << "Elementsymbol: " << this->Elementsymbol << std::endl;
		std::cout << "Ordnungszahl: " << this->Ordnungszahl << std::endl;
		std::cout << "Dichte: " << this->Dichte << std::endl;
		std::cout << "Elektronegativität: " << this->Elektronegativität << std::endl;
		std::cout << "Aggregatzustand bei 20 C: " << this->Aggregatzustand << std::endl;
		//std::cout << "" << << std::endl;
		std::cout << "Wertigkeit: " << this->Wertigkeit << std::endl;
	}




};

