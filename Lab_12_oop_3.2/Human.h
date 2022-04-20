#pragma once
#include <iostream>
using namespace std;

class Human
{
	string name;
	unsigned age;
public:
	string getName() const { return name; }
	void setName(string n) { name = n; }
	unsigned getAge() const { return age; }
	void setAge(unsigned a) { age = a; }

	Human(string name = "unknown", unsigned age = 18) : name(name), age(age) {};
	Human(const Human& h);
	Human& operator=(const Human& h);

	operator string() const;
	friend ostream& operator<<(ostream& o, const Human& h);
	friend istream& operator>>(istream& i, Human& h);
};

