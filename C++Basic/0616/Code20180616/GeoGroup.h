#ifndef GEOGROUP_H
#define GEOGROUP_H

// include header file of the base class
#include "GeoObj.h"

// header file for the internal management of the elements
#include <vector>


/* class GeoGroup
* - derived from GeoObj
* - a GeoGroup consists of:
*     - a reference point (inherited)
*     - a collection of geometric elements (new)
*/
class GeoGroup : public GeoObj {
protected:
	std::vector<GeoObj*> elems;    // collection of pointers to GeoObjs

public:
	// constructor with optional reference point
	GeoGroup(const Coord& p = Coord(0, 0)) : GeoObj(p) {
	}

	// output (now also implemented)
	virtual void draw() const;

	// insert element
	virtual void add(GeoObj&);

	// remove element
	virtual bool remove(GeoObj&);

	// virtual destructor
	virtual ~GeoGroup() = default;
};

#endif  // GEOGROUP_H
