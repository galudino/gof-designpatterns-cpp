#ifndef WALL_H
#define WALL_H

#include "map_site.h"

class wall : public map_site {
public:
    wall();
    wall(const wall &);
    virtual wall *clone() const;
    virtual void enter();
};

#endif /* WALL_H */
