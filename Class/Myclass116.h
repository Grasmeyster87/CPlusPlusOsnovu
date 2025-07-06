#pragma once
#ifndef _Myclass_115_ 
#define _Myclass_115_

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Point116
{
public:
    Point116();

    Point116(double x, double y, double z);
    double x;
    double y;
    double z;
};

template <typename T1, class T2>

class MyClass116
{
public:

    MyClass116(T1 value1, T2 value2)
    {
        this->value1 = value1;
        this->value2 = value2;
    }
    void DataTypeSize()
    {
        cout << "Выводим размер переменной value1 в байтах - " << sizeof(value1) << " - тип переменной - " << typeid(T1).name() << endl;
        cout << "Выводим размер переменной value2 в байтах - " << sizeof(value2) << " - тип переменной - " << typeid(T2).name() << endl << endl;//typeid(T2).name()- вывод типа данных
    }

private:
    T1 value1;
    T2 value2;
};


#endif