#include "maze.h"

maze::maze() : m_rooms(new std::vector<room *>) {}

room *maze::room_number(int n) const {
    /*
    std::vector<room *>::const_iterator it = m_rooms->begin();

    for (; it != m_rooms->end(); ++it) {
        if ((*it)->room_number() == n) {
            return (*it);
            break;
        }
    }
    */  

    for (const auto &room : *m_rooms) {
        if (room->room_number() == n) {
            return room;
        }
    }

    return nullptr;
}

void maze::add_room(room *r) { m_rooms->push_back(r); }

maze *maze::clone() const { return new maze(*this); }
