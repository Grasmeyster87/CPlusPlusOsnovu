#pragma once

#ifndef _Myclas101_ 
#define _Myclas101_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Car101
{

public:
    Car101();

    string str = "Поле класса машина";

    void Drive();

    ~Car101();
};
class Airplain101
{
public:
    Airplain101();

    string str2 = "Поле класса самолёт";

    void Fly();

    ~Airplain101();
};
class FlyingCar101 :public Car101, public Airplain101
{
public:
    FlyingCar101();

    void Fly();

    ~FlyingCar101();
};


#endif