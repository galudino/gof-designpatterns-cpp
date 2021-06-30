#ifndef BUS_H
#define BUS_H

#include "composite_equipment.h"

class bus : public composite_equipment {
public:
    bus(const char *);
    virtual ~bus();

    virtual watt power();
    virtual currency net_price();
    virtual currency discount_price();
};

#endif /* BUS_H */
