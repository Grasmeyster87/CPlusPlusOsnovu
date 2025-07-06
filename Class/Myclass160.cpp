#include "Myclass160.h"

void DoWork160()
{
    for (size_t i = 0; i < 10; i++)
    {
        cout << " ID потока = " << this_thread::get_id() << "\tDoWork\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
}