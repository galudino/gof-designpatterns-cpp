#include "image.h"
#include <cstring>
#include <iostream>
#include <fstream>

class event;
class point;

image::image(const char *file) {
    std::strcpy(m_filename, file);
}

image::~image() { delete m_filename; }

void image::draw(const point &at) {

}

void image::handle_mouse(event &event) {

}

const point &image::get_extent() { return m_extent; }

void image::load(std::istream &from) {

}

void image::save(std::ostream &to) {

}

std::ostream &operator<<(std::ostream &os, const image &i) {
    os << i.m_extent << " " << i.m_filename;
    return os;
}

std::istream &operator>>(std::istream &is, image &i) {
    is >> i.m_extent;

    const auto str = std::string(i.m_filename);
    for (auto ch : str) {
        is >> ch;
    }

    return is;
}
