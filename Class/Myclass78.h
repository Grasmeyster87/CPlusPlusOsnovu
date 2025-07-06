#pragma once



#include <iostream>
#include "Windows.h";
#include <string>
using namespace std;

class Human
{
public:
    int age = 0;
    int weight = 0;
    string name;
    void Print();
};
class Point78
{
public:
    int x;
    int y;

    void print_ab();
    int GetA();
    void SetA(int valueX);
    int GetB();
    void SetB(int valueX);
    Point78(int valueX, int valueY);
    
    void print3d();
    bool operator ==(const Point78 & other);
    bool operator !=(const Point78 & other);
    
private:
    int a = 12;
    int b = 11;
    void printAB();
};
class Coffegrinder
{
public:
    void Start();
private:
    bool CheckVoltage();
};

