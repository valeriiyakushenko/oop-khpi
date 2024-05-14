#include "fraction.h"

Fraction::Fraction()
{

}

Fraction::Fraction(int wholePart, int fractionalPart) : Pair(wholePart, fractionalPart)
{

}

Fraction::Fraction(const Fraction &other)
{

}

Fraction::~Fraction()
{

}

bool Fraction::operator== (const Fraction& other)
{
	return (first == other.first && second == other.second);
}

bool Fraction::operator!= (const Fraction& other)
{
	return (first != other.first || second != other.second);
}

bool Fraction::operator> (const Fraction& other)
{
	return (first > other.first) || (first == other.first && second > other.second);
}

bool Fraction::operator< (const Fraction& other)
{
	return (first < other.first) || (first == other.first && second < other.second);
}

