#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class MyFunctor
{
public:

    void operator () ();

    int operator () (int a, int b);

private:
    int count = 0;
};

class EvenFunctor
{
public:
    void operator () (int value);

    void ShowEvenSum();

    void ShowEvenCount();

private:
    int evenSum = 0;
    int evenCount = 0;
};
