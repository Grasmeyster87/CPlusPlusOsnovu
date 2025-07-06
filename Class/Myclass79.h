#pragma once
// lesson_85_peregruzka_operatora_+.cpp 
//

#ifndef Myclas79

#define Myclas79

#include <iostream>
#include "Windows.h";
#include <string>
using namespace std;

class Human79
{
public:
    int age = 0;
    int weight = 0;
    string name;
    void Print();
};
class point79
{
public:
    int x=0;
    int y=0;

    void print_ab();
   
    int GetA();
    void SetA(int valueX);
    int GetB();
    void SetB(int valueX);
    point79(int valueX = 0, int valueY = 0);
    void print3d();
    bool operator ==(const point79& other);
    bool operator !=(const point79& other);
    point79 operator + (const point79& other);
private:
    int a = 12;
    int b = 11;
    void printAB();
};
class Coffegrinder79
{
public:
    void Start();
private:
    bool CheckVoltage();
};
#endif