#ifndef ICON_WINDOW_H
#define ICON_WINDOW_H

#include "window.h"

class icon_window : public window {
public:
    // ...
    void draw_contents() override;

private:
    const char *m_bitmap_name = nullptr;
};

#endif /* ICON_WINDOW_H */
