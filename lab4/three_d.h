#ifndef THREE_D_H
#define THREE_D_H
#include <iostream>
using namespace std;

class three_d
{
private:
    int x, y, z;

public:
    three_d();
    three_d(int x, int y, int z);
    three_d(const three_d& other);
    ~three_d();

    three_d operator= (const three_d& other)
    {
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }

    bool operator== (const three_d& other);
    friend three_d operator-- (three_d& other);
    friend three_d operator-- (three_d& other, int notused);

    int getX();
    int getY();
    int getZ();

    void show();
};

three_d operator+ (three_d& obj, three_d& other);

#endif 