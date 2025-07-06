#include "Myclass85.h"



    Apple85::Apple85(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
        count++;
        id = count;
    }
    int Apple85::GetID()
    {
        return id;

    }
    string Apple85::Getcolor()
    {
        return color;
    }
    int Apple85::GetCount()
    {
        return count;
    }
    void Apple85::changeColor(Apple85& apple, string color)
    {
        apple.color = color;
    }


int Apple85::count = 0;
