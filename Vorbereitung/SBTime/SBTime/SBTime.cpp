// SBTime.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "LimitedValue.h"
#include "Time.h"
#include <exception>
#include <vector>
#include <memory>
#include <algorithm>

int main()
{
    try 
    {
        LimitedValue<int, 0, 10> v1{ 6 };
        FHTime::Time t;
        FHTime::Time t2{3, 12, 30};
        FHTime::Swatch s{ 250 };
        FHTime::Swatch s2{ t2 };
        FHTime::Swatch s3{ s };
        FHTime::Time t3{ s2 };


        std::cout << s.to_string() << std::endl;

        std::vector<std::shared_ptr<FHTime::Time>> times;
        times.push_back(std::make_shared<FHTime::Time>(t));
        times.push_back(std::make_shared<FHTime::Swatch>(s));
        times.push_back(std::make_shared<FHTime::Time>(t2));
        times.push_back(std::make_shared<FHTime::Swatch>(s2));
        times.push_back(std::make_shared<FHTime::Time>(t3));
        times.push_back(std::make_shared<FHTime::Swatch>(s3));

        auto add12 = [](std::shared_ptr<FHTime::Time> t)
        {
            if (t->stunden.getVal() <= 12) t->stunden.setVal(t->stunden.getVal() + 12);
            return t;
        };

        for (auto time : times)
        {
            std::cout << *time << std::endl;

        }
        std::transform(times.begin(), times.end(), times.begin(), add12);

        for (auto time : times)
        {
            std::cout << *time << std::endl;

        }
    }
    catch (std::exception& e)
    {
        std::cerr << "error: " << e.what();
    }
    

}
