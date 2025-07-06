#include "Myclass169.h"

recursive_mutex rm169;

mutex mtx169; // mtx - бъект класса mutex для синхронизации

void Print1_169(char ch)
{
    {//ограничение видимости объекта guard
        lock_guard<mutex> guard(mtx169);// выполняет функции  mtx.lock();mtx.unlock();

        this_thread::sleep_for(chrono::milliseconds(2000));

        for (int i = 0; i < 5; ++i)
        {
            for (int i = 0; i < 10; ++i)
            {
                cout << "\t" << ch;
                this_thread::sleep_for(chrono::milliseconds(10));
            }
            cout << endl << endl;
        }
    }//ограничение видимости объекта guard
    cout << endl << endl;

    this_thread::sleep_for(chrono::milliseconds(2000));
}// вызов деструктора объекта guard класса lock_guard<mutex> если нет ограничений видимости объекта guard
void Print_169(char ch)
{

    unique_lock<mutex> ul(mtx169, std::defer_lock);

    this_thread::sleep_for(chrono::milliseconds(2000));

    ul.lock();

    for (int i = 0; i < 5; ++i)
    {
        for (int i = 0; i < 10; ++i)
        {
            cout << "\t" << ch;
            this_thread::sleep_for(chrono::milliseconds(10));
        }
        cout << endl << endl;
    }

    cout << endl << endl;

    ul.unlock();

    this_thread::sleep_for(chrono::milliseconds(2000));
}