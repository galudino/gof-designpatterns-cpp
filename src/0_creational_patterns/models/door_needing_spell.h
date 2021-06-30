#ifndef DOOR_NEEDING_SPELL_H
#define DOOR_NEEDING_SPELL_H

#include "door.h"

class room;

class door_needing_spell : public door {
public:
    door_needing_spell(room *r1, room *r2);
};

#endif /* DOOR_NEEDING_SPELL_H */
