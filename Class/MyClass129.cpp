#include "MyClass129.h"


void Foo142(int a)
{
    if (a > 10 && a < 40)
    {
        cout << " Foo142 " << a << endl;
    }
}
void Bar(int a)
{
    if (a % 2 == 0)
    {
        cout << " Bar " << a << endl;
    }
}
int Sum(int a, int b)
{
    return a + b;
}
void Baz(int a)
{
    cout << " BAZ " << endl;
}
void DoWork(vector<int>& vc)
{
    for (auto el : vc)
    {
        Bar(el);
    }
}
/*
void DoWork(vector<int>& vc, function<void(int)> f)
{
    for (auto el : vc)
    {
       // f(el);
       Bar(el);
       Foo142(el);
    }
}*/
void DoWork(vector<int>& vc, vector<function<void(int)>> funcVector)
{
    for (auto el : vc)
    {
        // f(el);
        //Bar(el);
       // Foo142(el);
        for (auto& fel : funcVector)
        {
            fel(el);
        }
    }
}