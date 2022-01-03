#ifndef BUS_H
#define BUS_H

#include "composite_equipment.h"

class bus : public composite_equipment {
public:
    bus(const char *name) : composite_equipment(name) { }
    
    virtual ~bus() { }

    virtual watt power() {
        return watt(1);
    }
    
    virtual currency net_price() {
        return currency(20);
    }
    
    virtual currency discount_price() {
        return currency(16);
    }
};

#endif /* BUS_H */
