#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <Windows.h>

using namespace std;
#ifndef Myclass150

#define Myclass150

class Person150
{
public:
    Person150(string name, double score, int Age)
    {
        this->Name = name;
        this->Score = score;
        this->Age = Age;
    }
    bool operator ()(const Person150& p)
    {
        return p.Score > 180;
    }
    string Name;
    double Score;
    int Age;
};

#endif