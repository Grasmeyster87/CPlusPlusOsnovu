#include "Myclass86.h"

void Image86::GetImageInfo()
{
   for (int i = 0; i < LENGHT; ++i)
   {
      cout << " № " << i << pixel[i].GetInfo() << endl;
   }
}

   
Image86::Pixel86::Pixel86(int r, int g, int b)
{
    this->r = r;
    this->g = g;
    this->b = b;
}
   
string Image86::Pixel86::GetInfo()
{
   return " Pixel: r= " + to_string(r) + "; g = " + to_string(g) + "; b = " + to_string(b) + ";";
}
    

