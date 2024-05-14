#include "fraction.h"

Fraction::Fraction()
{
    wholePart = 0;
    fractionalPart = 0;
}

Fraction::Fraction(int wholePart, int fractionalPart) : Pair(wholePart, fractionalPart)
{
    this->wholePart = wholePart;
    this->fractionalPart = fractionalPart;
}

Fraction::Fraction(const Fraction &other)
{
    wholePart = other.wholePart;
    fractionalPart = other.fractionalPart;
}

Fraction::~Fraction()
{

}

bool Fraction::operator== (const Fraction& other)
{
	return (wholePart == other.wholePart && fractionalPart == other.fractionalPart);
}

bool Fraction::operator!= (const Fraction& other)
{
	return (wholePart != other.wholePart || fractionalPart != other.fractionalPart);
}

bool Fraction::operator> (const Fraction& other)
{
	return (wholePart > other.wholePart) || (wholePart == other.wholePart && fractionalPart > other.fractionalPart);
}

bool Fraction::operator< (const Fraction& other)
{
	return (wholePart < other.wholePart) || (wholePart == other.wholePart && fractionalPart < other.fractionalPart);
}

