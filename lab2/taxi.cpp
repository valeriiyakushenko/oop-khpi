#include "taxi.h"

void Taxi::setName(string name)
{
	this->name = name;
}

void Taxi::setAge(int age)
{
	if (age < 0) cout << "Incorrect age!" << endl;
	else
	{
		this->age = age;
	}
}

void Taxi::setMark(string mark)
{
	this->mark = mark;
}

void Taxi::setLicenseNumber(string licenseNumber)
{
	this->licenseNumber = licenseNumber;
}

void Taxi::setRating(double rating)
{
	if (rating < 0.0 || rating > 5.0) cout << "Incorrect rating!" << endl;
	else
	{
		this->rating = rating;
	}
}

string Taxi::getName()
{
	return name;
}

int Taxi::getAge()
{
	return age;
}

string Taxi::getMark()
{
	return mark;
}

string Taxi::getLicenseNumber()
{
	return licenseNumber;
}

double Taxi::getRating()
{
	return rating;
}

void Taxi::showDriver()
{
	cout << "Driver: " << endl;
	cout << "	Name: " << name << endl;
	cout << "	Age: " << age << endl;
	cout << "	Rating: " << rating << endl;
	cout << "	Car mark: " << mark << endl;
	cout << "	License number: " << licenseNumber << endl;

}