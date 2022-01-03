#ifndef COMPOSITE_EQUIPMENT_H
#define COMPOSITE_EQUIPMENT_H

#include "equipment.h"
#include "list.h"

class composite_equipment : public equipment {
public:
    virtual ~composite_equipment() { }

    watt power() override;
    currency net_price() override;
    currency discount_price() override;

    void add(equipment *e) override;
    void remove(equipment *e) override;
    
    iterator<equipment *> *create_iterator() override;

protected:
    composite_equipment(const char *name) : equipment(name) { }

private:
    list<equipment *> m_equipment;
};

#endif /* COMPOSITE_EQUIPMENT_H */
