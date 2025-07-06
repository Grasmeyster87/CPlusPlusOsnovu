#pragma once

#ifndef _Myclass_113_ 
#define _Myclass_113_

#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

class MyException113 :public exception
{
public:
    MyException113(const char* msg, int dataState) :exception(msg)
    {
        this->dataState = dataState;
    }
    int GetDataState()
    {
        return dataState;
    }
private:
    int dataState;//состояние информации (что пошло не так)
};

void Foo113(int value);

#endif 