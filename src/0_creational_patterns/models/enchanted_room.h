#ifndef ENCHANTED_ROOM_H
#define ENCHANTED_ROOM_H

#include "room.h"
class spell;

class enchanted_room : public room {
public:
    enchanted_room(int n, spell *spell);
    spell *get_spell() { return m_spell; }

private:
    spell *m_spell;
};

#endif /* ENCHANTED_ROOM_H */
