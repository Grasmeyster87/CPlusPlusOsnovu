#include "Myclass102.h"


    Car102::Car102()
    {
        cout << " Конструктор класса Car вызван! " << endl;
    }
    
    void Car102::Use()
    {

        cout << " Я еду! " << endl;
    }
    Car102::~Car102()
    {
        cout << "\tDestructor класса Car вызван! " << endl;
    }


    Airplain102::Airplain102()
    {
        cout << " Конструктор класса Airplain вызван! " << endl;
    }
   
    void Airplain102::Use()
    {
        cout << " Я лечу" << endl;
    }
    Airplain102::~Airplain102()
    {
        cout << "  Destructor класса Airplain вызван! " << endl;
    }


    FlyingCar102::FlyingCar102()
    {
        cout << " Конструктор класса FlyingCar вызван! " << endl;
    }
    void FlyingCar102::Use()
    {
        cout << "Я лечу и еду!" << endl;
    }
    FlyingCar102::~FlyingCar102()
    {
        cout << "  Destructor класса FlyingCar вызван! " << endl;
    }
