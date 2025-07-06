#include "Myclass82.h"


   

    void Human82::EatApplle(Apple82 & apple)
    {
        cout << " Работает функция EatAplle - " << endl;
    }


    Apple82::Apple82(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
    }

    void Human82::TakeApple(Apple82& apple1)
    {

        cout << " Работает функция TakeApple - " << " Вес яблока - " << apple1.weight << " цвет яблока - " << apple1.color << endl;

    }
