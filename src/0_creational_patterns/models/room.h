#ifndef ROOM_H
#define ROOM_H

#include "map_site.h"
#include "maze_parts.h"

#include <array>

class room : map_site {
public:
    room(int n = 0) : m_room_number(n) { }
    ~room() { }

    virtual room *clone() const { return new room(*this); }

    void set_side(direction d, map_site *ms) {
        m_sides[d] = ms;
    }

    int room_number() const { return m_room_number; }

    virtual void enter() { }

    friend class standard_maze_builder;
private:
    std::array<map_site *, 4> m_sides { nullptr, nullptr, nullptr, nullptr };
    int m_room_number = 0;
};

#endif /* ROOM_H */
