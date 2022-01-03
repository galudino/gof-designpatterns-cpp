#ifndef BOMBED_WALL_H
#define BOMBED_WALL_H

#include "wall.h"

class bombed_wall : public wall {
public:
    bombed_wall() : wall() { }
    bombed_wall(const bombed_wall &other) : wall(other), m_bomb(other.m_bomb) { }

    wall *clone() const override {
        return new bombed_wall(*this);
    }
    
    void enter() override { }
    bool has_bomb() const { return false; }

private:
    bool m_bomb = true;
};

#endif /* BOMBED_WALL_H */
