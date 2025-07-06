#pragma once
#ifndef _MyClass130_H_ 
#define _MyClass130_H_ 
#include <iostream>
#include <Windows.h>
#include <functional>
#include <vector>
using namespace std;

void Foo130(int a);
void Bar130(int a);
int Sum130(int a, int b);
void Baz130(int a);




void DoWork130(vector<int>& vc, function<void(int)> func);
#endif  