#ifndef X_WINDOW_IMP_H
#define X_WINDOW_IMP_H

#include "coord.h"
#include "window_imp.h"

class display;
class drawable {};
class graphic_context {};

class x_window_imp : public window_imp {
public:
    x_window_imp() = default;

    virtual void device_rect(float, float, float, float);
    // remainder of public interface...
private:
    // lots of X window system-specific state, including:
    void x_draw_rectangle(display *, drawable, graphic_context, int, int, int, int);
    display *m_display;
    drawable m_win_id;                  // window id
    graphic_context m_graphic_context;  // window graphic context
};

#endif /* X_WINDOW_IMP_H */
