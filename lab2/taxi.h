#ifndef TAXI_H
#define TAXI_H

#include <cstring>
#include <string>
#include <iostream>
using namespace std;

class Taxi
{
private:
    char name[25];
    char departure[25];
    char destination[25];
    int age;
    int stage;
    int trip_index = 0;
    float salary;
    static const int maxlen = 255;
    int date[maxlen][3];
    string tripList[maxlen][2];

    void calculateStage(int currentYear, int currentMonth, int currentDay);

public:
    void setName(char* n);
    void getName(char* n);
    void setAge(int s);
    int getAge();
    void setTrip(char* dep, char* des, int year, int month, int day);
    void getTrip(char* dep, char* des);
    void setSalary(float s);
    float getSalary();
    void showTrips();
    int getStage(int currentYear, int currentMonth, int currentDay);
};

#endif 