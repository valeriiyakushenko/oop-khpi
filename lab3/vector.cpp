#include "vector.h"

Vector::Vector() 
{
    x = 0;
    y = 0;
    cout << "Constructor " << endl;
}

Vector::Vector(double x, double y)
{
    this->x = x;
    this->y = y;
    cout << "Parameterized constructor " << endl;
}

Vector::Vector(const Vector& other)
{
    this->x = other.x;
    this->y = other.y;
    cout << "Copy Constructor " << endl;
}

Vector::~Vector() 
{
    cout << "Destructor " << endl;
}

void Vector::setX(double x) 
{
    this->x = x;
}

void Vector::setY(double y) 
{
    this->y = y;
}

double Vector::getX()
{
    return x;
}

double Vector::getY() 
{
    return y;
}

void Vector::showVector() 
{
    cout << "Vector x: " << x << " y: " << y << endl;
}
