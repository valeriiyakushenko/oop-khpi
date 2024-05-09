#include "polygon.h"
#include <iostream>
using namespace std;

int main()
{
    Polygon a(5), b(a);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "\nOperator[]" << endl;
    cout << "a[4]: " << a[4] << endl;

    cout << "\nOperator() " << endl;
    cout << "a*4: ";
    a(4);
    cout << a << endl;

    cout << "\nOperator<<" << endl;
    cout << "a: " << a << endl;

    cout << "\nOperator>>" << endl;
    cin >> a;
    cout << "a: " << a << endl << endl;


    return 0;
}