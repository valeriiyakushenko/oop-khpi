#include <iostream>
#include "Taxi.h"

using namespace std;

int main()
{
    Taxi ivan;

    char name[25] = { "Ivan Ivanov" };
    char new_name[25];
    ivan.setName(name);
    ivan.setSalary(15000);
    ivan.setTrip((char*)"Kharkiv", (char*)"Kyiv", 2019, 3, 1);
    ivan.setTrip((char*)"Kyiv", (char*)"Kharkiv", 2022, 8, 21);
    ivan.getName(new_name);

    cout << new_name << endl;
    cout << "Salary: " << ivan.getSalary() << endl;
    ivan.showTrips();
    cout << "Stage: " << ivan.getStage(2024, 3, 19) << endl;

    return 0;
}