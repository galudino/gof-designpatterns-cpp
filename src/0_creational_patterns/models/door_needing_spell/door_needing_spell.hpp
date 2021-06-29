#ifndef DOOR_NEEDING_SPELL_HPP
#define DOOR_NEEDING_SPELL_HPP

class DoorNeedingSpell : public Door {
public:
    DoorNeedingSpell(Room *r0 = 0, Room *r1 = 0)
    : Door(r0, r1) { }
    
    void receiveSpell(Spell *spell) {
        _spell = spell;
    }
private:
    Spell *_spell;
};

#endif /* DOOR_NEEDING_SPELL_HPP */
