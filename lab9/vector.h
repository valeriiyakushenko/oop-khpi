#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

using namespace std;
const int MAX_SIZE = 20;

class Vector
{
private:
    int size;
    int* beg;

public:
    Vector();
    Vector(int s);
    Vector(int s, int* mas);
    Vector(const Vector& v);
    ~Vector();

    const Vector& operator=(const Vector& v);
    int operator[](int i);
    Vector operator+(int a);
    Vector operator--();

    friend ostream& operator<<(ostream& out, const Vector& v);
    friend istream& operator>>(istream& in, Vector& v);

};

#endif