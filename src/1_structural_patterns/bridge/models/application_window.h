#ifndef APPLICATION_WINDOW_H
#define APPLICATION_WINDOW_H

#include "window.h"

class application_window : public window {
public:
    // ...
    void draw_contents() override {
        view()->draw_on(this);
    }
};

#endif /* APPLICATION_WINDOW_H */
