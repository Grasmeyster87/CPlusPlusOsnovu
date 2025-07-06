#include "Myclass167.h"


mutex mtx1_167; // mtx - бъект класса mutex для синхронизации
mutex mtx2_167; // mtx - бъект класса mutex для синхронизации

void Print_167()
{
    mtx1_167.lock();

    this_thread::sleep_for(chrono::milliseconds(1000));

    mtx2_167.lock();

    for (int i = 0; i < 5; ++i)
    {
        for (int i = 0; i < 10; ++i)
        {
            cout << "\t*";
            this_thread::sleep_for(chrono::milliseconds(10));
        }
        cout << endl << endl;
    }

    cout << endl << endl;

    mtx1_167.unlock();

    mtx2_167.unlock();
}

void Print2_167()
{
    mtx1_167.lock();

    this_thread::sleep_for(chrono::milliseconds(1000));

    mtx2_167.lock();

    for (int i = 0; i < 5; ++i)
    {
        for (int i = 0; i < 10; ++i)
        {
            cout << "\t#";
            this_thread::sleep_for(chrono::milliseconds(10));
        }
        cout << endl << endl;
    }

    cout << endl << endl;

    mtx1_167.unlock();

    mtx2_167.unlock();
}
