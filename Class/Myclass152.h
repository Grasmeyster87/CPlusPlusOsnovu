#pragma once

#ifndef Myclass152

#define Myclass152

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <string>
#include <Windows.h>

using namespace std;

class Person152
{
public:
    Person152(string name, double score, int Age)
    {
        this->Name = name;
        this->Score = score;
        this->Age = Age;
    }
    bool operator ()(const Person152& p)
    {
        return p.Score > 180;
    }
    string Name;
    double Score;
    int Age;
};

#endif

