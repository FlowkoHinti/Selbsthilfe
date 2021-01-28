#pragma once
#include "Person.h"
#include "Email.h"
#include <assert.h>
class student :
    public person, Email
{
    unsigned long MatNr{ 0 };
public:
    student(const char* name, unsigned int birth, gender sex, unsigned int matrikelnummer, const char* Email)
        : person(name, birth, sex),  MatNr{ matrikelnummer }
    {
        if (matrikelnummer < 1000000000ul || matrikelnummer > 9999999999ul)
        {
            throw std::invalid_argument("Matrikelnummer ist zu gross oder klein");
        }
        email = std::string{ Email }; 
    }

    ~student() override
    {}
    std::ostream& ausgabe(std::ostream& ausgabestream, person& stud) override;
};

