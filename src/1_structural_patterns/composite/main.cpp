#include <iostream>

#include "bus.h"
#include "cabinet.h"
#include "card.h"
#include "chassis.h"
#include "floppy_disk.h"

int main() {
    auto cab = cabinet("PC Cabinet");
    auto chs = chassis("PC Chassis");
    
    auto crd = card("16Mbs Token Ring");
    chs.add(&crd);
    
    auto disk = floppy_disk("3.5in Floppy");
    chs.add(&disk);
    
    std::cout << "The net price is " << chs.net_price() << std::endl;
}
