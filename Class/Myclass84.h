#pragma once

#ifndef _Myclas84_ 
#define _Myclas84_ 

#include <iostream>

#include <Windows.h>

#include <string>

using namespace std;

class Apple84
{
    static int count;
public:
    Apple84(int weight, string color);
  
    int GetID();
   
private:
    int weight;
    string color;
    int id;
};

#endif  
