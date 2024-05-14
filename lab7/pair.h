#ifndef PAIR_H
#define PAIR_H
#include <iostream>

using namespace std;

class Pair
{
protected:
    int first;
    int second;

public:
    Pair();
    Pair(int first, int second);
    Pair(const Pair& other);
    ~Pair();

    int getFirst() const;
    int getSecond() const;
    void setFirst(int first);
    void setSecond(int second);

    bool operator> (const Pair& other);
    bool operator< (const Pair& other);
};
	
#endif