#include <iostream>
#include <string>


//Schreiben sie eine Datum_Uhrzeit Klasse,
//die im Konstruktor einen langen ganzahligen sekunden wert übernimmt
//der Sekunden Wert wird von dem 01 Jan 1970 aus gerechnet
//definieren sie Methoden für die Rückgabe von Jahr,Monat und Tag
//eine weitere Anforderung ist eine Methode die die Differenz zwischen 2 Datum_Uhrzeit Objekten ausgibt

enum MonatE {
	Jan = 1,
	Feb,
	Mar,
	Apr,
	Mai,
	Jun,
	Jul,
	Aug,
	Sep,
	Okt,
	Nov,
	Dez,
};

class Datum_Uhrzeit
{

private:
	unsigned short Jahr{ 1970 };
	unsigned short Monat{ 1 };
	unsigned short Tag{ 1 };
	unsigned short Stunden{ 0 };
	unsigned short Minuten{ 0 };
	unsigned short Sekunden{ 0 };
	long long Zeitstempel{ 0 };

public:
	Datum_Uhrzeit(long long sekunden)
	{
		//von 01 Jan 1970
		Zeitstempel = sekunden;

		while (sekunden > 0)
		{
			if (Jahr % 4 == 0)
			{
				//Schaltjahr

				//Jahr
				if (sekunden >= 366*24*60*60)
				{
					++Jahr;
					sekunden -= 366 * 24 * 60 * 60;
				}
				//Monate
				else if (sekunden >= 29 * 24 * 60 * 60)
				{
					switch (Monat)
					{
					case Jan:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Feb:
						if (sekunden >= 29 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 29 * 24 * 60 * 60;
						}
						break;
					case Mar:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Apr:
						if (sekunden >= 30 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 30 * 24 * 60 * 60;
						}
						break;
					case Mai:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Jun:
						if (sekunden >= 30 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 30 * 24 * 60 * 60;
						}
						break;
					case Jul:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Aug:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Sep:
						if (sekunden >= 30 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 30 * 24 * 60 * 60;
						}
						break;
					case Okt:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Nov:
						if (sekunden >= 30 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 30 * 24 * 60 * 60;
						}
						break;
					case Dez:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					default:
						break;
					}
				}

				// Tage
				else if (sekunden >= 24 * 60 * 60)
				{
					++Tag;
					sekunden -= 24 * 60 * 60;
				}

				//Stunde
				else if (sekunden >= 60 * 60)
				{
					++Stunden;
					sekunden -= 60 * 60;
				}

				//Minuten
				else if (sekunden >= 60)
				{
					++Minuten;
					sekunden -= 60;
				}

				//Sekunden
				else
				{
					Sekunden = sekunden;
					sekunden = 0;
				}

			}
			else
			{
				//normales Jahr

				//Jahr
				if (sekunden >= 365 * 24 * 60 * 60)
				{
					++Jahr;
					sekunden -= 365 * 24 * 60 * 60;
				}

				//Monate
				else if (sekunden >= 28 * 24 * 60 * 60)
				{
					switch (Monat)
					{
					case Jan:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Feb:
						if (sekunden >= 28 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 28 * 24 * 60 * 60;
						}
						break;
					case Mar:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Apr:
						if (sekunden >= 30 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 30 * 24 * 60 * 60;
						}
						break;
					case Mai:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Jun:
						if (sekunden >= 30 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 30 * 24 * 60 * 60;
						}
						break;
					case Jul:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Aug:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Sep:
						if (sekunden >= 30 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 30 * 24 * 60 * 60;
						}
						break;
					case Okt:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					case Nov:
						if (sekunden >= 30 * 24 * 60 * 60)
						{
							++Monat;
							sekunden -= 30 * 24 * 60 * 60;
						}
						break;
					case Dez:
						if (sekunden >= 31 * 24 * 60 * 60)
						{
							sekunden -= 31 * 24 * 60 * 60;
						}
						break;
					default:
						break;
					}
				}

				// Tage
				else if (sekunden >= 24 * 60 * 60)
				{
					++Tag;
					sekunden -= 24 * 60 * 60;
				}

				//Stunde
				else if (sekunden >= 60 * 60)
				{
					++Stunden;
					sekunden -= 60 * 60;
				}

				//Minuten
				else if (sekunden >= 60)
				{
					++Minuten;
					sekunden -= 60;
				}

				//Sekunden
				else
				{
					Sekunden = sekunden;
					sekunden = 0;
				}

			}

		}




	}

	unsigned short getJahr()
	{
		return Jahr;
	}

	unsigned short getMonat()
	{
		return Monat;
	}

	unsigned short getTag()
	{
		return Tag;
	}

	Datum_Uhrzeit Differenz(Datum_Uhrzeit& Vergleichsdatum)
	{

		if (this->Zeitstempel > Vergleichsdatum.Zeitstempel)
		{
			Datum_Uhrzeit diff{ this->Zeitstempel - Vergleichsdatum.Zeitstempel };
			diff.Jahr -= 1970;
			return diff;
		}
		else
		{
			Datum_Uhrzeit diff{ Vergleichsdatum.Zeitstempel - this->Zeitstempel };
			diff.Jahr -= 1970;
			return diff;
		}
		
	}
};

int main()
{
	Datum_Uhrzeit a(1609947010);
	Datum_Uhrzeit b{ 2312323121 };
	Datum_Uhrzeit dif = a.Differenz(b);
}