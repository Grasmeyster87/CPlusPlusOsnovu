#pragma once

#ifndef _Myclass_117_ 
#define _Myclass_117_

#include <iostream>
#include <Windows.h>
#include <string>
#include <typeinfo>

using namespace std;

class Point117
{
public:
    Point117();
    Point117(double x, double y, double z);

    double x;
    double y;
    double z;
};

template <typename T1>

class TypeSize
{
public:

    TypeSize(T1 value)
    {
        this->value = value;
    }
    void DataTypeSize()
    {
        cout << "Выводим размер переменной value в байтах - " << sizeof(value) << endl;
    }

protected:
    T1 value;//  проле protected позволяет видеть наследникам переменную но не менять её
};
template <class T1>
class TypeInfo : public TypeSize <T1>
{
public:
    TypeInfo(T1 value) :TypeSize <T1>(value)
    {

    }
    void ShowTypeName()
    {
        cout << " Название типаЖ " << typeid(T1).name() << endl;// вывод типа переменной
    }
};


#endif