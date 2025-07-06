#pragma once

#ifndef _Myclas92_ 
#define _Myclas92_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class A92
{
public:
    A92();
    A92(string msg);
    A92(string msg, int c);
    void PrintMsg();
private:
    string msg;
};

class B92 :public A92
{
public:
    B92() :A92(" Наше сообщение")
    {

    }

};

#endif 


