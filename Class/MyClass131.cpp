#include "MyClass131.h"



void MyClass131:: Msg()
    {
        cout << "Msg" << endl;
    }
void  MyClass131:: Lampda()
    {
        auto f = [this]()// this захват всего класса
        {
            this->Msg();
        };
        f();
    }

