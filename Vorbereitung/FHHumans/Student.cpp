#include "Student.h"
#include "PrintExt.h"


std::ostream& student::ausgabe(std::ostream& ausgabestream, person& pers)
{
	ausgabestream << "student" << " = { ";
	pers.person::ausgabe(ausgabestream, pers);
	student* stud = dynamic_cast<student*>(&pers);
	ausgabestream << ", " << PrintExt::to_PrintItemStr(std::string{ "Matnr" }, stud->MatNr) << ", "
		<< PrintExt::to_PrintItemStr(std::string{ "email" }, stud->email) << " } ";
	return ausgabestream;
}