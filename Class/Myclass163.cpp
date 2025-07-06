#include "Myclass163.h"

int  Sum163(int a, int b)
{

    this_thread::sleep_for(chrono::milliseconds(3000));
    cout << "\tID потока = " << this_thread::get_id() <<
        "\t=========DoWork_STARTED" << endl << endl;
    this_thread::sleep_for(chrono::milliseconds(5000));
    this_thread::sleep_for(chrono::milliseconds(3000));
    cout << "\t=================================DoWork_STOPED\t\t" << endl << endl;
    return a + b;
}
