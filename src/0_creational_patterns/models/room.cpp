#include <iostream>
#include "room.h"

class wall;
class door;

room::room(int n) : m_room_number(n) {}

void room::set_side(direction d, map_site *ms) { m_sides[d] = ms; }

int room::room_number() { return m_room_number; }

room *room::clone() const { return new room(*this); }

void room::enter() {}
