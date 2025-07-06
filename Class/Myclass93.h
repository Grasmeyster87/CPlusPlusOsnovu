#pragma once

#ifndef _Myclas93_ 
#define _Myclas93_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

/*
Полиморфизм;
Виртуальные функции;
virtuale
override
*/

class Gun93
{
public:
    virtual void Shoot();
};

class SubmachineGun93 :public Gun93
{
public:
    void Shoot() override;
};
class Bazooka93 :public Gun93
{
public:
    void Shoot() override;
};
class Player93
{
public:
    void shoot(Gun93* gun1);
};


#endif 