#ifndef CHASSIS_H
#define CHASSIS_H

#include "composite_equipment.h"

class chassis : public composite_equipment {
public:
    chassis(const char *name) : composite_equipment(name) { }
    
    virtual ~chassis() { }

    watt power() override {
        return watt(4);
    }
    
    currency net_price() override {
        return currency(40);
    }
    
    currency discount_price() override {
        return currency(36);
    }
};

#endif /* CHASSIS_H */
