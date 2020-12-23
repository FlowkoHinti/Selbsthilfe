#include <iostream>
#include <string>


class Huber
{
    std::string vornamen;
    int alter;
    std::string lieblingsSendung;

public:
    
    Huber()
        : vornamen{ std::string{"Sepp"} }, alter{ 51 }, lieblingsSendung{ std::string{"Klinges Oesterreich"} } {}

    Huber(std::string nedKlingendes)
        //man kann einfach einen Konstruktor wiederverwenden in einem anderen mit:
        : Huber()
    {
        std::cout << "Klingendes Oesterreich ist die einzig ware Fernsehsendung also scheiss auf: " << nedKlingendes << std::endl;
    }
};

int main()
{

    Huber Seppa; 
    Huber Seppo = Huber("Hoagascht");
}
