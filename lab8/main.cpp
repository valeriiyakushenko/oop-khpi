#include <iostream>
#include <cmath>

using namespace std;

class Solid
{
protected:
	double size;

public:
    void setSize(double size)
    {
        this->size = size;
    }

	virtual double area() = 0;
};

class Sphere : public Solid
{
public:
    double area() override
    {
        return 4 * 3.14 * pow(size, 2);
    }

};

class Cube : public Solid
{
public:
    double area() override
    {
        return 6 * pow(size, 2);
    }

};

int main()
{
    Sphere s;
    Cube c;

    s.setSize(5.3);
    c.setSize(3.8);

    cout << s.area() << endl;
    cout << c.area() << endl;

 	return 0;
}