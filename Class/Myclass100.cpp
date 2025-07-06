#include "Myclass100.h"


    Car100::Car100()
    {
        cout << " Конструктор класса Car вызван! " << endl;
    }
    
    void Car100::Drive()
    {

        cout << " Я еду! " << endl;
    }



    Airplain100::Airplain100()
    {
        cout << " Конструктор класса Airplain вызван! " << endl;
    }
    
    void Airplain100::Fly()
    {
        cout << " Я лечу" << endl;
    }


    FlyingCar100::FlyingCar100()
    {
        cout << " Конструктор класса FlyingCar вызван! " << endl;
    }
    void FlyingCar100::Fly()
    {
        cout << "Я лечу!" << endl;
    }