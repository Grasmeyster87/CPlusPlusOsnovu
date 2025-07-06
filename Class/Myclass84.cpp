#include "Myclass84.h"

Apple84:: Apple84(int weight, string color)
{
        this->weight = weight;
        this->color = color;
        count++;
        id = count;
}

int Apple84::GetID()
{
        return id;
}


int Apple84::count = 0;
