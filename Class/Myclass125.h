#pragma once

#ifndef _Myclass_125_ 
#define _Myclass_125_

#include <vector>
#include <list>

#include <iostream>
#include <Windows.h>

using namespace std;

template <typename T>
void PrintList(const list <T> & lst)
{
    for (auto i = lst.cbegin(); i != lst.cend(); ++i)
    {
        cout << i << endl;
    }
}

#endif 
