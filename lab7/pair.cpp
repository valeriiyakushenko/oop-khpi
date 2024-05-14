#include "pair.h"

Pair::Pair()
{
	first = 0;
	second = 0;
}

Pair::Pair(int first, int second)
{
	this->first = first;
	this->second = second;
}

Pair::Pair(const Pair& other)
{
	first = other.first;
	second = other.second;
}

Pair::~Pair()
{

}

int Pair::getFirst() const
{
	return first;
}

int Pair::getSecond() const
{
	return second;
}

void Pair::setFirst(int first)
{
	this->first = first;
}

void Pair::setSecond(int second)
{
	this->second = second;
}

bool Pair::operator> (const Pair& other)
{
	return (first > other.first) || (first == other.first && second > other.second);
}

bool Pair::operator< (const Pair& other)
{
	return (first < other.first) || (first == other.first && second < other.second);
}
