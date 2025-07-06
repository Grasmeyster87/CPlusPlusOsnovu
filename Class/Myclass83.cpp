#include "Myclass83.h"


void Human83::EatApplle(Apple83& apple)
{
        cout << " Работает функция EatAplle - " << endl;
}


Apple83::Apple83(int weight, string color)
{
        this->weight = weight;
        this->color = color;
}


void Human83::TakeApple(Apple83& apple1)
{

    cout << " Работает функция TakeApple - " << " Вес яблока - " << apple1.weight << " цвет яблока - " << apple1.color << endl;

}
