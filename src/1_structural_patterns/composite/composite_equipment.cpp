#include "composite_equipment.h"
#include "equipment.h"
#include "iterator.h"

composite_equipment::composite_equipment(const char *name) : equipment(name) {}

composite_equipment::~composite_equipment() {}

watt composite_equipment::power() {
    iterator<equipment *> *i =
        create_iterator(); // ERRATUM: book had different iterator.
    watt total = 0;

    for (i->first(); !i->done(); i->next()) {
        total += i->current_item()->power();
    }
    delete i;
    return total;
}

currency composite_equipment::net_price() {
    iterator<equipment *> *i = create_iterator();
    currency total = 0;

    for (i->first(); !i->done(); i->next()) {
        total += i->current_item()->net_price();
    }
    delete i;
    return total;
}

currency composite_equipment::discount_price() {
    iterator<equipment *> *i = create_iterator();
    currency total = 0;

    for (i->first(); !i->done(); i->next()) {
        total += i->current_item()->discount_price();
    }
    delete i;
    return total;
}

void composite_equipment::add(equipment *equipment) {
    m_equipment.append(equipment);
}

void composite_equipment::remove(equipment *equipment) {
    m_equipment.remove(equipment);
}

iterator<equipment *> *composite_equipment::create_iterator() {
    return m_equipment.create_iterator();
}
