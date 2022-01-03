#ifndef TEX_COMPOSITOR_H
#define TEX_COMPOSITOR_H

#include "compositor.h"

class tex_compositor : public compositor {
public:
    int compose(float natural[], float stretch[], float shrink[],
                int component_count, int line_width, int breaks[]) override {
        return 0;
    }
    // ...
};

#endif // TEX_COMPOSITOR_H
