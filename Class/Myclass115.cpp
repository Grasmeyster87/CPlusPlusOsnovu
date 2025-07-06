#include "Myclass115.h"

int global_a115 = 0;

extern int b115=0;

extern int b_2_115 = 0;

void firstNS115::Foo115()
{
    cout << " Foo115_firstNS" << endl;
}

void secondNS115::Foo115()
{
    cout << " Foo115_secondNS" << endl;
}

void thirdNS115::secondNS115_2::Foo115()
{
    cout << " Foo115_thirdNS_secondNS" << endl;
}