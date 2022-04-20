#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	Human h = { "Andrew", 24 };
	Student s = { "IT-11", 1, "Lisnychuk Arsen" };
		
	cout << s << endl << h << endl;
	s = h;
	cout << s << endl << h << endl;

	cin >> s;
	cin >> h;
	return 0;
}