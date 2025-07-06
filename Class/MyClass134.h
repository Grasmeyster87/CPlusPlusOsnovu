#pragma once

#include <iostream>
#include <Windows.h>
#include <algorithm>
#include <vector>

using namespace std;

bool GraterThanZero(int a);

bool LessThanZero(int a);

class Person134
{
public:
    Person134(string name, double score);

    bool operator ()(const Person134 & p);

    string Name;
    double Score;
};

