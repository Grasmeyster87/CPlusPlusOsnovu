#include "Myclass94.h"

    
    void Weapon94::Foo()
    {
        cout << " Foo();" << endl;
    }


    void Gun94::shoot() 
    {
        cout << "Bang!" << endl;
    }


    void SubmachineGun94::shoot() 
    {
        cout << "\nSubmachineGun!" << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << "Bang!" << endl;
        }
    }


    void Bazooka94::shoot() 
    {
        cout << "\nBazooka!" << endl;

        cout << "BADABUM!" << endl;

    }


    void Knife94::shoot() 
    {
        cout << "\nVjyHHH!" << endl;
    }


    void Player94::shoot(Weapon94* gun1)
    {
        cout << "\n\n Пушка игрока" << endl;
        gun1->shoot();
    }

