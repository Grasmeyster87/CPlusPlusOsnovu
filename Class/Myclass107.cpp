#include "Myclass107.h"

Point107::Point107()
{
    x = y = z = 0;
}
Point107::Point107(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}
void Point107::Print()
{
    cout << "X: " << x << "\tY: " << y << "\tZ: " << z << endl;
}