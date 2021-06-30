#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include "room.h"

class maze {
public:
    maze();
    room *room_number(int n) const;
    void add_room(room *r);
    virtual maze *clone() const;

private:
    std::vector<room *> *m_rooms;
};

#endif /* MAZE_H */
