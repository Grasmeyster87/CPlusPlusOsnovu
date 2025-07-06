#include "Myclass79.h"



    void Human79:: Print()
    {
        cout << " Имя: " << name << "\n Вес: " << weight << "\n Возраст: " << age << endl;
    }

    void point79::print_ab()
    {
        printAB();
    }
    int point79::GetA()
    {
        return a;
    }
    void point79::SetA(int valueX)
    {
        a = valueX;
    }
    int point79::GetB()
    {
        return b;
    }
    void point79::SetB(int valueX)
    {
        b = valueX;
    }
    point79::point79(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;

    }
    void point79::print3d()
    {
        cout << "\n\n Выводим переменные :" << "\tx =" << x << ";\ty = " << y << ";" << endl;
    }
    bool point79::operator ==(const point79& other)
    {
        return this->x == other.x && this->y == other.y;                                         //this->x == other.x && this->y = other.y;
    }
    bool point79::operator !=(const point79& other)
    {
        return !(this->x == other.x && this->y == other.y);
    }
    point79 point79::operator + (const point79& other)
    {
        point79 temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }

    void point79::printAB()
    {
        cout << "\n\n Выводим переменные с модификатора доступа private:" << " a=" << a << " b=" << b << endl << endl;
    }


    void Coffegrinder79::Start()
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

    bool Coffegrinder79::CheckVoltage()
    {
        return true;
    }
