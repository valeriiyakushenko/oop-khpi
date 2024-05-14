#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include "pair.h"

using namespace std;

class Fraction : public Pair
{
public:
    Fraction(int wholePart, int fractionalPart);
    
    bool operator== (const Fraction& other);
    bool operator!= (const Fraction& other);
    bool operator> (const Fraction& other);
    bool operator< (const Fraction& other);
};

#endif