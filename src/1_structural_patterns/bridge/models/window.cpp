#include "window.h"
#include "window_imp.h"
#include "window_system_factory.h"

void window::draw_rect(const point &p1, const point &p2) {
    class window_imp *imp = window_imp();
    imp->device_rect(p1.x(), p1.y(), p2.x(), p2.y());
}

window_imp *window::window_imp() {
    if (m_imp == nullptr) {
        m_imp = window_system_factory::instance()->make_window_imp();
    }
    return m_imp;
}
