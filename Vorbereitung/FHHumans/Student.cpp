#include "Student.h"
#include "PrintExt.h"


std::ostream& student::ausgabe(std::ostream& ausgabestream)
{
	ausgabestream << "student" << " = { ";
	person::ausgabe(ausgabestream);
	ausgabestream << ", " << PrintExt::to_PrintItemStr(std::string{ "Matnr" }, MatNr) << ", "
		<< PrintExt::to_PrintItemStr(std::string{ "email" }, email) << " } ";
	return ausgabestream;
}