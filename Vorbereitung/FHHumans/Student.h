#pragma once
#include "Person.h"
#include "Email.h"
class student :
    public person, Email
{
    unsigned int MatNr{ 0 };
public:
    student(const char* name, unsigned int birth, gender sex, const unsigned int matrikelnummer, const char* Email)
        : person(name, birth, sex),  MatNr{ matrikelnummer }
    {
        email = std::string{ Email }; 
    }

    ~student() override
    {}
    std::ostream& ausgabe(std::ostream& ausgabestream, person& stud) override;
};

