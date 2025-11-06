#include "MyClass130.h"


void Foo130(int a)
{
    if (a > 10 && a < 40)
    {
        cout << " Foo142 " << a << endl;
    }
}
void Bar130(int a)
{
    if (a % 2 == 0)
    {
        cout << " Bar " << a << endl;
    }
}
int Sum130(int a, int b)
{
    return a + b;
}
void Baz130(int a)
{
    cout << " BAZ " << endl;
}




void DoWork130(vector<int>& vc, function<void(int)> func)
{
    for (auto el : vc)
    {
            func(el);
    }
}