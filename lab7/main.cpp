#include <iostream>
#include "pair.h"
#include "fraction.h"

using namespace std;

void showPair(const Pair& src)
{
    cout << "First: " << src.getFirst() << ", Second: " << src.getSecond() << endl;
}

Pair newPair()
{
    Pair object(0, 0);
    return object;
}

int main()
{
	Pair a(5, 2);
    Fraction b(4, 3), c(6, 7);

    Pair d = newPair();
    showPair(d);

    cout << "a > d: ";
    if (a > d) {cout << "True" << endl;}
    else {cout << "False" << endl;}

    cout << "c < b: ";
    if (c < b) {cout << "True" << endl;}
    else {cout << "False" << endl;}

    cout << "c == b: ";
    if (c == b) {cout << "True" << endl;}
    else {cout << "False" << endl;}

    cout << "c == b: ";
    if (c != b) {cout << "True" << endl;}
    else {cout << "False" << endl;}

	return 0;
}