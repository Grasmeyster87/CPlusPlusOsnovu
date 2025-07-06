#include "Myclass166.h"

mutex mtx166; // mtx - бъект класса mutex для синхронизации

void Print166(char ch)
{
    {//ограничение видимости объекта guard
        lock_guard<mutex> guard(mtx166);// выполняет функции  mtx.lock();mtx.unlock();

        for (int i = 0; i < 5; ++i)
        {
            for (int i = 0; i < 5; ++i)
            {
                cout << "\t" << ch;
                this_thread::sleep_for(chrono::milliseconds(20));
            }
            cout << endl << endl;
        }
    }//ограничение видимости объекта guard

    cout << endl << endl;

}// вызов деструктора объекта guard класса lock_guard<mutex> если нет ограничений видимости объекта guard
