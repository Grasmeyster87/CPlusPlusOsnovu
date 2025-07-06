#include "Myclass80.h"

#include <iostream>
#include "Windows.h";
#include <string>
using namespace std;


    void Human80::Print()
    {
        cout << " Имя: " << name << "\n Вес: " << weight << "\n Возраст: " << age << endl;
    }

    void point80::print_ab()
    {
        printAB();
    }
    int point80::GetA()
    {
        return a;
    }
    void point80::SetA(int valueX)
    {
        a = valueX;
    }
    int point80::GetB()
    {
        return b;
    }
    void point80::SetB(int valueX)
    {
        b = valueX;
    }
    point80::point80(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;

    }
    point80:: point80(char* )// конструктор по умолчанию
    {

    }
    void point80::print3d()
    {
        cout << "\n\n Выводим переменные :" << "\tx =" << x << ";\ty = " << y << ";" << endl;
    }
    bool point80::operator ==(const point80& other)
    {
        return this->x == other.x && this->y == other.y;                                         //this->x == other.x && this->y = other.y;
    }
   
    bool point80::operator!=(const point80& other)
    {
        return !(this->x == other.x && this->y == other.y);
    }
    point80 point80:: operator + (const point80& other)
    {
        point80 temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
    
    point80& point80::operator++()
    {
        this->x = x++;
        this->y += 1;
        return *this;
    }
    point80 & point80::  operator ++(int value)
    {
        point80 temp(*this);
        this->x = x++;
        this->y += 1;
        return temp;
    }   

    void point80::printAB()
    {
        cout << "\n\n Выводим переменные с модификатора доступа private:" << " a=" << a << " b=" << b << endl << endl;
    }

    void Coffegrinder80::Start()
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

    bool Coffegrinder80::CheckVoltage()
    {
        return true;
    }


    int & Testclass80:: operator [](int index)
    {
        return arr[index];
    }

   

