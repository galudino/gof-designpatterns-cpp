#ifndef COORD_H
#define COORD_H

typedef float Coord;

namespace coord {

Coord min(Coord x, Coord y);
Coord max(Coord x, Coord y);
Coord abs(Coord x);
int round(Coord x);

} // namespace coord

#endif /* COORD_H */
