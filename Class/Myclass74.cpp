#pragma once
#include "Myclass74.h"

//=================================================================================

Myclass74::Myclass74()
{
    data = new int[size];
    for (int i = 0; i < size; i++)
    {
        data[i] = i;
    }
    cout << "\t Визвался конструктор" << endl;
}
Myclass74::~Myclass74()
{
    delete[]data;
    cout << "\t Визвался деструктор" << endl;
}

//=================================================================================
void foo74(int a1)
{
    cout << " \tНачало работы функции\n";
    Myclass74 A;
    A.a = a1;
    A.size = 20;
    cout << " \tКонец работы функции\n";
}