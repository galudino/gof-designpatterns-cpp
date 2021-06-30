#include "room_with_a_bomb.h"

room_with_a_bomb::room_with_a_bomb(int n, bool bombed) : room(n), m_bomb(bombed) {}

room_with_a_bomb::room_with_a_bomb(const room_with_a_bomb &other) : room(other) {
    m_bomb = other.m_bomb;
}

bool room_with_a_bomb::has_bomb() { return m_bomb; }
