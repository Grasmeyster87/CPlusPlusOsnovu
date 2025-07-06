#pragma once

#ifndef _Myclas97_ 
#define _Myclas97_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Human97
{
public:
    Human97(string Name);
    Human97(string Name, int Age) :Human97(Name)
    {
        this->Age = Age;
    }
    Human97(string Name, int Age, int Weight) :Human97(Name, Age)
    {
        this->Weight = Weight;
    }
    string Name;
    int Age;
    int Weight;
};

#endif