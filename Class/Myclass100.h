#pragma once

#ifndef _Myclass100_ 
#define _Myclass100_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Car100
{

public:
    Car100();
    string str = "Поле класса машина";
    void Drive();

};
class Airplain100
{
public:
    Airplain100();
    string str2 = "Поле класса самолёт";
    void Fly();
};
class FlyingCar100 :public Car100, public Airplain100
{
public:
    FlyingCar100();
    void Fly();
};

#endif