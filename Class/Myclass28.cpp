#include "Myclass28.h"

// Задание №28_классы ----------------------------------------

First_27::First_27(int value)
{
    this->value = value;
    cout << " Введенное число - " << value << endl;
}

Second_27::Second_27(int val) : First_27(val) {};

Third_27::Third_27(int val) : First_27(val) {};