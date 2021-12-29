#include "x_window_imp.h"
#include "coord.h"

void x_window_imp::device_rect(float x0, float y0, float x1, float y1) {
    auto x = coord::round(coord::min(x0, x1));
    auto y = coord::round(coord::min(y0, y1));
    auto w = coord::round(coord::abs(x0 - x1));
    auto h = coord::round(coord::abs(y0 - y1));

    x_draw_rectangle(m_display, m_win_id, m_graphic_context, x, y, w, h);
}

void x_window_imp::x_draw_rectangle(display *dp, 
                                    drawable dr,
                                    graphic_context gc,
                                    int x0, int y0, int x1, int y1) {

}
