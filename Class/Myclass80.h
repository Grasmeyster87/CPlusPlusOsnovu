#pragma once

#ifndef _Myclas80_ 
#define _Myclas80_ 

#include <iostream>
#include "Windows.h";
#include <string>
using namespace std;

class Human80
{
public:
    int age = 0;
    int weight = 0;
    string name;
    void Print();
};
class point80
{
public:
    int x=0;
    int y=0;
    point80(char* = nullptr);
    void print_ab();
    int GetA();
    void SetA(int valueX);
    int GetB();
    void SetB(int valueX);
    point80(int valueX, int valueY);
    void print3d();
    bool operator ==(const point80 & other);
    bool operator !=(const point80 & other);
    point80 operator + (const point80 & other);
    point80& operator ++();
    point80& operator ++(int value);
private:
    int a = 12;
    int b = 11;
    void printAB();
};
class Coffegrinder80
{
public:
    void Start();
private:
    bool CheckVoltage();
};
class Testclass80
{
public:
    int & operator [](int index);
private:
    int arr[5]{ 1, 2, 3, 4, 5 };
};

#endif  