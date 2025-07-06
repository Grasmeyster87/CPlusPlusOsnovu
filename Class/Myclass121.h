#pragma once

#ifndef _Myclass_121_ 
#define _Myclass_121_

#include <iostream>
#include <Windows.h>
#include <string>
#include <memory>

using namespace std;

/*
Smart pointers
auto_ptr
unique_ptr
shared_ptr
*/
template <typename T>
class SmartPointer121
{
public:
    SmartPointer121(T* ptr)
    {
        this->ptr = ptr;
        cout << " Constructor " << endl;
    }
    ~SmartPointer121()
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
