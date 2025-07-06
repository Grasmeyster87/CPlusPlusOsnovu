#pragma once

#ifndef _Myclass_114_ 
#define _Myclass_114_

#include <iostream>
#include <Windows.h>

using namespace std;

class PC114
{
public:
    enum PCState
    {
        OFF,
        ON,
        SLEEP
    };
    PCState GetState()
    {
        return State;
    }
    void SetState(PCState State);
private:
    PCState State;
};

enum Speed114
{
    MIN = 150,
    RECOMEND = 600,
    MAX = 800
};


#endif 