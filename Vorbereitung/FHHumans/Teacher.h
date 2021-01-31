#pragma once
#include "Person.h"
#include "Email.h"
#include <string>
#include <stdexcept>

class teacher :
    public person, public Email
{
    unsigned short SVNr{ 0 };
public:
    teacher(const char* name, unsigned int birth, gender sex, const unsigned short svnr, const char* Email)
        : person(name, birth, sex), SVNr{ svnr }
    {
        if (svnr < 1000 || svnr > 9999)
        {
            throw std::invalid_argument("SVNr incorrect!");
        }
        email = std::string{ Email };
    }

    ~teacher() override
    {}


    std::string getExtSVNr() const;

    std::ostream& ausgabe(std::ostream& ausgabestream) override;

};

