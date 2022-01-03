#ifndef MAZE_H
#define MAZE_H

#include "room.h"
#include <vector>

class maze {
public:
    maze() : m_rooms(new std::vector<room *>) { }
    virtual ~maze() { }

    room *room_number(int n) const;
    void add_room(room *r);

    virtual maze *clone() const;
    
    friend class standard_maze_builder;
private:
    std::vector<room *> *m_rooms;
};

#endif /* MAZE_H */
