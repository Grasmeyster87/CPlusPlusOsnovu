#pragma once

#ifndef Myclas30
#define Myclas30

#include <iostream>
#include "Windows.h";
#include <string>

using namespace std;

// Задание №30_шаблоны классов ----------------------------------------

const int arr_length = 4;
template <class Type>
class Arr
{
private:
    Type arr[arr_length];
public:
    Arr(Type* a)
    {
        for (int i = 0; i < arr_length; i++)
            arr[i] = a[i];
    }
    Type getElement(int i)
    {
        return arr[i];
    }
};


#endif