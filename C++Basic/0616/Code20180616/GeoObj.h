#ifndef GEOOBJ_H
#define GEOOBJ_H

#include "Coord.h"

class GeoObj {
protected:
	// every GeoObj has a reference point
	Coord refpoint;
	GeoObj(const Coord& p) : refpoint(p) {
	}

public:
	virtual void move(const Coord& offset) {
		refpoint += offset;
	}
	virtual void draw() const = 0;
	virtual ~GeoObj() = default;
};

#endif  // GEOOBJ_H
