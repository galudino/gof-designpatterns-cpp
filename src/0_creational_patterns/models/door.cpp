#include "door.h"

door::door() {}

door::door(room *r1, room *r2) : m_room1(r1), m_room2(r2) { }

door::door(const door &other) {
    m_room1 = other.m_room1;
    m_room2 = other.m_room2;
}

void door::initialize(room *r1, room *r2) {
    m_room1 = r1;
    m_room2 = r2;
}

door *door::clone() const { return new door(*this); }
