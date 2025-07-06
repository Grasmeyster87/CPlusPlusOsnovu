#include "Myclass93.h"



    void Gun93::Shoot()
    {
        cout << "Bang!" << endl;
    }



    void SubmachineGun93::Shoot() 
    {
        cout << "\nSubmachineGun!" << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << "Bang!" << endl;
        }
    }


    void Bazooka93::Shoot() 
    {
        cout << "\nBazooka!" << endl;

        cout << "BADABUM!" << endl;

    }


    void Player93::shoot(Gun93* gun1) 
    {
        cout << "\n\n Пушка игрока" << endl;
        gun1->Shoot();
    }

