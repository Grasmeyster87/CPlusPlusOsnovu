#include "Myclass77.h"


    Myclass77::Myclass77(int size)
    {
        this->Size77 = size;
        this->data77 = new int[size];
        for (int i = 0; i < size; i++)
        {
            data77[i] = i;
        }
        cout << " Вызвался конструктор " << this << endl;
    };
    Myclass77::Myclass77(const Myclass77& other)
    {
        this->Size77 = other.Size77;
        this->data77 = new int[other.Size77];
        for (int i = 0; i < other.Size77; i++)
        {
            this->data77[i] = other.data77[i];
        }
        cout << " Вызвался конструктор копирования " << this << endl;
    };


    Myclass77::~Myclass77()
    {
        delete[] data77;
        cout << " Вызвался деструктор " << this << endl;
    };


void Foo77(Myclass77 value)
{
    cout << " Вызвалась функция Foo " << endl;
}
Myclass77 Foo277()
{
    cout << " Вызвалась функция Foo2 " << endl;
    Myclass77 temp(2);
    return temp;
}
