#include "command.h"
#include "simple_command.h"
#include "my_class.h"

#include <iostream>

int main() {
    auto receiver = my_class();
    auto c = simple_command<my_class>(&receiver, [] {
        std::cout << "my action" << std::endl;
    });
    
    c.execute();
    
    return 0;
}
