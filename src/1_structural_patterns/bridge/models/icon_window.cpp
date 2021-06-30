#include "icon_window.h"
#include "window_imp.h"

void icon_window::draw_contents() {
    window_imp *imp = get_window_imp();
    if (imp != 0) {
        imp->device_bitmap(m_bitmap_name, 0.0, 0.0);
    }
}
