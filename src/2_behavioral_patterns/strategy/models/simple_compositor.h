#ifndef SIMPLE_COMPOSITOR_H
#define SIMPLE_COMPOSITOR_H

#include "compositor.h"

class simple_compositor : public compositor {
public:
    int compose(float natural[], float stretch[], float shrink[],
                int component_count, int line_width, int breaks[]) override {
        return 0;
    }
    // ...
};

#endif // SIMPLE_COMPOSITOR_H
