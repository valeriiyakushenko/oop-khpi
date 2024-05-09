#include <iostream>
#include "polygon.h"
using namespace std;

Polygon::Polygon()
{
    size = 0;
    sides = 0;

    cout << "Constructor " << this << endl;
}

Polygon::Polygon(int size)
{
    this->size = size;
    this->sides = new int[size];

    for (int i = 0; i < size; i++)
    {
        sides[i] = i;
    }

    cout << "Constructor " << this << endl;
}

Polygon::Polygon(const Polygon& other)
{
    this->size = other.size;
    this->sides = new int[other.size];

    for (int i = 0; i < other.size; i++)
    {
        this->sides[i] = other.sides[i];
    }

    cout << "Copy Constructor " << this << endl;
}

Polygon::~Polygon()
{
    delete[] sides;

    cout << "Destructor" << endl;
}

int& Polygon::operator[] (int index)
{
    if (index > size - 1) cout << "index > size" << endl;
    if (index < 0) cout << "index < size" << endl;
    return sides[index];
}

void Polygon:: operator() (int n)
{
    for (int i = 0; i < size; i++)
        sides[i] = n * sides[i];
}

ostream& operator<< (ostream& output, const Polygon& other)
{
    if (other.size == 0) { output << "Empty" << endl; }
    else
    {
        for (int i = 0; i < other.size; i++)
        {
            output << other.sides[i] << " ";
        }
    }
    return output;
}

istream& operator>> (istream& input, Polygon& other)
{
    for (int i = 0; i < other.size; i++)
    {
        cout << ">";
        input >> other.sides[i];
    }
    return input;
}
