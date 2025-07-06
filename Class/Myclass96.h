#pragma once

#ifndef _Myclas96_ 
#define _Myclas96_ 

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
/*
„исто виртуальный диструктор.
*/
class A96
{
public:
    A96();
    virtual ~A96() = 0;
};

class B96 :public A96
{
public:
    B96();
    ~B96() override;
};

#endif

