#ifndef ROOM_H
#define ROOM_H

#include "map_site.h"
#include "maze_parts.h"

class room : map_site {
public:
    room(int n = 0);

    virtual room *clone() const;

    void set_side(direction d, map_site *ms);
    int room_number();

    virtual void enter();

private:
    map_site *m_sides[4];
    int m_room_number;
};

#endif /* ROOM_H */
