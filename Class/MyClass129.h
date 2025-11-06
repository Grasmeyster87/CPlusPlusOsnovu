#pragma once
#ifndef _MyClass129_H_ 
#define _MyClass129_H_ 
#include <iostream>
#include <Windows.h>
#include <functional>
#include <vector>
using namespace std;

void Foo142(int a);
void Bar(int a);
int Sum(int a, int b);
void Baz(int a);
void DoWork(vector<int>& vc);

void DoWork(vector<int>& vc, vector<function<void(int)>> funcVector);
#endif  