#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

namespace firstNS115
{
    void Foo115();
    extern int global_a115;
    class Point1115
    {
        int c115=0;
    };
};
namespace secondNS115
{
    void Foo115();
    extern int b115;
    class Point115
    {
        int e115=0;
    };
}
namespace thirdNS115
{
    namespace secondNS115_2
    {
        void Foo115();
        extern int b_2_115;
        class Point115
        {

        };
    }
}

