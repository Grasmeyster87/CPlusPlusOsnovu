#include "Myclass165.h"

mutex mtx165; // mtx - бъект класса mutex для синхронизации


void Print165(char ch)
{
    //this_thread::sleep_for(chrono::milliseconds(2000));

    mtx165.lock();// блокировка выполнения кода в других потоках

    for (int i = 0; i < 5; ++i)
    {
        for (int i = 0; i < 5; ++i)
        {
            cout << "\t" << ch;
            this_thread::sleep_for(chrono::milliseconds(20));
        }
        cout << endl << endl;
    }
    cout << endl << endl;

    mtx165.unlock(); // разблокировка выполнения кода в других потоках

    //this_thread::sleep_for(chrono::milliseconds(2000));
}