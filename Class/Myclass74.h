#pragma once

#ifndef Myclas74

#define Myclas74

#include <iostream>

#include <Windows.h>

#include <string.h>

using namespace std;

class Myclass74
{
public:
    int a = 0;
    int* data;
    int size = 10;
    Myclass74();
    
    ~Myclass74();
};

void foo74(int a1);

#endif
