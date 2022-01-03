#include "image_proxy.h"
#include "point.h"
#include <string>

image_proxy::image_proxy(const char *filename) {
    m_filename = std::string(filename);
    m_extent = point::zero;
    m_image = nullptr;
}

image_proxy::~image_proxy() {
    delete m_image;
}

class image *image_proxy::image() const {
    if (m_image == nullptr) {
        //m_image = new class image(m_filename.c_str());
    }
    return m_image;
}

point &image_proxy::extent() {
    if (m_extent == point::zero) {
        //m_extent = image()->extent();
        m_extent = image()->extent();
    }
    return m_extent;
}

void image_proxy::draw(const point &at) { image()->draw(at); }

void image_proxy::handle_mouse(event &event) { image()->handle_mouse(event); }

void image_proxy::save(std::ostream &to) { to << m_extent << m_filename; }

void image_proxy::load(std::istream &from) {

}
