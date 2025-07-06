#pragma once

#ifndef Myclas76
#define Myclas76

#include <iostream>
#include <Windows.h>
using namespace std;

class Myclass76
{
public:
    int* data76;
    int Size76 = 0;
    Myclass76(int size76);
    Myclass76(const Myclass76& other);
    ~Myclass76();
};
void Foo76(Myclass76 value);
Myclass76 Foo276();

#endif