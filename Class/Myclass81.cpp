#include "Myclass81.h"

#include <iostream>
#include "Windows.h";
#include <string>
using namespace std;
class Testclass81;

void Human81::Print()
    {
        cout << " Имя: " << name << "\n Вес: " << weight << "\n Возраст: " << age << endl;
    }

    void point81:: print_ab()
    {
        printAB();
    }
    int point81::GetA()
    {
        return a;
    }
    void point81::SetA(int valueX)
    {
        a = valueX;
    }
    int point81::GetB()
    {
        return b;
    }
    void point81::SetB(int valueX)
    {
        b = valueX;
    }
    
    point81::point81(int valueX, int valueY)
    {
       x = valueX;
       y = valueY;
    }
   
    void point81::print3d()
    {
        cout << "\n\n Выводим переменные :" << "\tx =" << x << ";\ty = " << y << ";" << endl;
    }
    bool point81::operator ==(const point81& other)
    {
        return this->x == other.x && this->y == other.y;                                         //this->x == other.x && this->y = other.y;
    }
    bool point81:: operator !=(const point81& other)
    {
        return !(this->x == other.x && this->y == other.y);
    }
    point81 point81:: operator + (const point81 & other)
    {
        point81 temp(0, 0);
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
    point81 & point81:: operator ++()
    {
        this->x = x++;
        this->y += 1;
        return *this;
    }
    point81 & point81::operator ++(int value)
    {
        point81 temp(*this);
        this->x = x++;
        this->y += 1;
        return temp;
    }    

    void point81::printAB()
    {
        cout << "\n\n Выводим переменные с модификатора доступа private:" << " a=" << a << " b=" << b << endl << endl;
    }


    void Coffegrinder81::Start()
    {
        if (CheckVoltage())
        {

            MessageBox(NULL, L"Напражение впорядке кофемашина может работать!!!!", L"Кофемашина", MB_OK);
            cout << " Напражение впорядке кофемашина может работать!!!! " << endl;
        }
        else
        {
            MessageBox(NULL, L"Нужного напражение нет кофемашина не работает !!!!", L"Кофемашина", MB_OK);
            cout << " Нужного напражение нет кофемашина не работает !!!! " << endl;
        }
    }

    bool Coffegrinder81::CheckVoltage()
    {
        return true;
    }


    int& Testclass81::operator [](int index)
    {
        return arr[index];
    }
   


void ChangeX(point81& value1, Testclass81& value2)
{
    value1.x = -1;
    value2.data81 = 20;
}

void MyClass81::Printmessage()
{
    cout << " Funcrion Printmessage!" << endl;
}
MyClass81::MyClass81()
{
}

MyClass81::~MyClass81()
{
}