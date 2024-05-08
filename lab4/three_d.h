#ifndef THREE_D_H
#define THREE_D_H

class three_d
{
private:
    int x, y, z;

public:
    three_d()
    {
        x = y = z = 0;
    }

    three_d(int x, int y, int z)
    {
        this->x = x; this->y = y; this->z = z;
    }

    three_d operator+ (const three_d& other);
    bool operator== (const three_d& other);
    three_d operator-- ();
    three_d operator--(int notused);
    three_d operator= (const three_d& other);

    int getX() { return x; }
    int gexY() { return y; }
    int getZ() { return z; }

    void show();
};

#endif 