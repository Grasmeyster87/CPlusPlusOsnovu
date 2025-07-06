#pragma once

#ifndef _Myclass107_ 
#define _Myclass107_ 

#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

using namespace std;

class Point107
{
public:
    Point107();
    Point107(int x, int y, int z);
    void Print();
    int x;
    int y;
    int z;
};

#endif