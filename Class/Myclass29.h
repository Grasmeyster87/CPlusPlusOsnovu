#pragma once

#ifndef Myclas29
#define Myclas29

#include <iostream>
#include "Windows.h";
#include <string>

using namespace std;

// Задание №29_шаблоны функций ----------------------------------------

template <typename T1, typename T2>
T2 printArr(const T1* array, int i) {
    int count = 0;
    for (int j = 0; j < i; j++)
    {
        cout << array[j] << " ";
        count++;
    }
    cout << endl;
    return count;
}

#endif 