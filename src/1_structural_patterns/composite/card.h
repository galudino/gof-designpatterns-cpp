#ifndef CARD_H
#define CARD_H

#include "equipment.h"

class card : public equipment {
public:
    card(const char *);
    virtual ~card();

    virtual watt power();
    virtual currency net_price();
    virtual currency discount_price();
};

#endif /* CARD_H */
