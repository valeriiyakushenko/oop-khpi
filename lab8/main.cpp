#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	int size;

public:
	void setSize(int s)
	{
		size = s;
	}

	virtual string soundsLike() = 0;

};

class Cat : public Animal
{
public:
	string  soundsLike()
	{
		return "Meow!";
	}

};

class Dog : public Animal 
{
public:
	string  soundsLike() 
	{
		return "Woof!";
	}

};

class Tiger : public Cat 
{
public:
	string  soundsLike() 
	{
		if (size < 50)
			return Cat::soundsLike();
		else
			return "RRRRR!";
	}

};

int main()
{
	Animal* a;
	Cat cat;
	Dog dog;
	Tiger tiger;

	tiger.setSize(60);
	a = &cat;
	cout << "A cat says " << a->soundsLike() << endl;

	a = &dog;
	cout << "A dog says " << a->soundsLike() << endl;

	a = &tiger;
	cout << "A tiger says " << a->soundsLike() << endl;

	return 0;
}