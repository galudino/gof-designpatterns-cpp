#ifndef CARD_H
#define CARD_H

#include "equipment.h"

class card : public equipment {
public:
    card(const char *name) : equipment(name) { }
    
    virtual ~card() { }

    watt power() override {
        return watt(3);
    }
    
    currency net_price() override {
        return currency(11);
    }
    
    currency discount_price() override {
        return currency(6);
    }
};

#endif /* CARD_H */
