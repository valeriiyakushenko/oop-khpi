#include "taxi.h"
using namespace std;

void Taxi::setName(char* n) {
    strcpy(name, n);
}

void Taxi::getName(char* n) {
    strcpy(n, name);
}

void Taxi::setAge(int s) {
    age = s;
}

int Taxi::getAge() {
    return age;
}

void Taxi::setTrip(char* dep, char* des, int year, int month, int day) {
    strcpy(departure, dep);
    strcpy(destination, des);
    date[trip_index][0] = year;
    date[trip_index][1] = month;
    date[trip_index][2] = day;
    tripList[trip_index][0] = departure;
    tripList[trip_index][1] = destination;
    calculateStage(year, month, day);
    trip_index++;
}

void Taxi::getTrip(char* dep, char* des) {
    strcpy(dep, departure);
    strcpy(des, destination);
}

float Taxi::getSalary() {
    return salary;
}

void Taxi::setSalary(float s) {
    salary = s;
}

void Taxi::showTrips() {
    for (int i = 0; i < trip_index; i++)
    {
        cout << "Trip " << i + 1 << ", From: " << tripList[i][0] << ", To: " << tripList[i][1] << ", date: " << date[i][0] << '.' << date[i][1] << '.' << date[i][2] << endl;
    }
}

void Taxi::calculateStage(int currentYear, int currentMonth, int currentDay) {
    if (trip_index == 0)
        stage = 0;
    else
    {
        int daysDelta = currentDay - date[0][2];
        if (daysDelta < 0)
            currentMonth -= 1;
        int monthsDelta = currentMonth - date[0][1];
        if (monthsDelta < 0)
            currentYear -= 1;
        stage = currentYear - date[0][0];
    }
}

int Taxi::getStage(int currentYear, int currentMonth, int currentDay) {
    if ((currentYear != date[trip_index][0]) || (currentMonth != date[trip_index][1]) || (currentDay != date[trip_index][2]))
        calculateStage(currentYear, currentMonth, currentDay);
    return stage;
}