#include <iostream>
#include "three_d.h"
using namespace std;

three_d three_d::operator+ (const three_d& other)
{
    three_d temp;
    temp.x = this->x + other.x;
    temp.y = this->y + other.y;
    temp.z = this->z + other.z;
    return temp;
}

bool three_d::operator== (const three_d& other)
{
    if (this->x == other.x)
    {
        if (this->y == other.y)
        {
            if (this->z == other.z)
            {
                return true;
            }
        }
    }
    return false;
}


three_d three_d::operator-- ()
{
    this->x--;
    this->y--;
    this->z--;
    return *this;
}

three_d three_d::operator-- (int notused)
{
    three_d temp = *this;
    this->x--;
    this->y--;
    this->z--;
    return temp;
}

three_d three_d::operator= (const three_d& other)
{
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;
    return *this;
}

void three_d::show()
{
    cout << x << ", " << y << ", " << z << endl;
}