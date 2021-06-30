#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "iterator.h"

typedef int currency;
typedef int watt;

class equipment {
public:
    virtual ~equipment();

    const char *name() { return m_name; }

    virtual watt power();
    virtual currency net_price();
    virtual currency discount_price();

    virtual void add(equipment *);
    virtual void remove(equipment *);
    
    virtual iterator<equipment *> *create_iterator();
protected:
    equipment(const char *name);

private:
    const char *m_name;
};

#endif /* EQUIPMENT_H */
