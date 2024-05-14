#include "three_d.h"

three_d::three_d()
{
    x = 0;
    y = 0;
    z = 0;
}

three_d::three_d(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

three_d::three_d(const three_d& other)
{
    x = other.x;
    y = other.y;
    z = other.z;
}

three_d::~three_d()
{

}

bool three_d::operator== (const three_d& other)
{
    if (x == other.x && y == other.y && z == other.z)
    {
        return true;
    }
    return false;
}

three_d operator-- (three_d& other)
{
    other.x--;
    other.y--;
    other.z--;
    return other;
}

three_d operator-- (three_d& other, int notused)
{
    three_d temp = other;
    other.x--;
    other.y--;
    other.z--;
    return temp;
}

three_d operator+ (three_d &obj, three_d &other)
{
    return three_d(obj.getX() + other.getX(), obj.getY() + other.getY(), obj.getZ() + other.getZ());
}

int three_d::getX()
{
    return x;
}

int three_d::getY()
{
    return y;

}
int three_d::getZ()
{
    return z;
}

void three_d::show()
{
    cout << x << ", " << y << ", " << z << endl;
}
