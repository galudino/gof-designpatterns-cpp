#ifndef WALL_H
#define WALL_H

#include "map_site.h"

class wall : public map_site {
public:
    virtual wall *clone() const { return nullptr; }
    virtual void enter() { }
};

#endif /* WALL_H */
