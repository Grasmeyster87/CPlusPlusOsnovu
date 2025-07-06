#include "Myclass63.h"

// Задание №63 Simple_Code_lesson_(42_43_44 Вывод рекурсивной функции!)----------------------------------------

int Foo63(int a)
{
    if (a < 0)
        return 0;
    cout << a << endl;
    a--;
    return Foo63(a);
}

int Fact63(int N)
{
    if (N == 0)
        return 0;
    if (N == 1)
        return 1;
    return N * Fact63(N - 1);
}
