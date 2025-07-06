#pragma once

#ifndef _Myclass_120_ 
#define _Myclass_120_

//#pragma warning (disable:E0260)//отключени ошибки или предупреждения

#include <iostream>
#include <Windows.h>
#include <string>
#include <typeinfo>
#include <typeindex>

using namespace std;

template <typename T>
class SmartPointer
{
public:
    SmartPointer(T* ptr)
    {
        this->ptr = ptr;
        cout << " Constructor " << endl;
    }
    ~SmartPointer()
    {
        delete ptr;
        cout << " Destructor  " << endl;
    }
    T& operator * ()
    {
        return *ptr;

    }
private:
    T* ptr;
};


#endif  