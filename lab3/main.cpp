#include <iostream>
#include "vector.h"
using namespace std;

int main() {
    Vector obj1;
    obj1.showVector();
    cout << endl;

    Vector obj2(5.0, 7.0);
    obj2.showVector();
    cout << endl;

    Vector obj3(obj2);
    obj3.showVector();
    cout << endl;

    return 0;
}