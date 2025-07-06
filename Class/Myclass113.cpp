#include "Myclass113.h"

void Foo113(int value)
{
    if (value < 0)
    {
        //throw exception("„исло меньше 0!!!");
        //throw " „исло меньше 0 ";
        throw exception("„исло меньше 0!!!");
    }

    if (value == 1)
    {
        throw MyException113("„исло равно 1", value);
        //throw " „исло меньше нул¤ ";
    }
    cout << "ѕеременна¤ = " << value << endl;
}
