#include "x_window_imp.h"
#include "coord.h"

void x_window_imp::device_rect(float x0, float y0, float x1, float y1) {
    int x = coord::round(coord::min(x0, x1));
    int y = coord::round(coord::min(y0, y1));
    int w = coord::round(coord::abs(x0 - x1));
    int h = coord::round(coord::abs(y0 - y1));
    x_draw_rectangle(m_display, m_win_id, m_graphic_context, x, y, w, h);
}

void x_window_imp::x_draw_rectangle(display *, drawable, graphic_context, int, int, int, int) {}
