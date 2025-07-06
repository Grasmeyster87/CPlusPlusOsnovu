#pragma once
#ifndef Myclas78
#define Myclas78

#include <iostream>
#include "Windows.h";
#include <string>


using namespace std;

// Задание №24_классы ----------------------------------------
class Auto
{
private:
    int year, month, day;
public:
    Auto();

    Auto(int date_year, int date_month, int date_day);

    void messege();

    void set(int date_year, int date_month, int date_day);

    void get();

    ~Auto();
};

class Numbers
{
private:
    int val_1_Numbers, val_2_Numbers;
public:
    void set();
    void get();
};

#endif