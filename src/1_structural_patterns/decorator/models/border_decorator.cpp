#include "border_decorator.h"
#include <iostream>

border_decorator::border_decorator(visual_component *component, int borderWidth)
    : decorator(component), m_width(borderWidth) {}

void border_decorator::draw() {
    decorator::draw();
    draw_border(m_width);
}

void border_decorator::draw_border(int width) {
    std::cout << "BorderDecorator::DrawBorder(" << width << ")" << std::endl;
}

void DrawBorder(int borderWidth) {
    std::cout << "Drawing border with width " << borderWidth << "."
              << std::endl;
}
