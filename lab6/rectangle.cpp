#include "rectangle.h"

Rectangle::Rectangle()
{
    name = "";
    width = 0;
    height = 0;
    count++;
}

Rectangle::Rectangle(string name, double width, double height)
{
    this->name = name;
    this->width = width;
    this->height = height;
    count++;
}

Rectangle::Rectangle(const Rectangle& other)
{
    name = other.name;
    width = other.width;
    height = other.height;
    count++;
}

Rectangle::~Rectangle()
{
    count--;
}

string Rectangle::getName() const 
{
    return name;
}

double Rectangle::getWidth() const 
{
    return width;
}

double Rectangle::getHeight() const 
{
    return height;
}

int Rectangle::count = 0;
