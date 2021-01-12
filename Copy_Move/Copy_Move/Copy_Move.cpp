#include <iostream>
#include <array>
#include <string>

class Lebakas
{
public:

    Lebakas(int KasMenga, int LebaMenga)
        : mengeKas(KasMenga), mengeLeba(LebaMenga), KasZuLeba{ (float)(KasMenga/LebaMenga)}
    {}


    Lebakas(Lebakas& zuKopieren)
        : mengeKas(zuKopieren.mengeKas), mengeLeba(zuKopieren.mengeLeba), KasZuLeba{ (float)(zuKopieren.mengeKas / zuKopieren.mengeLeba) }
    {
        Lebakaspeppi = new std::string{ "DA PEPPI IS DA BESTE! KOPIERT" };
    }


    ~Lebakas()
    {
        delete Lebakaspeppi;
    }

private:
    int mengeKas{ 0 };
    int mengeLeba{ 0 };
    float KasZuLeba{ 0.0 };
    std::array<std::string, 25> Konsistenz{ std::string{"Huber"}, std::string{"Sepp"} };

    std::string* Lebakaspeppi = new std::string{"DA PEPPI IS DA BESTE!"};

};

int main()
{
    Lebakas mitExtraKas{ 123, 32323 };
    Lebakas mitExtraLeba{ 123, 234 };

    Lebakas neu = mitExtraKas; //hier wird der COPY aufgerufen!
    Lebakas neu{ mitExtraLeba }; // do a


}