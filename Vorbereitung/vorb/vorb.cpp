#include <iostream>

class CCTOR_MCTOR
{
    int a = 12;
    double b = 12.5;
    char* str;

public:
    CCTOR_MCTOR(int FuerA, double FuerB)
    {
        a = FuerA;
        b = FuerB;
        str = new char[20]{ "lololol" };
    }

    ~CCTOR_MCTOR()
    {
        delete[] str;
    }

    CCTOR_MCTOR(CCTOR_MCTOR& zuKopierende)
    {
        a = zuKopierende.a;
        b = zuKopierende.b;
        str = new char[10]{"lololol" };
    }

    CCTOR_MCTOR(CCTOR_MCTOR&& zuBewegen)
    {
        a = std::move(zuBewegen.a);
        b = std::move(zuBewegen.b);
        str = new char[10]{ "lololol" };

    }

};

CCTOR_MCTOR zumMoveTesten(CCTOR_MCTOR uebergebenesObj)
{
    CCTOR_MCTOR zumZurueckgeben{ uebergebenesObj };
    return zumZurueckgeben;
}

int main()
{   
    CCTOR_MCTOR obj{20, 30.5};

    CCTOR_MCTOR objKopiert{ obj };

    CCTOR_MCTOR objBewegt = zumMoveTesten(obj);
}
