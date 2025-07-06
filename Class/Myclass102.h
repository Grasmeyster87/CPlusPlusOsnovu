#pragma once

#ifndef _Myclas102_ 
#define _Myclas102_ 

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
class Car102
{

public:
    Car102();
    string str = "Поле класса машина";
    void Use();
    ~Car102();
};
class Airplain102
{
public:
    Airplain102();    
    void Use();
    ~Airplain102();
};
class FlyingCar102 :public Car102, public Airplain102
{
public:
    FlyingCar102();
    void Use();
    ~FlyingCar102();
};

#endif