#pragma once

#ifndef Myclas26
#define Myclas26

#include <iostream>

using namespace std;

class Person;

class Dog
{
    friend class Person;

private:

    int health = 100;
};

class Person
{
public:
    void Damge(Dog& d);
    void kill(Dog& d);
    void Hill(Dog& d);
};

#endif

