#include "Student.h"
#include <string>
#include <sstream>

Student::Student(const Student& s)
{
    *this = s;
}

Student::Student(const Human& s)
{
    *this = Student("unknown", 1, s.getName(), s.getAge());
}

Student& Student::operator=(const Student& s)
{
    this->Human::operator=(s);
    spec = s.spec;
    course = s.course;
    return *this;
}

Student::operator string() const
{
    stringstream ss;
    ss << string((const Human&)*this) << " Spec: " << spec << " Course: " << course;
    return ss.str();
}

ostream& operator<<(ostream& o, const Student& s)
{
    o << string(s);
    return o;
}

istream& operator>>(istream& i, Student& s)
{
    i >> (Human&)s;
    cout << "spec: "; getline(cin, s.spec);
    cout << "course: "; cin >> s.course;
    return i;
}
