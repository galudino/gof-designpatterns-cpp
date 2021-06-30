#include "chassis.h"

chassis::chassis(const char *name) : composite_equipment(name) {}

chassis::~chassis() {}

watt chassis::power() {
    watt w(4);
    return w;
}

currency chassis::net_price() {
    currency c(40);
    return c;
}

currency chassis::discount_price() {
    currency c(36);
    return c;
}
