#pragma once
#ifndef Myclass139

#define Myclass139
// lesson_158_STL_4_prefix_vs_postfix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <vector> //библиотека векторов
#include <list> //библиотека листов (двусвязный список)
using namespace std;

template <typename T>
void PrintList139(const list<T>& lst)// Шаблон для вывода списка
{
    for (auto i = lst.cbegin(); i != lst.cend(); ++i)//константные функции для отсутствия изменений
    {
        cout << *i << "\t";
    }
    cout << "\n\n";
}
#endif