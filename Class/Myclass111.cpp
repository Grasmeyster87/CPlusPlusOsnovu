#include "Myclass111.h"


void Foo111(int value)
{
    if (value < 0)
    {
        throw exception("„исло меньше 0!!!");
    }
    cout << "переменная = " << value << endl;
}
