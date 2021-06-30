#include "view.h"
#include <iostream>

void view::draw_on(const application_window *w) const {
    std::cout << "draw_on(" << w << ")" << std::endl;
}
