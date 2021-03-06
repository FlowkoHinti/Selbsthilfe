#include "Teacher.h"
#include "Person.h"
#include "PrintExt.h"
#include <string>

std::string teacher::getExtSVNr() const
{
    std::string svnr = std::to_string(SVNr);
    std::string gebdate = std::to_string(GebDat);

    return svnr + "-" + gebdate.substr(6,2) + gebdate.substr(4, 2) + gebdate.substr(2, 2);
}

std::ostream& teacher::ausgabe(std::ostream& ausgabestream)
{
	ausgabestream << "teacher" << " = { ";
	person::ausgabe(ausgabestream);
	ausgabestream << ", " << PrintExt::to_PrintItemStr(std::string{ "SVNr" }, SVNr) << ", "
		<< PrintExt::to_PrintItemStr(std::string{ "email" }, email) << " } ";
	return ausgabestream;

}