#pragma once


#include <iostream>
#include <Windows.h>
#include <chrono> 
#include <thread>//библиотка потоков

using namespace std;

int Sum145(int a, int b);

class SimpleTimer
{
public:
    SimpleTimer();
    ~SimpleTimer();

private:
    std::chrono::time_point<std::chrono::steady_clock> start, end;
};

void Foo();

