#include "Myclass161.h"

void DoWork161(int a, int b, string msg)
{
    cout << "\t" << msg << endl << endl;

    this_thread::sleep_for(chrono::milliseconds(3000));

    cout << "\t==============DoWork161_STARTED=========================================================" << endl;

    this_thread::sleep_for(chrono::milliseconds(5000));

    cout << "\ta+b = " << a + b << endl;

    this_thread::sleep_for(chrono::milliseconds(3000));

    cout << "\t==============DoWork161_STOPED=========================================================" << endl;

}