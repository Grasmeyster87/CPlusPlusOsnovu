#include "Myclass168.h"

recursive_mutex rm168;

void Foo168(int a)
{
    rm168.lock();
    cout << "\tПеременная а = " << a << endl << endl;
    this_thread::sleep_for(chrono::milliseconds(300));
    if (a <= 1)
    {
        cout << endl;
        rm168.unlock();
        return;
    }
    a--;
    Foo168(a);
    rm168.unlock();
}

