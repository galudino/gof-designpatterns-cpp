#include "composition.h"
#include "compositor.h"
#include <iostream>

void composition::repair() {
    float *natural = nullptr;
    float *stretchability = nullptr;
    float *shrinkability = nullptr;
    
    auto component_count = 0;
    int *breaks = nullptr;

    // prepare the arrays with the desired component sizes
    // ...

    // determine where the breaks are:
    auto break_count = m_compositor->compose(natural,
                                      stretchability,
                                      shrinkability,
                                      component_count,
                                      m_line_width,
                                      breaks);
    
    std::cout << break_count << std::endl;
    // lay out components according to breaks
    // ...
}
