#include <iostream>
#ifndef POLYGON_H
#define POLYGON_H
using namespace std;

class Polygon
{
private:
    int size;
    int* sides;

public:
    Polygon();
    Polygon(int size);
    Polygon(const Polygon& other);
    ~Polygon();

    void operator() (int n);
    int& operator[] (int index);
    friend ostream& operator<< (ostream& output, const Polygon& other);
    friend istream& operator>> (istream& input, Polygon& other);
};

#endif