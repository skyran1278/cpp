#ifndef CIRCLE_H
#define CIRCLE_H

// header file for I/O
#include <iostream>

#include "GeoObj.h"

class Circle : public GeoObj {
protected:
	unsigned radius;    // radius

public:
	// constructor for center point and radius
	Circle(const Coord& m, unsigned r)
		: GeoObj(m), radius(r) {}

	// draw geometric object (now implemented)
	virtual void draw() const;

	// virtual destructor
	virtual ~Circle() {}
};

inline void Circle::draw() const
{
	std::cout << "Circle around center point " << refpoint
		<< " with radius " << radius << std::endl;
}

#endif // CIRCLE_H
