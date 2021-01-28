//#include "pch.h"
#include "Student.h"
#include "Teacher.h"
#include "PrintExt.h"
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

void check_email_validation(const std::string& s)
{
	// Aufruf der Email Validierungsfunktion und Abfangen einer m�glichen 
	// Exception zur Ausgabe einer Fehlermeldung auf cerr
	// INSERT YOUR CODE HERE!
	Email::validate(s);
}

std::ostream& operator<<(std::ostream& ausgabestream, person& pers)
{
	return pers.ausgabe(ausgabestream, pers);
}

int main()
{


	try
	{
		// -------------------------------------------------------------------
		// person instanziieren
		person  p1("mustermann, max", 19770707, gender::male);
		// student instanziieren
		student s1("example, eva maria", 19970217, gender::female, 1910581005, "evae@gmail.com");
		// teacher instanziieren
		teacher t1("tempo, theox", 20010605, gender::diverse, 8976, "ttempo@fh.co.at");
		// einf�gen eines studenten s2 mit den eigenen daten
		//insert your code here!
		student s2("hinti, flo", 19990119, gender::male, 3233213212, "yeeterberger.bangerang@doodle.comerino");
		// -------------------------------------------------------------------
		// Testen der Methode getExtSVNr
		// INSERT YOUR CODE HERE!
		std::cout << t1.getExtSVNr() << std::endl;

		// Testen der Klasse Email mit Getter und Setter
		// INSERT YOUR CODE HERE!
		std::cout << t1.getEmail() << std::endl;

		// -------------------------------------------------------------------
		// Testen der Function to_PrintItemStr aus dem Namensraum PrintExt
		// INSERT YOUR CODE HERE!
		std::cout << PrintExt::to_PrintItemStr("test", 3231) << std::endl;

		// -------------------------------------------------------------------
		//  Container f�r Person, Studenten und Teacher bef�llen
		// INSERT YOUR CODE HERE!
		std::vector<std::shared_ptr<person>> persons;

		persons.push_back(std::make_shared<person>(p1));
		persons.push_back(std::make_shared<student>(s1));
		persons.push_back(std::make_shared<teacher>(t1));
		persons.push_back(std::make_shared<student>(s2));

		// -------------------------------------------------------------------
		// Wir testen die operator << Methode einzeln f�r jeden Typ
		std::cout << p1 << std::endl;
		std::cout << s1 << std::endl;
		std::cout << t1 << std::endl;

		// -------------------------------------------------------------------
		// Geben Sie in einer Schleife �ber alle Elemente des Container die 
		// einzelnen Elemente so auf cout aus, dass eine Ausgabe passend f�r 
		// den jeweils zugrundeliegenden Typ erfolgt.
		// INSERT YOUR CODE HERE!

		for (auto& pers : persons)
		{
			std::cout << *pers << std::endl;
		}

		// -------------------------------------------------------------------
		// Alle Nachname in der Collection mit Hilfe von transform() und einer 
		// lambda function in Gro�buchstaben konvertieren
		// INSERT YOUR CODE HERE!
		//     std::transform(ifirst, ilast, ofirst, lambda_function);

		auto upper = [](std::shared_ptr<person> pers) 
		{
			std::string name = pers->getName();
			for (size_t c = 0; c < name.find(","); ++c)
			{
				name[c] = std::toupper(name[c]);
			}
			pers->setName(name);
			return pers;
		};

		std::transform(persons.begin(), persons.end(), persons.begin(), upper);

		for (auto& pers : persons)
		{
			std::cout << *pers << std::endl;
		}

		// -------------------------------------------------------------------
		// Email validieren �ber eigene kleine Validierungsfunktion

		check_email_validation("roland.graf@fh-salzburg.ac.at");
		//check_email_validation("@fh-salzburg.ac.at");
		//check_email_validation("roland.graf.fh-salzburg.ac.at");
		//check_email_validation("roland.graf@");
	}
	catch (std::exception& e)
	{
		std::cerr << "Fehler: " << e.what() << std::endl;
	}


	std::cout << "Bye!\n";
}



