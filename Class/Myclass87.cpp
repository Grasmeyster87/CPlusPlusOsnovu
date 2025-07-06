#include "Myclass87.h"



    Pixel87::Pixel87()
    {
        r = g = b = 0;
    }
    Pixel87::Pixel87(int r, int g, int b)
    {
        this->r = r;
        this->g = g;
        this->b = b;
    }
    string Pixel87::GetInfo()
    {
        return " Pixel: r= " + to_string(r) + "; g = " + to_string(g) + "; b = " + to_string(b) + ";";
    }


    void Image87::GetImageInfo()
    {
        for (int i = 0; i < LENGHT; ++i)
        {
            cout << " � " << i << pixel[i].GetInfo() << endl;
        }
    }