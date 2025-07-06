#pragma once

#ifndef Myclas25
#define Myclas25

#include <iostream>
#include <Windows.h>
using namespace std;

class B_25;
class A_25
{
    friend int sum(A_25, B_25);
private:
    int i;
public:
    A_25();

};
class B_25
{
    friend int sum(A_25, B_25);
private:
    int y;
public:
    B_25();
};



int sum(A_25 first, B_25 second);
#endif