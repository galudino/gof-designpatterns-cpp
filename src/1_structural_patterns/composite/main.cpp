#include <iostream>

#include "bus.h"
#include "cabinet.h"
#include "card.h"
#include "chassis.h"
#include "floppy_disk.h"

int main() {
    cabinet *cab = new cabinet("PC Cabinet");
    chassis *chs = new chassis("PC Chassis");

    cab->add(chs);

    bus *b = new bus("MCA Bus");
    b->add(new card("16Mbs Token Ring"));

    chs->add(b);
    chs->add(new floppy_disk("3.5in Floppy"));

    std::cout << "The net price is " << chs->net_price() << std::endl;
}
