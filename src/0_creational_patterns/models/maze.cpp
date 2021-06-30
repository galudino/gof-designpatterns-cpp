#include "maze.h"

#include <vector>

maze::maze() : m_rooms(new std::vector<room *>) {}

room *maze::room_number(int n) const {
    std::vector<room *>::const_iterator it = m_rooms->begin();
    for (; it != m_rooms->end(); ++it) {
        if ((*it)->room_number() == n) {
            return (*it);
            break;
        }
    }
    return 0;
}

void maze::add_room(room *r) { m_rooms->push_back(r); }

maze *maze::clone() const { return new maze(*this); }
