#pragma once

#ifndef Myclas28

#define Myclas28

#include <iostream>

#include <Windows.h>

using namespace std;

// Задание №28_классы ----------------------------------------

class First_27
{
protected:

    int value;

    First_27(int value);

};

class Second_27 :public First_27

{

public:

    Second_27(int val);

};

class Third_27 :public First_27

{

public:

    Third_27(int val);

};

#endif