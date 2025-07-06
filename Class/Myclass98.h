#pragma once

#ifndef _Myclas98_ 
#define _Myclas98_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Msg98
{
public:
    Msg98(string msg);
    
    virtual string GetMsg();
private:
    string msg;
};

class BreketsMsg98 :public Msg98
{
public:
    BreketsMsg98(string msg) :Msg98(msg) { }
    string  GetMsg() override;
};

class Printer98
{
public:
    void Print(Msg98* msg);
};

#endif