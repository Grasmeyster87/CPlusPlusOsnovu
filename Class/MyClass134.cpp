#include "MyClass134.h"

bool GraterThanZero(int a)
{
    return a > 0;
}

bool LessThanZero(int a)
{
    return a < 0;
}


    Person134::Person134(string name, double score)
    {
        this->Name = name;
        this->Score = score;
    }

    bool Person134::operator ()(const Person134 & p)
    {
        return p.Score > 180;
    }