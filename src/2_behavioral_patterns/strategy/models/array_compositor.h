#ifndef ARRAY_COMPOSITOR_H
#define ARRAY_COMPOSITOR_H

#include "compositor.h"

class array_compositor : public compositor {
public:
    array_compositor(int interval);

    virtual int compose(float natural[], float stretch[], float shrink[],
                        int component_count, int line_width, int breaks[]);
    // ...
};

#endif // ARRAY_COMPOSITOR_H
