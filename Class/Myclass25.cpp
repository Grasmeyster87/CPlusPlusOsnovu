#include "Myclass25.h"


A_25::A_25()
{
    cout << " Enter values - ";
    cin >> i;
}

B_25::B_25()
{
    cout << " Enter values - ";
    cin >> y;
}

int sum(A_25 first, B_25 second)
{
    return (first.i + second.y);
}