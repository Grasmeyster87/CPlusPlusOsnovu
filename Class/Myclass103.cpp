#include "Myclass103.h"


    void SimpleBicycle103::TwistTheWheel()
    {
        cout << " Метод TwistTheWheel() SimplBicycle";
    }
    void SimpleBicycle103::Ride()
    {
        cout << " Метод Ride() SimpleBicycle";
    }



    void SportBicycle103::TwistTheWheel() 
    {
        cout << " Метод TwistTheWheel() SportBicycle";
    }
    void SportBicycle103::Ride()
    {
        cout << " Метод Ride() SportBicycle";
    }



    void Human103::RideOn(IBicycle103& bicycle)
    {
        cout << "\n Крутим руль" << endl;
        bicycle.TwistTheWheel();
        cout << "\n Поехали\n\n" << endl;
        bicycle.Ride();
    }
