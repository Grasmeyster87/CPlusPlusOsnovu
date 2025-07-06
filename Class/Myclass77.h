#pragma once

#ifndef Myclas77
#define Myclas77

#include <iostream>
#include <Windows.h>
using namespace std;

class Myclass77
{
public:
    int* data77;
    int Size77 = 0;
    Myclass77(int size);
    Myclass77(const Myclass77& other);

    Myclass77& operator=(const Myclass77& other)
    {
        cout << " Вызвался оператор = " << this << endl;
        this->Size77 = other.Size77;
        if (this->data77 != nullptr)
        {
            delete[] this->data77;
        }
        this->data77 = new int[other.Size77];
        for (int i = 0; i < other.Size77; i++)
        {
            this->data77[i] = other.data77[i];
        }
        return *this;
    }

    ~Myclass77();
};

void Foo77(Myclass77 value);

Myclass77 Foo277();

#endif