#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <Windows.h>

using namespace std;


#ifndef Myclass148

#define Myclass148

class Person_148
{
public:
    Person_148(string name, double score)
    {
        this->Name = name;
        this->Score = score;
    }
    bool operator ()(const Person_148 & p148)
    {
        return p148.Score > 180;
    }
    string Name;
    double Score;
};
/*
bool MyPred_148(int a, int b)
{
    return a > b;
}
*/
#endif