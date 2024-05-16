#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

using namespace std;

class Vector
{
private:
    double x;
    double y;

public:
    Vector();
    Vector(double x, double y);
    Vector(const Vector& other);
    ~Vector();

    void setX(double x);
    void setY(double y);
    double getX();
    double getY();

    void showVector();
};

#endif
