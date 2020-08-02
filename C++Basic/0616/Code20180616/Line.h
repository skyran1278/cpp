#ifndef LINE_H
#define LINE_H

#include <iostream>
#include "GeoObj.h"

class Line : public GeoObj {
protected:
	Coord p2;    // second point, end point

public:
	Line(const Coord& a, const Coord& b)
		: GeoObj(a), p2(b) {}

	virtual void draw() const;
	virtual void move(const Coord&);
	virtual ~Line() {}
};

inline void Line::draw() const
{
	std::cout << "Line from " << refpoint
		<< " to " << p2 << std::endl;
}

inline void Line::move(const Coord& offset)
{
	refpoint += offset;    // represents GeoObj::move(offset);
	p2 += offset;
}

#endif // LINE_H
