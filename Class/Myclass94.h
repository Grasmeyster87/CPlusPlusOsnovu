#pragma once

#ifndef _Myclas94_ 
#define _Myclas92_ 

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
/*
- јбстрактный клас.
- „исто виртуальные функции.
- Virtual.
- Override.
*/
class Weapon94
{
public:
    virtual void shoot() = 0;
    void Foo();
};
class Gun94 :public Weapon94
{
public:
    virtual void shoot() override;
};
class SubmachineGun94 :public Gun94
{
public:
    void shoot() override;
};
class Bazooka94 :public Weapon94
{
public:
    void shoot() override;
};
class Knife94 :public Weapon94
{
public:
    void shoot() override;
};
class Player94
{
public:
    void shoot(Weapon94* gun1);
};


#endif