#include <iostream>
#include <array>

class basis
{
protected:
    int sepp{ 32323 };
    std::array<int, 20> huber{ 10, 323, 1231, 545940, 23213, 232, 12344 };
    void plusSepp(int lebkas = 420) 
    {
        sepp += lebkas;
    }   
public:
    basis() = default;
    int getSepp() const { return sepp; }
    auto getHuber() const { return huber; }
};

class abgeleitet : public basis
{
    std::array<double, 3> einkommen{ 12, 3, 1 };

public:
    abgeleitet()
    {
        sepp = 323;
    }
    auto getHuber() const { return 12345678; }
};

int main()
{
    abgeleitet k;
    k.getHuber();
    k.basis::getHuber();
}
