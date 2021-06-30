#ifndef CABINET_H
#define CABINET_H

#include "composite_equipment.h"

class cabinet : public composite_equipment {
public:
    cabinet(const char *);
    virtual ~cabinet();

    virtual watt power();
    virtual currency net_price();
    virtual currency discount_price();
};

#endif /* CABINET_H */
