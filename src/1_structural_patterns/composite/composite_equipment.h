#ifndef COMPOSITE_EQUIPMENT_H
#define COMPOSITE_EQUIPMENT_H

#include "equipment.h"
#include "list.h"

class composite_equipment : public equipment {
public:
    virtual ~composite_equipment();

    virtual watt power();
    virtual currency net_price();
    virtual currency discount_price();

    virtual void add(equipment *);
    virtual void remove(equipment *);
    
    virtual iterator<equipment *> *create_iterator();

protected:
    composite_equipment(const char *);

private:
    list<equipment *> m_equipment;
};

#endif /* COMPOSITE_EQUIPMENT_H */
