#include "pm_window_imp.h"

void pm_window_imp::device_rect(float x0, float y0, float x1, float y1) {
    float left = coord::min(x0, x1);
    float right = coord::max(x0, x1);
    float bottom = coord::min(y0, y1);
    float top = coord::max(y0, y1);

    PPOINTL point[4];

    point[0].x = left;
    point[0].y = top;
    point[1].x = right;
    point[1].y = top;
    point[2].x = right;
    point[2].y = bottom;
    point[3].x = left;
    point[3].y = bottom;

    if ((gpi_begin_path(m_hps, 1L) == false) ||
        (gpi_set_current_position(m_hps, &point[3]) == false) ||
        (gpi_poly_line(m_hps, 4L, point) == GPI_ERROR) ||
        (gpi_end_path(m_hps) == false)) {
        // report error

    } else {
        gpi_stroke_path(m_hps, 1L, 0L);
    }
}
