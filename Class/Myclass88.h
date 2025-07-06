#pragma once

#ifndef _Myclas88_ 
#define _Myclas88_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Cap88
{
public:
	string GetColor();
private:
	string color = "Green";
};

class Model88
{
public:
	void InspectMode();
private:
	Cap88 cap;
};

class Human88
{
public:

	Human88();
	~Human88();
	void Think(int dumat);
	void IspectTheCap();
private:
	class Brain
	{
	public:
		void Think(int dumat);
	};
	Brain brain;
	Cap88 cap;
};

#endif