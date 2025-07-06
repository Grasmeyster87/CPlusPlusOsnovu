#include "Myclass65.h"

//65(53_54_55_56 new, new delete, null pointer, ƒинамический массив. ƒвумерный динамический)-----------------------------------------------------

void FillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 100;
    }
}

void Showarray(int* const arr, const int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void push_back(int*& arr, int& size, const int value)
{
    int* newArray = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[size] = value;
    size++;
    delete[] arr;
    arr = newArray;
}

void zamena(int*& arr, int& size, const int namber, const int value1)
{
    int* newArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[namber] = value1;

    delete[] arr;
    arr = newArray;
}
