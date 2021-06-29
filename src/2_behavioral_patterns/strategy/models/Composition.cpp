#include "Composition.h"
#include "Compositor.h"
#include <iostream>

class Coord;

Composition::Composition(Compositor *compositor) { _compositor = compositor; }

void Composition::Repair() {
    Coord *natural = nullptr;
    Coord *stretchability = nullptr;
    Coord *shrinkability = nullptr;
    int componentCount = 0;
    int *breaks = nullptr;

    // prepare the arrays with the desired component sizes
    // ...

    // determine where the breaks are:
    int breakCount = _compositor->Compose(natural,
                                      stretchability,
                                      shrinkability,
                                      componentCount,
                                      _lineWidth,
                                      breaks);
    
    std::cout << breakCount << std::endl;
    // lay out components according to breaks
    // ...
}
