#pragma once

#ifndef _Myclas103_ 
#define _Myclas103_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

/*
םעונפויס 
*/

class IBicycle103
{
public:
    void virtual TwistTheWheel() = 0;
    void virtual Ride() = 0;
};

class SimpleBicycle103 :public IBicycle103
{
public:
    void TwistTheWheel() override;
    void Ride()override;
};

class SportBicycle103 :public IBicycle103
{
public:
    void TwistTheWheel() override;
    void Ride()override;
};

class Human103
{
public:
    void RideOn(IBicycle103& bicycle);
};

#endif