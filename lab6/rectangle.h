﻿#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
using namespace std;

class Rectangle 
{
private:
    string name;
    double width, height;
    static int count;

public:
    Rectangle();
    Rectangle(string name, double width, double height);
    Rectangle(const Rectangle& other);
    ~Rectangle();

    string getName() const;
    double getWidth() const;
    double getHeight() const;
    static int getObjectCount() { return count; }
};

#endif