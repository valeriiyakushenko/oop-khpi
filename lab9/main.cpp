#include <iostream>
#include "vector.h"
#include "error.h"

using namespace std;

int main()
{
    try
    {
        Vector x(6);
        Vector y;
        Vector z;
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << y << endl << endl;

        cout << "y = x + 3" << endl;
        cout << "z = x - 3" << endl;
        y = x + 3;
        z = x - 3;

        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl<< endl;

        cout << "z()" << endl;
        cout << z() << endl << endl;

        cout << "y[7]" << endl;
        cout << y[7] << endl;
        cout << "z[6]" << endl;
        cout << z[6] << endl << endl;


    }

    catch (Error& error)
    {
        error.what();
    }

    return 0;
}