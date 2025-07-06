#pragma once

#ifndef _Myclass_118_ 
#define _Myclass_118_

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

template <typename T>
class Printer118
{
public:
    void Print(T value)
    {
        cout << "Выводим переменную value  " << value << endl;
    }
};

template <>
class Printer118<string>
{
public:
    void Print(string value)
    {
        cout << "___" << "Выводим переменную value  " << value << "___" << endl;
    }
};

#endif