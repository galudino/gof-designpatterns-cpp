#include "image_proxy.h"
#include "point.h"
#include <cstring>

image_proxy::image_proxy(const char *fileName) {
    m_filename = strdup(fileName);
    m_extent = point::zero;
    m_image = 0;
}

image_proxy::~image_proxy() {}

image *image_proxy::get_image() {
    if (m_image == nullptr) {
        m_image = new image(m_filename);
    }
    return m_image;
}

const point &image_proxy::get_extent() {
    if (m_extent == point::zero) {
        m_extent = get_image()->get_extent();
    }
    return m_extent;
}

void image_proxy::draw(const point &at) { get_image()->draw(at); }

void image_proxy::handle_mouse(event &event) { get_image()->handle_mouse(event); }

void image_proxy::save(std::ostream &to) { to << m_extent << m_filename; }

void image_proxy::load(std::istream &from) {

}
