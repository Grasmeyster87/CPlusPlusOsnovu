#include "Myclass57.h"

// Задание №33_34_35_36 Simple_Code_lesson_(33_34_35_36)----------------------------------------

// Functions

void privet57()
{
    cout << "Привет Виталий\n";
}

int sum33(int a, int b)
{
    cout << "Вывести сумму чисел - " << a << " и " << b << " = " << a + b << endl;
    return a + b;
}

void FillArray36(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 1000;
    }
}

void PrintArray36(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << arr[i];
    }
    cout << endl;
}