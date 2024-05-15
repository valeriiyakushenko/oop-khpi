#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

using namespace std;
const int MAX_SIZE = 20;

class Vector
{
private:
    int size;
    int* data;

public:
    Vector();
    Vector(int size);
    Vector(int size, int* data);
    Vector(const Vector& other);
    ~Vector();

    int operator[] (int index);
    int operator() ();
    Vector operator- (int num);
    Vector operator+ (int num);
    Vector operator= (const Vector& other);

    friend ostream& operator<< (ostream& out, const Vector& other);
    friend istream& operator>> (istream& in, Vector& other);
};

#endif