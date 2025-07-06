#pragma once
#ifndef _Myclas90_ 
#define _Myclas90_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class A89
{
public:
    string msgOne = " —ообщение один";
private:
    string msgTwo = " —ообщение два";
protected:
    string msgThree = " —ообщение три";

};
class B89 :public A89
{
public:
    void PrintMsg();
};

#endif
