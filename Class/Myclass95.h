#pragma once

#ifndef _Myclas95_ 
#define _Myclas95_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

/*
¬иртуальный диструктор.
*/

class A95
{
public:
    A95();
    virtual ~A95();

};
class B95 :public A95
{
public:
    B95();
    ~B95() override;
};


#endif
