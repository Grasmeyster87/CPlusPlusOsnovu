#pragma once
class Myclass91
{
};


#ifndef _Myclas91_ 
#define _Myclas91_ 

#include <iostream>

#include <Windows.h>

#include <string>

using namespace std;

class A91
{
public:
    A91();
    ~A91();    
};

class B91 :public A91
{
public:
    B91();
    ~B91();
};
class C91 :public B91
{
public:
    C91();
    ~C91();
};

#endif