#pragma once

// lesson_170_STL_16_remove _ stl remove_if _ stl.cpp 
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <string>
#include <Windows.h>

using namespace std;

#ifndef Myclass151

#define Myclass151


class Person151
{
public:
    Person151(string name, double score, int Age)
    {
        this->Name = name;
        this->Score = score;
        this->Age = Age;
    }
    bool operator ()(const Person151& p)
    {
        return p.Score > 180;
    }
    string Name;
    double Score;
    int Age;
};

#endif