#include "vector.h"
#include "error.h"

Vector::Vector()
{
    size = 0;
    data = 0;
}

Vector::Vector(int size)
{
    if (size > MAX_SIZE) throw Error("Vector length more than MAXSIZE\n");

    this->size = size;
    data = new int[size];

    for (int i = 0; i < size; i++)
    {
        data[i] = i;
    }
}

Vector::Vector(int size, int* data)
{
    if (size > MAX_SIZE) throw Error("Vector length more than MAXSIZE\n");

    this->size = size;
    this->data = new int[size];

    for (int i = 0; i < size; i++)
    {
        this->data[i] = data[i];
    }
}

Vector::Vector(const Vector& other)
{
    size = other.size;
    data = new int[size];

    for (int i = 0; i < size; i++)
    {
        data[i] = other.data[i];
    }
}

Vector::~Vector()
{
    delete[]data;
}

int Vector::operator[] (int index)
{
    if (index < 0) throw Error("Error: index < 0");
    if (index >= size) throw Error("Error: index > size");

    return data[index];
}

int Vector::operator() ()
{
    return size;
}

Vector Vector::operator- (int num)
{
    if (size + 1 == MAX_SIZE) throw Error("Vector is full");

    Vector temp(size - num, data);
    for (int i = 0; i < size - num; i++)
    {
        temp.data[i] = i + 10;
    }

    return temp;
}

Vector Vector::operator+ (int num)
{
    if (size + 1 == MAX_SIZE) throw Error("Vector is full");

    Vector temp(size + num, data);
    for (int i = size; i < size + num; i++)
    {
        temp.data[i] = i;
    }

    return temp;
}

Vector Vector::operator= (const Vector& other)
{
    if (data != 0)
    {
        delete[]data;
    }

    size = other.size;
    data = new int[size];

    for (int i = 0; i < size; i++)
    {
        data[i] = other.data[i];
    }

    return *this;
}

ostream& operator<< (ostream& out, const Vector& other)
{
    if (other.size == 0) out << "Empty";

    else
    {
        for (int i = 0; i < other.size; i++)
        {
            out << other.data[i] << " ";
        }
    }

    return out;
}

istream& operator>> (istream& in, Vector& other)
{
    for (int i = 0; i < other.size; i++)
    {
        cout << ">";
        in >> other.data[i];
    }
    return in;
}