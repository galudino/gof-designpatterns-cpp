#include "bombed_wall.h"

bombed_wall::bombed_wall() : wall() {}

bombed_wall::bombed_wall(const bombed_wall &other) : wall(other) {
    m_bomb = other.m_bomb;
}

wall *bombed_wall::clone() const { return new bombed_wall(*this); }
