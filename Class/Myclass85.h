#pragma once

#ifndef _Myclas85_ 
#define _Myclas85_ 

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

class Apple85
{
public:
    Apple85(int weight, string color);
    int GetID();
    string Getcolor();
    static int  GetCount();
    static void changeColor(Apple85& apple, string color);
private:
    static int count;
    int weight;
    string color;
    int id;
};

#endif 