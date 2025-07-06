#pragma once

#ifndef _Myclas99_ 
#define _Myclas99_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Car99
{
public:
    string str = "Поле класса машина";

    void Drive();

};
class Airplain99
{
public:

    string str2 = "Поле класса самолёт";

    void Fly();

};
class FlyingCar99 :public Car99, public Airplain99
{
public:

    void Fly();

};

#endif