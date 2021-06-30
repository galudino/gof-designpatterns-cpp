#include "cabinet.h"

cabinet::cabinet(const char *name) : composite_equipment(name) {}

cabinet::~cabinet() {}

watt cabinet::power() {
    watt w(2);
    return w;
}

currency cabinet::net_price() {
    currency c(30);
    return c;
}

currency cabinet::discount_price() {
    currency c(26);
    return c;
}
