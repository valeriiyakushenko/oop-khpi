#include <iostream>
#include "pair.h"
#include "fraction.h"

using namespace std;

int main()
{
	Pair a(2, 3), b(12, 5);
    Fraction c(1, 2), d(1, 13);

    if (c != d)
    {
        cout << "True" << endl;
    } else
    {
        cout << "False" << endl;
    }

    cout << c.getFirst() << endl;
    c.setFirst(6);
    cout << c.getFirst() << endl;

	return 0;
}