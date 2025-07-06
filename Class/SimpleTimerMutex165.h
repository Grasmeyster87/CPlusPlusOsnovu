#pragma once

#ifndef SimpleTimerMutex

#define SimpleTimerMutex


#include <chrono>
#include <iostream>
#include <Windows.h>
using namespace std;

class SimpleTimerMutex165
{
public:

	SimpleTimerMutex165();

	~SimpleTimerMutex165();

private:
	std::chrono::time_point <std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;
};

#endif