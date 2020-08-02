#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle c1;
	print(cout, c1);
	c1.setRadius(1);    // This sets c1 radius to 1
	print(cout, c1);
	Circle c2(2.5);     // This sets c2 radius to 2.5
	print(cout, c2);
	return 0;
}
