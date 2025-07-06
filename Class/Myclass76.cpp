#include "Myclass76.h"   


    Myclass76::Myclass76(int size76)
    {
        this->Size76 = size76;
        this->data76 = new int[size76];
        for (int i = 0; i < size76; i++)
        {
            data76[i] = i;
        }
        cout << " Вызвался конструктор " << this << endl;
    };
    Myclass76::Myclass76(const Myclass76& other)
    {
        this->Size76 = other.Size76;
        this->data76 = new int[other.Size76];
        for (int i = 0; i < other.Size76; i++)
        {
            this->data76[i] = other.data76[i];
        }
        cout << " Вызвался конструктор копирования " << this << endl;
    };
    Myclass76:: ~Myclass76()
    {
        delete[] data76;
        cout << " Вызвался деструктор " << this << endl;
    };


void Foo76(Myclass76 value)
{
    cout << " Вызвалась функция Foo " << endl;
}
Myclass76 Foo276()
{
    cout << " Вызвалась функция Foo282 " << endl;
    Myclass76 temp(2);
    return temp;
}