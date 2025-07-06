#pragma once
#ifndef Myclas65

#define Myclas65

#include <iostream>

#include <Windows.h>

using namespace std;

//65(53_54_55_56 new, new delete, null pointer, ƒинамический массив. ƒвумерный динамический)------------------------------------------------------------------------------------
void Showarray(int* const arr, const int size);
void FillArray(int* const arr, const int size);
void push_back(int*& arr, int& size, const int value);
void zamena(int*& arr, int& size, const int namber, const int value1);

#endif