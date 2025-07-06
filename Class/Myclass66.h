#pragma once
#ifndef Myclas66

#define Myclas66

#include <iostream>

#include <Windows.h>

using namespace std;

//66(50_51_52 Ссылки. Указатель на ссылку. Передача параметров в функцию по ссылке. Возврат значений через ссылки.)-------------------------------------------------------------

void foo1(int a);
void foo2(int& a);
void foo3(int* a);
void foo4(int& a, int& b, int& c);
template <typename T1, typename T2>
void foo5(T1& a, T2& b)
{
    T1 c = b;
    b = a;
    a = c;
}
#endif
