#include "Myclass164.h"



void MyClass164:: DoWork164()
{

    this_thread::sleep_for(chrono::milliseconds(2000));

    cout << "\tID потока (DoWork) = " << this_thread::get_id() <<

        "\t=========DoWork_STARTED" << endl << endl;

    this_thread::sleep_for(chrono::milliseconds(5000));

    cout << "\tID потока (DoWork) = " << this_thread::get_id() <<

        "\t=========DoWork_STOPED\t\t" << endl << endl;

};

int MyClass164:: DoWork2164(int a)
{

    this_thread::sleep_for(chrono::milliseconds(2000));

    cout << "\tID потока (DoWork2)= " << this_thread::get_id() <<

        "\t=========DoWork2_STARTED" << endl << endl;

    this_thread::sleep_for(chrono::milliseconds(5000));

    cout << "\tЗначение параметра (DoWork2)\t" << a << endl << endl;

    this_thread::sleep_for(chrono::milliseconds(3000));

    cout << "\tID потока (DoWork2) = " << this_thread::get_id() <<

        "\t=========DoWork2_STOPED\t\t" << endl << endl;
    return 0;
};

int MyClass164:: Sum164(int a, int b)
{
    this_thread::sleep_for(chrono::milliseconds(2000));

    cout << "\tID потока (Sum) = " << this_thread::get_id() <<

        "\t\t=========Sum_STARTED" << endl << endl;

    this_thread::sleep_for(chrono::milliseconds(5000));

    cout << "\tID потока (Sum) = " << this_thread::get_id() <<

        "\t\t=========Sum_STOPED\t\t" << endl << endl;

    return a + b;
};

