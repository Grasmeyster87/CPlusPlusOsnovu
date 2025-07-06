#pragma once

#ifndef _Myclas89_ 
#define _Myclas89_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Human89
{
private:
    string name = "Student Jone";
public:
    string GetName();
    void SetName(string name);
};

class Student89 :public Human89
{
public:
    string group;
    void learn();
};
class ExtremuralStudent89 :public Human89
{
public:
    void learn();
};
class Professor89 :public Human89
{
public:
    string subject;
};


#endif