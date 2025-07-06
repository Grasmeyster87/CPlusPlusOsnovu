#include "Myclass162.h"

void DoWork162(int& a)
{

    this_thread::sleep_for(chrono::milliseconds(3000));

    cout << "\tID потока = " << this_thread::get_id() <<

        "\t=========DoWork_STARTED" << endl << endl;

    this_thread::sleep_for(chrono::milliseconds(5000));

    a = a * 2;

    cout << "\ta * 2 = " << a << endl << endl;

    this_thread::sleep_for(chrono::milliseconds(3000));

    cout << "\t=================================DoWork_STOPED\t\t" << endl << endl;

}
