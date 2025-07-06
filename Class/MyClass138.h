#pragma once
#ifndef Myclass138

#define Myclass138

#include <iostream>
#include <Windows.h>
#include <vector> //библиотека векторов
#include <list> //библиотека листов (двусвязный список)

using namespace std;


template <typename T>
void PrintList138(const list<T>& lst)// Шаблон для вывода списка
{
    
    int count = 0;
    for (auto i = lst.cbegin(); i != lst.cend(); ++i)//константные функции для отсутствия изменений
    {
        
        cout << *i << ", ";
        count++;
        if (count % 9 == 0) {
        cout << "\t" << endl << "\n";
        }
    }
    cout << "\n\n";
}
#endif