#include "MyClass132.h"



int Sum145(int a, int b)
{

    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "ID потока = " << this_thread::get_id() << "===============\tSum STARTED \t=============" << endl;
    this_thread::sleep_for(chrono::milliseconds(5000));
    cout << "ID потока = " << this_thread::get_id() << "===============\tSum STARTED \t=============" << endl;
    return a + b;
}

SimpleTimer:: SimpleTimer()
{
    start = chrono::high_resolution_clock::now();
};
SimpleTimer:: ~SimpleTimer()
{
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> duration = end - start;
    cout << " Duration " << duration.count() << " s " << endl;
};

void Foo()
{
    SimpleTimer st;
    for (size_t i = 0; i < 5000; i++)
    {
        cout << i << endl;
    }
}