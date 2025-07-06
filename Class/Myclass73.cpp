#include "Myclass73.h"

//73 (72_73_74_75_76_OOP_get_set_metodu_classa)-------------------------------------------------------------------------------------------------------------------------------

void Human73::Print73()
{
    cout << " Имя: " << name73 << "\n Вес: " << weight73 << "\n Возраст: " << age73 << endl;
}

void point73::print_ab()
{
    printAB();
}

int point73::GetA()
{
    return a;
}

void point73::SetA(int valueX)
{
    a = valueX;
}

int point73::GetB()
{
    return b;
}

void point73::SetB(int valueX)
{
    b = valueX;
}

point73::point73(int valueX, int valueY, int valueZ)
{
    x = valueX;
    y = valueY;
    z = valueZ;
}

void point73::print3d73()
{
    cout << "\n\n Выводим переменные :" << "\tx =" << x << ";\ty = " << y << ";\tz = " << z << ";\n" << endl;
}

void point73::printAB()
{
    cout << "\n\n Выводим переменные с модификатора доступа private:" << " a=" << a << " b=" << b << endl << endl;
}


    void Coffegrinder73::Start73()
    {
        if (CheckVoltage73())
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

bool Coffegrinder73:: CheckVoltage73()
    {
        return true;
    }
