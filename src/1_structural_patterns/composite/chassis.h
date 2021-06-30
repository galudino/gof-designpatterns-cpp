#ifndef CHASSIS_H
#define CHASSIS_H

#include "composite_equipment.h"

class chassis : public composite_equipment {
public:
    chassis(const char *);
    virtual ~chassis();

    virtual watt power();
    virtual currency net_price();
    virtual currency discount_price();
};

#endif /* CHASSIS_H */
