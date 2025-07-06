#pragma once

#ifndef _Myclas82_ 
#define _Myclas82_ 

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
class Apple82;
class Human82
{
public:

    void TakeApple(Apple82& apple1);

    void EatApplle(Apple82& apple);
};
class Apple82
{
public:
    Apple82(int weight, string color);

private:
    int weight;
    string color;
    friend void Human82::TakeApple(Apple82& apple);
};

#endif  