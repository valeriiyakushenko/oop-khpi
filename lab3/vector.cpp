#include <iostream>
#include "vector.h"
using namespace std;

Vector::Vector() : x(0.0), y(0.0) {
    cout << "Default constructor\n";
}

Vector::Vector(double valueX, double valueY) : x(valueX), y(valueY) {
    cout << "Parameterized constructor\n";
}

Vector::Vector(const Vector& src) : x(src.x), y(src.y) {
    cout << "Copy Constructor\n";
}

Vector::~Vector() {
    cout << "Destructor is working\n";
}

void Vector::setX(double valueX) {
    x = valueX;
}

void Vector::setY(double valueY) {
    y = valueY;
}

double Vector::getX() {
    return x;
}

double Vector::getY() {
    return y;
}

void Vector::showVector() {
    cout << "Vector x: " << x << " y: " << y << endl;
}
