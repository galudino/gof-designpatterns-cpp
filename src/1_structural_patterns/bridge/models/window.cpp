#include "window.h"
#include "window_imp.h"
#include "window_system_factory.h"

void window::draw_rect(const point &p1, const point &p2) {
    window_imp *imp = get_window_imp();
    imp->device_rect(p1.x(), p1.y(), p2.x(), p2.y());
}

window_imp *window::get_window_imp() {
    if (m_imp == 0) {
        m_imp = window_system_factory::instance()->make_window_imp();
    }
    return m_imp;
}
