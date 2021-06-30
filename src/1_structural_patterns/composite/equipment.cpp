#include "equipment.h"

equipment::equipment(const char *name) { m_name = name; }

equipment::~equipment() {}

watt equipment::power() {
    // TODO: throw exception because this should never called?
    return 0;
}

currency equipment::net_price() {
    // TODO: throw exception because this should never called?
    return 0;
}

currency equipment::discount_price() {
    // TODO: throw exception because this should never called?
    return 0;
}

void equipment::add(equipment *) {
    // TODO: throw exception, because this should never be called!
}

void equipment::remove(equipment *) {
    // TODO: throw exception, because this should never be called!
}

iterator<equipment *> *equipment::create_iterator() {
    // TODO: return a NullIterator
    return 0;
}
