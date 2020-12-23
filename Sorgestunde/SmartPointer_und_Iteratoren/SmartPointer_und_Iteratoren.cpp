#include <iostream>
#include <memory>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
	//so legt man einen dumb pointer an:
	array<int, 30000>* a = new array<int, 30000>;

	//so legt man smart pointer an:

	//shared: das äquivalent zum dumb pointer nur mit einem zähler wv. zeiger es auf ihn gibt.
	//kein free/delete notwendig, weil wenn alle zeiger auf den speicher weg sind macht er das Automatisch
	shared_ptr<array<int, 30000>> a_shared = make_shared<array<int, 30000>>();

	//weak: braucht immer einen anderen shared pointer um zu funktionieren. Wenn aber der Shared
	//pointer auf was anderes gesetzt wird kann der weak pointer auch nicht mehr funktionieren
	//wird nur für Überwachungszwecke (geht der zeiger noch) verwendet
	weak_ptr<array<int, 30000>> a_weak = a_shared;


	//unique: nur ein Besitzer der Adresse möglich mit .get() kann man den zeiger auf eine andere Variable setzen
	unique_ptr<array<int, 30000>> a_unique = make_unique<array<int, 30000>>();


	(*a)[0] = 100;
	(*a_shared)[0] = 100;
	//mit a_weak kann man natürlich nicht arbeiten --> über shared ptr arbeiten
	(*a_unique)[0] = 100;


	//der dumb pointer muss natrülich noch gefreed werden (das [] wird bei arrays, vektoren, etc. verwendet)
	delete[] a;


	//ITERATOREN

	//sind dafür da das man container (arrays, vektoren, listen, ... ) durchgehen kann

	//erstellen
	auto iterator = (*a_shared).begin(); // --> erstes element array[0]
	//bzw. .end() wenn man von schluss weg gehen möchten

	//alle durchgehen:
	int index = 0;
	for (iterator; iterator != (*a_shared).end(); ++iterator)
	{
		//zugriff mit:
		*iterator = 123;
		//index muss man extra mitführen also welche stelle man ist
		cout << "Index: " << index << " Wert: " << *iterator << endl;
		index++;
	}
}
