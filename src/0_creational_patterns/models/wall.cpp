#include "wall.h"

wall::wall() {}

wall::wall(wall const &) {}

wall *wall::clone() const { return new wall(*this); }

void wall::enter() {}
