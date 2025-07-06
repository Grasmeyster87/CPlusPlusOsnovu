#include "Myclass101.h"

    Car101::Car101()
    {
        cout << " Конструктор класса Car вызван! " << endl;
    }
    string str = "Поле класса машина";
    void Car101::Drive()
    {

        cout << " Я еду! " << endl;
    }
    Car101::~Car101()
    {
        cout << "\tDestructor класса Car вызван! " << endl;
    }

    Airplain101::Airplain101()
    {
        cout << " Конструктор класса Airplain вызван! " << endl;
    }
    
    void Airplain101::Fly()
    {
        cout << " Я лечу" << endl;
    }
    Airplain101::~Airplain101()
    {
        cout << "  Destructor класса Airplain вызван! " << endl;
    }


    FlyingCar101::FlyingCar101()
    {
        cout << " Конструктор класса FlyingCar вызван! " << endl;
    }
    void FlyingCar101::Fly()
    {
        cout << "Я лечу!" << endl;
    }
    FlyingCar101::~FlyingCar101()
    {
        cout << "  Destructor класса FlyingCar вызван! " << endl;
    }

