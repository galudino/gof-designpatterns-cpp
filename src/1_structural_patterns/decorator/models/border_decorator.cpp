#include "border_decorator.h"
#include <iostream>

void border_decorator::draw() {
    decorator::draw();
    draw_border(m_width);
}

void border_decorator::draw_border(int width) {
    std::cout << "border_decorator::draw_border(" << width << ")" << std::endl;
}
