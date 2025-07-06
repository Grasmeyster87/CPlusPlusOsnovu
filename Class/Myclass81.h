#pragma once

#ifndef _Myclas81_ 
#define _Myclas81_ 

#include <iostream>
#include "Windows.h";
#include <string>
using namespace std;
class Testclass81;
class Human81
{
public:
    int age = 0;
    int weight = 0;
    string name;
    void Print();
};
class point81
{
public:
    int x;
    int y;
   
    void print_ab();
    int GetA();
    void SetA(int valueX);
    int GetB();
    void SetB(int valueX);
    point81(int valueX, int valueY);
 
    void print3d();
    bool operator ==(const point81 & other);
    bool operator !=(const point81 & other);
    point81 operator + (const point81 & other);
    point81 & operator ++();
    point81 & operator ++(int value);

    friend void ChangeX(point81& value1, Testclass81& value2);

private:
    int a = 12;
    int b = 11;
    void printAB();
};
class Coffegrinder81
{
public:
    void Start();
private:
    bool CheckVoltage();
};
class Testclass81
{
public:
    int data81 = 10;
    int& operator [](int index);
    friend void ChangeX(point81& value1, Testclass81& value2);
private:
    int arr[5]{ 1, 2, 3, 4, 5 };
};

void ChangeX(point81& value1, Testclass81& value2);

class MyClass81
{
public:
    MyClass81();
    ~MyClass81();
    void Printmessage();
};

#endif  