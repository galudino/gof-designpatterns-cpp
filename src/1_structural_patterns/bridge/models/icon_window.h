#ifndef ICON_WINDOW_H
#define ICON_WINDOW_H

#include "window.h"

class icon_window : public window {
public:
    // ...
    virtual void draw_contents();

private:
    const char *m_bitmap_name;
};

#endif /* ICON_WINDOW_H */
