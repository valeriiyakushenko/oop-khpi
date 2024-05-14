#include "fraction.h"

bool Fraction::operator== (const Fraction& other)
{
	return (wholePart == other.wholePart || fractionalPart == other.fractionalPart);
}

bool Fraction::operator!= (const Fraction& other)
{
	return (wholePart != other.wholePart || fractionalPart != other.fractionalPart);
}

bool Fraction::operator> (const Fraction& other)
{
	return (first > other.first) || (first == other.first && second > other.second);
}

bool Fraction::operator< (const Fraction& other)
{
	return (first < other.first) || (first == other.first && second < other.second);
}
