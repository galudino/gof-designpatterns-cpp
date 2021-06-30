#include "bus.h"

bus::bus(const char *name) : composite_equipment(name) {}

bus::~bus() {}

watt bus::power() {
    watt w(1);
    return w;
}

currency bus::net_price() {
    currency c(20);
    return c;
}

currency bus::discount_price() {
    currency c(16);
    return c;
}
