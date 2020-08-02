#include "Line.h"
#include "Circle.h"
#include "GeoObj.h"

// forward declaration
void printGeoObj(const GeoObj&);

int main()
{
	Line l1(Coord(1, 2), Coord(3, 4));
	Line l2(Coord(7, 7), Coord(0, 0));
	Circle c(Coord(3, 3), 11);

	// array as an inhomogenous collection of geometric objects:
	GeoObj* coll[10];

	coll[0] = &l1;     // collection contains: - line l1
	coll[1] = &c;      //     - circle c
	coll[2] = &l2;     //     - line l2

	/* move and draw elements in the collection
	* - the correct function is called automatically
	*/
	for (int i = 0; i<3; i++) {
		coll[i]->draw();
		coll[i]->move(Coord(3, -3));
	}

	// output individual objects via auxiliary function
	printGeoObj(l1);
	printGeoObj(c);
	printGeoObj(l2);
}

void printGeoObj(const GeoObj& obj)
{
	/* the correct function is called automatically
	*/
	obj.draw();
}
