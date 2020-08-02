#include "GeoGroup.h"
#include <algorithm>

/* add
* - insert element
*/
void GeoGroup::add(GeoObj& obj)
{
	// keep address of the passed geometric object
	elems.push_back(&obj);
}

/* draw
* - draw all elements, taking the reference points into account
*/
void GeoGroup::draw() const
{
	for (const auto& e : elems) {
		e->move(refpoint);   // add offset for the reference point
		e->draw();           // draw element
		e->move(-refpoint);  // subtract offset
	}
}

/* remove
* - delete element
*/
bool GeoGroup::remove(GeoObj& obj)
{
	// find first element with this address and remove it
	// return whether an object was found and removed
	std::vector<GeoObj*>::iterator pos;
	pos = std::find(elems.begin(), elems.end(), &obj);
	if (pos != elems.end()) {
		elems.erase(pos);
		return true;
	}
	else {
		return false;
	}
}
