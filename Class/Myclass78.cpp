#include "Myclass78.h"

#include <iostream>

#include "Windows.h";

#include <string>

using namespace std;

    void Human::Print()
    {
        cout << " Имя: " << name << "\n Вес: " << weight << "\n Возраст: " << age << endl;
    }

    void Point78::print_ab()
    {
        printAB();
    }

    int Point78::GetA()
    {
        return a;
    }

    void Point78::SetA(int valueX)
    {
        a = valueX;
    }

    int Point78::GetB()
    {
        return b;
    }

    void Point78::SetB(int valueX)
    {
        b = valueX;
    }

    Point78::Point78(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;

    }

    void Point78::print3d()
    {
        cout << "\n\n Выводим переменные :" << "\tx =" << x << ";\ty = " << y << ";" << endl;
    }

    bool Point78::operator ==(const Point78& other)
    {
        return this->x == other.x && this->y == other.y;                                         //this->x == other.x && this->y = other.y;
    }

    bool Point78::operator !=(const Point78& other)
    {
        return !(this->x == other.x && this->y == other.y);
    }

    void Point78::printAB()
    {
        cout << "\n\n Выводим переменные с модификатора доступа private:" << " a=" << a << " b=" << b << endl << endl;
    }

    void Coffegrinder::Start()
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

    bool Coffegrinder::CheckVoltage()
    {
        return true;
    }
