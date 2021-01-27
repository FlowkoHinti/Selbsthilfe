#include "Person.h"
#include "PrintExt.h"

std::ostream& person::ausgabe(std::ostream& ausgabestream, person& pers)
{
	std::string gender = "";
	switch (pers.Geschlecht)
	{
	case gender::male:
		gender = "male";
		break;
	case gender::female:
		gender = "female";
		break;

	case gender::diverse:
		gender = "diverse";
		break;
	}
	ausgabestream << "person" << " = { " + PrintExt::to_PrintItemStr(std::string{ "name" }, pers.Name) + ", "
		+ PrintExt::to_PrintItemStr(std::string{ "birthdate" }, pers.GebDat) + ", " +
		PrintExt::to_PrintItemStr(std::string{ "gender" }, gender) + " } ";
	return ausgabestream;
}