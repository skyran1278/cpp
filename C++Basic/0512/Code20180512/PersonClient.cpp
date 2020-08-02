#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person p;
	p.setName("John");
	p.setAge(25);
	cout << "Name: " << p.getName() << " age: " << p.getAge() << endl;
	return 0;
}
