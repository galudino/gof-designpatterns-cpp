#ifndef BOMBED_WALL_H
#define BOMBED_WALL_H

#include "wall.h"

class bombed_wall : public wall {
public:
    bombed_wall();
    bombed_wall(const bombed_wall &);

    virtual wall *clone() const;
    bool has_bomb() { return false; }

private:
    bool m_bomb;
};

#endif /* BOMBED_WALL_H */
