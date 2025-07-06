#pragma once

#ifndef _Myclass_119_ 
#define _Myclass_119_

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class MyClass119
{
public:
    int a = 10;
    void Foo();
};

struct MyStruct119//наследование public по умолчанию, в классе private если не указан другой
{
    int a = 22;
    void Foo();
};

#endif  