#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include "pair.h"

using namespace std;

class Fraction : public Pair
{
protected:
    int wholePart;
    int fractionalPart;

public:
    Fraction();
    Fraction(int wholePart, int fractionalPart);
    Fraction(const Fraction& other);
    ~Fraction();
    
    bool operator== (const Fraction& other);
    bool operator!= (const Fraction& other);
    bool operator> (const Fraction& other);
    bool operator< (const Fraction& other);
};

#endif