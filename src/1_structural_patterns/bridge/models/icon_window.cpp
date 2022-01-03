#include "icon_window.h"
#include "window_imp.h"

void icon_window::draw_contents() {
    class window_imp *imp = window_imp();
    if (imp != nullptr) {
        imp->device_bitmap(m_bitmap_name, 0.0, 0.0);
    }
}
