#include "maze.h"

room *maze::room_number(int n) const {
    for (const auto &room : *m_rooms) {
        if (room->room_number() == n) {
            return room;
        }
    }

    return nullptr;
}

void maze::add_room(room *r) { m_rooms->push_back(r); }

maze *maze::clone() const { return new maze(*this); }
