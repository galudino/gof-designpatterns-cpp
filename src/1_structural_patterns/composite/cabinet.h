#ifndef CABINET_H
#define CABINET_H

#include "composite_equipment.h"

class cabinet : public composite_equipment {
public:
    cabinet(const char *name) : composite_equipment(name) { }
    
    virtual ~cabinet() { }

    watt power() override {
        return watt(2);
    }
    
    currency net_price() override {
        return currency(30);
    }
    
    currency discount_price() override {
        return currency(26);
    }
};

#endif /* CABINET_H */
