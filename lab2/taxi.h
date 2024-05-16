#ifndef TAXI_H
#define TAXI_H
#include <iostream>
#include <string>

using namespace std;

class Taxi
{
private:
    int age;
    double rating;
    string name;
    string mark;
    string licenseNumber;

public:
    void setName(string name);
    void setAge(int age);
    void setMark(string mark);
    void setLicenseNumber(string licenseNumber);
    void setRating(double rating);

    string getName();
    int getAge();
    string getMark();
    string getLicenseNumber();
    double getRating();

    void showDriver();
};

#endif 