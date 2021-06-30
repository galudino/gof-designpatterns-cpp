#include "card.h"
#include "equipment.h"

card::card(const char *name) : equipment(name) {}

card::~card() {}

watt card::power() {
    watt w(3);
    return w;
}

currency card::net_price() {
    currency c(11);
    return c;
}

currency card::discount_price() {
    currency c(6);
    return c;
}
