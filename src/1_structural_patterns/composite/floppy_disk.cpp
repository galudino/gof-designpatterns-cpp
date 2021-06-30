#include "floppy_disk.h"

floppy_disk::floppy_disk(const char *name) : equipment(name) {}

floppy_disk::~floppy_disk() {}

watt floppy_disk::power() {
    watt w(10);
    return w;
}

currency floppy_disk::net_price() {
    currency c(10);
    return c;
}

currency floppy_disk::discount_price() {
    currency c(5);
    return c;
}
