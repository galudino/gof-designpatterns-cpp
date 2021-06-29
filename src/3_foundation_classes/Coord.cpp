#include <cmath>
#include "Coord.h"

Coord coord::min(Coord x, Coord y) { return std::fmin(x, y); }

Coord coord::max(Coord x, Coord y) { return std::fmax(x, y); }

Coord coord::abs(Coord x) { return std::fabs(x); }

int coord::round(Coord x) { return std::floor(x + 0.5); }
