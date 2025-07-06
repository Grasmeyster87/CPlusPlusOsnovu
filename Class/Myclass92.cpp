#include "Myclass92.h"

    A92::A92()
    {
        msg = " Простое сообщение. Конструктор класса А!";
    }
    A92::A92(string msg)
    {
        this->msg = msg;

    }
    A92::A92(string msg, int c)
    {
        this->msg = msg;

    }
    void A92::PrintMsg()
    {
        cout << msg << endl;
    }