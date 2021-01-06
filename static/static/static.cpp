#include <iostream>



class huber
{
private:
	//diese variable wird wie in den Funktionen von allen objekten geteilt
	//muss außerhalb einen Wert zugewiesen werden!
	static int sepp;


	int a = 2323;

public:

	void he()
	{
	//mocht wos
	}

	static void mochwos()
	{
	//mocht wos
		
		//Geht nid weil diese statische methode von allen objekten geteilt wird (es nicht jeder die Funktion)
		//darum geht kein this
		
		//this->a;
	}

};


void meinefunktion()
{
	//des a wird einmal angelegt (am Heap) und dann nur noch verwendet
	static int a = 5;
	a++;
}

//so wird der Wert dem static member sepp zugewiesen
int huber::sepp = 5;

int main()
{
	meinefunktion();
	meinefunktion();

	huber a1;
	huber a2;
	huber a3;

	a1.he();
	a1.mochwos();

	//man brauch kein objekt das man die statische methode aufrufen kann
	huber::mochwos();
	
}
