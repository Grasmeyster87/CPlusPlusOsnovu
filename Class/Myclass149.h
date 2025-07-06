#pragma once

// lesson_167_STL_13_ find _ find_if _ find_if_not.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <Windows.h>

using namespace std;



#ifndef Myclass149

#define Myclass149

class Person149
{
public:
    Person149(string name, double score)
    {
        this->Name = name;
        this->Score = score;
    }
    bool operator ()(const Person149 & p)
    {
        return p.Score > 180;
    }
    string Name;
    double Score;
};

#endif
