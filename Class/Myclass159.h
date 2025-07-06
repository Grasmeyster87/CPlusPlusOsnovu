#pragma once
#ifndef Myclass159

#define Myclass159

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <string>
#include <Windows.h>
#include <ctime>

using namespace std;

class IAction
{
public:
    virtual void Action() = 0;
};

class CatAction : public IAction
{
    virtual void Action() override
    {
        cout << "\t√ладим кота" << endl;
    }
};

class TeaAction : public IAction
{
    virtual void Action() override
    {
        cout << "\tѕьЄм чай" << endl;
    }
};

class DogAction : public IAction
{
    virtual void Action() override
    {
        cout << "\t√ул¤ем с собакой" << endl;
    }
};

class SleepAction : public IAction
{
    virtual void Action() override
    {
        cout << "\t—пим" << endl;
    }
};


#endif