#include "Myclass133.h"


    void MyFunctor::operator () ()
    {
        cout << " Я функтор " << count << endl;
        count++;
    }
    int MyFunctor::operator () (int a, int b)
    {
        cout << " Я функтор " << endl;
        return a + b;
    }


    void EvenFunctor::operator () (int value)
    {
        if (value % 2 == 0)
        {
            evenSum += value;
            evenCount++;
        }
    }
    void EvenFunctor::ShowEvenSum()
    {
        cout << " Сумма чётных чисел = " << evenSum << endl;
    }
    void EvenFunctor::ShowEvenCount()
    {
        cout << " Количество чётных чисел = " << evenCount << endl;
    }
