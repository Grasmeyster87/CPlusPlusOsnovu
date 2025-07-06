#pragma once

#ifndef _Myclas87_ 
#define _Myclas87_ 

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Pixel87
{
public:
    Pixel87();
    Pixel87(int r, int g, int b);
    string GetInfo();
private:
    int r;
    int g;
    int b;
};
class Image87
{
public:
    void GetImageInfo();
   
private:

    static const int LENGHT = 5;
    Pixel87 pixel[LENGHT]
    {
        Pixel87(0, 4, 64),
        Pixel87(4, 14, 10),
        Pixel87(111, 4, 24),
        Pixel87(244, 244, 14),
        Pixel87(111, 179, 64),
    };
};


#endif