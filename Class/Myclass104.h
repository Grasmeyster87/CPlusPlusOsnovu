#pragma once

#ifndef _Myclas104_ 
#define _Myclas104_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Component104
{
public:
    Component104(string companyName);
    string companyName;
};

class GPU104 :public Component104
{
public:
    GPU104(string companyName) :Component104(companyName)
    {
        cout << " Конструктор GPU" << endl;
    }
};

class Memory104 :public Component104
{
public:
    Memory104(string companyName) :Component104(companyName)
    {
        cout << " Конструктор Memory" << endl;
    }
};

class GraphicCard104 : public GPU104, public Memory104
{
public:
    GraphicCard104(string GPUCompanyName, string MemoryCompanyName) :GPU104(GPUCompanyName), Memory104(MemoryCompanyName)
    {
        cout << " Конструктор GraphicCard" << endl;
    }
};

class Character104
{
public:
    Character104();
    int HP=0;
};

class Orc104 : public virtual Character104
{
public:
    Orc104();
};


class Warrior104 : public virtual Character104
{
public:
    Warrior104();
};



class OcrWarrior104 : public virtual Orc104, public  virtual Character104
{
public:
    OcrWarrior104();
};

#endif