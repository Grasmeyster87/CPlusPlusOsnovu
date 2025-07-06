#include "Myclass24.h"

// Задание №24_классы ----------------------------------------

Auto::Auto()
{
    year = 2022;
    month = 02;
    day = 15;
    get();
    cout << endl;
}

Auto::Auto(int date_year, int date_month, int date_day)
{
    year = date_year;
    month = date_month;
    day = date_day;
    get();
    cout << endl;
}

void Auto::messege()
{
    cout << " Class is working!! " << endl;
}

void Auto::set(int date_year, int date_month, int date_day)
{
    year = date_year;
    month = date_month;
    day = date_day;
}

void Auto::get()
{
    cout << " Year of this auto is - " << year << endl << " month is - " << month << endl << " day is - " << day << endl << endl;
}

Auto::~Auto() {
    cout << " Class is closed "<< endl;
}

void Numbers::set()
{
    val_1_Numbers;
    val_2_Numbers;
    cout << endl << " Введите первое число - ";
    cin >> val_1_Numbers;
    cout << endl << " Введите второе число - ";
    cin >> val_2_Numbers;

}

void Numbers::get()
{
    cout << " Numbers is (" << val_1_Numbers << "," << val_2_Numbers << ")" << endl;
}