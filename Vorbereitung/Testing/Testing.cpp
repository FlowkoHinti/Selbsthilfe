#include <iostream>


class t1
{
protected:
    int a{ 0 };
    double b{ 3 };
public:
    t1() = default;
    t1(int a): a{0}{}
    int getA() { return a; }
    void seta(int f) { a = f; }
};

class t3
    : virtual public  t1
{
protected:
    bool j{ 0 };
public:
    t3(int j) : t1(2), j(j){}
};

class t5 : virtual public t1
{
public:
    float ke{ 45.0f };
    t5() : t1(ke) { this->seta(43); }
};

class t2
    : public t3
{
    int k{ 2 };
public:
    t2(int k) : t3(true), k(k) {}
    explicit t2(t1& t) : t3(false), k(4)
    {
        a = t.getA();
    }

    t2& operator=(t3& right)
    {
        t2 t{ 20 };
        return t;
    }

};

class t4 :  public t3, public t5
{
public:
    t4(): t3(3), t5(){}

};

int main()
{

    t1 T = ( 1 );

    t3 T2(true);

    t2 T1(T2);

    T1 = T2;

    t4 t;
    std::cout << "Hello World!\n";
}
