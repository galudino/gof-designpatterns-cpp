#ifndef FLOPPY_DISK_H
#define FLOPPY_DISK_H

#include "equipment.h"

class floppy_disk : public equipment {
public:
    floppy_disk(const char *);
    virtual ~floppy_disk();

    virtual watt power();
    virtual currency net_price();
    virtual currency discount_price();
};

#endif /* FLOPPY_DISK_H */
