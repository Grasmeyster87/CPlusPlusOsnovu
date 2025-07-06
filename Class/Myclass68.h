#pragma once

#ifndef Myclas68
#define Myclas68

#include <iostream>
#include "Windows.h";
#include <string>

using namespace std;

//68(65 ”казатель на функцию в качестве параметра)----------------------------------------------------------------------------------------------------------------------------
string GetDataAstral();
string GetDatafromWebserver();
string GetDatafromBD();
void showinfo(string(*functions)());
#endif