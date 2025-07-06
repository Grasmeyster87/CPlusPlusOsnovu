#include "Myclass26.h"


// Задание №26_классы----------------------------------------

void Person::Damge(Dog& d)
{
    d.health -= 20;
    cout << " Health of the animal is - " << d.health << endl;
}

void Person::kill(Dog& d)
{
    d.health = 0;
    cout << " Health of the animal is - " << d.health << endl;
}

void Person::Hill(Dog& d)
{
    d.health += 40;
    cout << " Health of the animal is - " << d.health << endl;
}