#ifndef ENCHANTED_ROOM_H
#define ENCHANTED_ROOM_H

#include "room.h"

class spell;

class enchanted_room : public room {
public:
    enchanted_room(int n, spell *spell) : room(n), m_spell(spell) { }
    
    class spell *spell() const { return m_spell; }

private:
    class spell *m_spell = nullptr;
};

#endif /* ENCHANTED_ROOM_H */
