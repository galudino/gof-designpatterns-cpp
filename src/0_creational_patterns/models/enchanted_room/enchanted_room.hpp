#ifndef ENCHANTED_ROOM_HPP
#define ENCHANTED_ROOM_HPP

class EnchantedRoom : public Room {
public:
    EnchantedRoom(int roomNo, Spell *s)
    : Room(roomNo), _spell(s) {
        
    }
        
    Spell *getSpell() const { return _spell; }
private:
    Spell *_spell;
};


#endif /* ENCHANTED_ROOM_HPP */
