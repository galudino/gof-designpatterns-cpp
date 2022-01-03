#ifndef PM_WINDOW_IMP_H
#define PM_WINDOW_IMP_H

#include "window_imp.h"

struct PPOINTL {
    float x;
    float y;
};

using HPS = int;

const int GPI_ERROR = 1;

class pm_window_imp : public window_imp {
public:
    pm_window_imp() = default;
    void device_rect(float x0, float y0, float x1, float y1) override;

    // remainder of public interface...
private:
    // lots of PM window system-specific state, including:
    bool gpi_begin_path(HPS hps, long i) const { return false; }
    bool gpi_end_path(HPS hps) const { return false; }

    bool gpi_set_current_position(HPS hps, PPOINTL *p) const { return false; }

    int gpi_poly_line(HPS hps, long i, PPOINTL *p) const { return 0; }

    void gpi_stroke_path(HPS hps, long x, long y) { }

    HPS m_hps {};
};

#endif /* PM_WINDOW_IMP_H */
