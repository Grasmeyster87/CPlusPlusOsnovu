#pragma once

#ifndef _Myclas83_ 
#define _Myclas83_ 

#include <iostream>

#include <Windows.h>

#include <string>

using namespace std;

class Apple83;

class Human83
{
public:

    void TakeApple(Apple83& apple1);

    void EatApplle(Apple83& apple);
};
class Apple83
{
    friend Human83;
public:
    Apple83(int weight, string color);

private:
    int weight;
    string color;

};

#endif  