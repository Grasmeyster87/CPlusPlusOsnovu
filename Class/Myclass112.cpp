#include "Myclass112.h"

void Foo112(int value)
{
    if (value < 0)
    {
        //throw exception("„исло меньше 0!!!");
        throw " „исло меньше нул¤ ";
    }
    if (value == 0)
    {
        throw exception("„исло равно 0!!!");
        //throw " „исло меньше нул¤ ";
    }
    if (value == 1)
    {
        throw exception("„исло равно 1!!!");
        //throw " „исло меньше нул¤ ";
    }
    cout << "ѕеременна¤ = " << value << endl;
}