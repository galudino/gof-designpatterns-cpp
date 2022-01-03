#ifndef ARRAY_COMPOSITOR_H
#define ARRAY_COMPOSITOR_H

#include "compositor.h"

class array_compositor : public compositor {
public:
    array_compositor(int interval) { }

    int compose(float natural[], float stretch[], float shrink[],
                int component_count, int line_width, int breaks[]) override {
        return 0;
    }
    // ...
};

#endif // ARRAY_COMPOSITOR_H
