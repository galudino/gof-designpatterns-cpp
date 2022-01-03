#ifndef FLOPPY_DISK_H
#define FLOPPY_DISK_H

#include "equipment.h"

class floppy_disk : public equipment {
public:
    floppy_disk(const char *name) : equipment(name) { }
    virtual ~floppy_disk() { }

    watt power() override {
        return watt(10);
    }
    
    currency net_price() override {
        return currency(10);
    }
    
    currency discount_price() override {
        return currency(5);
    }
};

#endif /* FLOPPY_DISK_H */
