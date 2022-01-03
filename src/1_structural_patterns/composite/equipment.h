#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "iterator.h"
#include <stdexcept>

typedef int currency;
typedef int watt;

class equipment {
public:
    virtual ~equipment() { }

    const char *name() { return m_name; }

    virtual watt power() = 0;
    virtual currency net_price() = 0;
    virtual currency discount_price() = 0;

    virtual void add(equipment *e) { }
    virtual void remove(equipment *e) { }
    
    virtual iterator<equipment *> *create_iterator() {
        // TODO create a more specific exception type.
        // Not all derived types of equipment should implement create_iterator.
        throw std::exception();
    }
protected:
    equipment(const char *name) {
        // TODO change const char * to std::string
        m_name = name;
    }

private:
    const char *m_name = nullptr;
};

#endif /* EQUIPMENT_H */
