#include <iostream>
#include "taxi.h"

using namespace std;

int main()
{
    Taxi a;

    a.setName("Ivan Ivanov");
    a.setAge(25);
    a.setMark("Toyota");
    a.setLicenseNumber("AA 1234 AB");
    a.setRating(4.9);

    a.showDriver();

    return 0;
}