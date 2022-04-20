#include "Human.h"
#include <string>
#include <sstream>
Human::Human(const Human& h)
{
    *this = h;
}

Human& Human::operator=(const Human& h)
{
    name = h.name;
    age = h.age;
    return *this;
}

Human::operator string() const
{
    stringstream ss;
    ss << "name: " << name << " age: " << age;
    return ss.str();
}

ostream& operator<<(ostream& o, const Human& h)
{
    o << string(h);
    return o;
}

istream& operator>>(istream& i, Human& h)
{
    cout << "name: "; getline(cin, h.name);
    cout << "age: "; cin >> h.age;
    return i;
}
