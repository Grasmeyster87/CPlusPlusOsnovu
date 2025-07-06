#pragma once

#ifndef _Myclass109_ 
#define _Myclass109_ 

#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

using namespace std;

class Point109
{
public:
    Point109();
    Point109(int x, int y, int z);
    void Print();
private:
    int x;
    int y;
    int z;
    friend ostream& operator<<(ostream& os, const Point109& point);
    friend istream& operator>>(istream& is, Point109& point);
};
ostream& operator<<(ostream& os, const Point109& point);//перегрузка оператора

istream& operator>>(istream& is, Point109& point);//перегрузка оператора

#endif 