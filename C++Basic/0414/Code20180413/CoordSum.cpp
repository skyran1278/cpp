#include "Coord.h"
#include <iostream>
using namespace std;

int main() {
	Coord c1, c2;
	cout << "Read the first Coord object with three doubles: ";
	cin >> c1.x >> c1.y >> c1.z;
	cout << "Read the second Coord object with three doubles: ";
	cin >> c2.x >> c2.y >> c2.z;
	cout << "The sum of these two Coord objects are: " << c1.x + c2.x << " "
		<< c1.y + c2.y << " " << c1.z + c2.z << endl;
	return 0;
}