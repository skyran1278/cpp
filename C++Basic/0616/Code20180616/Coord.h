#ifndef COORD_H
#define COORD_H
#include <iostream>

class Coord {
friend Coord operator + (const Coord&, const Coord&);
private:
	int x = 0;     // X coordinate
	int y = 0;     // Y coordinate
public:
	// default constructor, and two-parameter constructor
	Coord() = default;
	Coord(int newx, int newy) : x(newx), y(newy) {
	}
	Coord operator - () const;                // negation
	Coord&  operator += (const Coord&);         // +=
	void  printOn(std::ostream& strm) const;  // output
};

inline Coord Coord::operator - () const
{
	return Coord(-x, -y);
}

inline Coord& Coord::operator += (const Coord& p)
{
	x += p.x;
	y += p.y;
	return *this;
}

inline Coord operator + (const Coord& p1, const Coord& p2)
{
	return Coord(p1.x + p2.x, p1.y + p2.y);
}

inline void Coord::printOn(std::ostream& strm) const
{
	strm << '(' << x << ',' << y << ')';
}

inline std::ostream& operator<< (std::ostream& strm, const Coord& p)
{
	p.printOn(strm);
	return strm;
}

#endif // COORD_H
