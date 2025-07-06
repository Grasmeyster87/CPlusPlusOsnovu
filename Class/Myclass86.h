#pragma once

#ifndef _Myclas86_ 
#define _Myclas86_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Image86
{
public:
    void GetImageInfo();
private:
    class Pixel86
    {
    public:
        Pixel86(int r, int g, int b);
        string GetInfo();
    private:
        int r;
        int g;
        int b;
    };
    static const int LENGHT=5;
    Pixel86 pixel[LENGHT]
    {
    Pixel86(0, 4, 64),
    Pixel86(4, 14, 10),
    Pixel86(111, 4, 24),
    Pixel86(244, 244, 14),
    Pixel86(111, 179, 64),
    };

};


#endif 