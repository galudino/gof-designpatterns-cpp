#ifndef DOOR_NEEDING_SPELL_H
#define DOOR_NEEDING_SPELL_H

#include "door.h"

class room;
class spell;

class door_needing_spell : public door {
public:
    door_needing_spell(room *r1, room *r2) : door(r1, r2) { }
    
    void initialize(room *r1, room *r2) override { }
    
    door *clone() const override {
        return new door_needing_spell(*this);
    }
    
    void enter() override { }
    
    class spell *spell() const { return m_spell; }
private:
    class spell *m_spell = nullptr;
};

#endif /* DOOR_NEEDING_SPELL_H */
