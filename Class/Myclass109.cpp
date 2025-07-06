#include "Myclass109.h"

Point109::Point109()
{
    x = y = z = 0;
}
Point109::Point109(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}
void Point109::Print()
{
    cout << "X: " << x << "\tY: " << y << "\tZ: " << z << endl;
}

ostream& operator<<(ostream& os, const Point109& point)//перегрузка оператора
{
    os << point.x << " " << point.y << " " << point.z;
    cout << endl;
    return os;
}

istream& operator>>(istream& is, Point109& point)//перегрузка оператора
{
    is >> point.x >> point.y >> point.z;
    return is;
}