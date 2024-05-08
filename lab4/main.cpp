#include <iostream>
#include "three_d.h"
using namespace std;

int main()
{
    three_d a(1, 2, 3), b(10, 10, 10), c;

    cout << "c = a + b" << endl;
    c = a + b;
    a.show();  b.show();  c.show();

    cout << "\na == b" << endl;
    bool result = a.operator==(b);
    cout << "Result: " << boolalpha << result << "\n" << endl;

    cout << "a = --c" << endl;
    a = --c;
    a.show();  b.show();  c.show();

    cout << "\na = c-- " << endl;
    a = c--;
    a.show();  b.show();  c.show();

    cout << "\nb = c" << endl;
    b = c;
    a.show();  b.show();  c.show();

    return 0;
}