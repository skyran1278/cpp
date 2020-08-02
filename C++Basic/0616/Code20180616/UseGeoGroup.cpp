#include <iostream>

// header files for used classes
#include "Line.h"
#include "Circle.h"
#include "GeoGroup.h"

int main()
{
    Line l1(Coord(1, 2), Coord(3, 4));
    Line l2(Coord(7, 7), Coord(0, 0));
    Circle c(Coord(3, 3), 11);

    GeoGroup g;

    g.add(l1);            // GeoGroup contains: - line l1
    g.add(c);             //     - circle c
    g.add(l2);            //     - line l2

    g.draw();             // draw GeoGroup
    std::cout << std::endl;

    g.move(Coord(3, -3));  // move offset of GeoGroup
    g.draw();                  // draw GeoGroup again
    std::cout << std::endl;

    g.remove(l1);         // GeoGroup now only contains c and l2
    g.draw();             // draw GeoGroup again
}
