#pragma once
#include "Human.h"

class Student : public Human
{
	string spec;
	unsigned course;
public:
	string getSpec() const { return spec; }
	void setSpec(string s) { spec = s; }
	unsigned getCourse() const { return course; };
	void setCourse(unsigned c) { course = c; }

	Student(string spec = "unknown", unsigned course = 1, string name = "unknown", unsigned age = 18) :
		spec(spec), course(course <= 6 || course != 0 ? course : 1), Human(name, age) {};
	Student(const Student& s);
	Student(const Human& s);
	Student& operator=(const Student& s);
	
	operator string() const;
	friend ostream& operator<<(ostream& o, const Student& s);
	friend istream& operator>>(istream& i, Student& s);
};
