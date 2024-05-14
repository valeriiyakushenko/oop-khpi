#include "fraction.h"

Fraction::Fraction(int wholePart, int fractionalPart) : Pair(wholePart, fractionalPart)
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

