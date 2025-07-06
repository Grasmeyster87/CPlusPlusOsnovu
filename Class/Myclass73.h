#pragma once
#ifndef Myclas73
#define Myclas73

#include <iostream>
#include <Windows.h>


using namespace std;

//73 (72_73_74_75_76_OOP_get_set_metodu_classa)-------------------------------------------------------------------------------------------------------------------------------

class Human73
{
public:
    int age73=0;
    int weight73=0;
    string name73;
    void Print73();
};


class point73
{
public:
    int x;
    int y;
    int z;
    void print_ab();

    int GetA();
    void SetA(int valueX);
    int GetB();
    void SetB(int valueX);
    point73(int valueX = 0, int valueY = 0, int valueZ = 0);

    void print3d73();
private:
    int a=0;
    int b=0;
    void printAB();
};

class Coffegrinder73
{
public:
    
    void Start73();

private:
    bool CheckVoltage73();

};

#endif