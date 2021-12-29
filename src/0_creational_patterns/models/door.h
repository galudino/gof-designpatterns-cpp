#ifndef DOOR_H
#define DOOR_H

#include "map_site.h"
#include "room.h"

class door : public map_site {
public:
    door();
    door(room *r1, room *r2);
    door(const door &other);

    virtual void initialize(room *r1, room *r2);
    virtual door *clone() const;

    virtual void enter();
    room *other_side_from(room *r) { return nullptr; }

private:
    room *m_room1;
    room *m_room2;
};

#endif /* DOOR_H */
