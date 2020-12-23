#include <iostream>

struct bar
{
    long alter;
    const char* name;
};


void foo(int& number, bar& test)
{
    //ändert das Orginal über die Adresse aber kann ohne Stern und & benützt werden
    ++number;
    test.alter++;
}


void foo2(int* number, bar* test)
{
    //ändert das Original über die Adresse
    ++*number;
    test->alter++;
}

void foo3(int number, bar test)
{
    //ändert nur die Kopien
    ++number;
    test.alter++;
}

int main()
{
    int bla{ 20 };
    bar zumAendern{ 13, "jodlahidi" };
    foo(bla, zumAendern);
    foo2(&bla, &zumAendern); // über adresse aufrufen (&)
    foo3(bla, zumAendern);
}

