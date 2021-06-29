#ifndef PM_WINDOW_IMP_H
#define PM_WINDOW_IMP_H

#include "WindowImp.h"

struct PPOINTL {
    Coord x;
    Coord y;
};

typedef int HPS;

const int GPI_ERROR = 1;

class PMWindowImp : public WindowImp {
public:
    PMWindowImp() = default;
    virtual void DeviceRect(Coord, Coord, Coord, Coord);

    // remainder of public interface...
private:
    // lots of PM window system-specific state, including:
    bool GpiBeginPath(HPS hps, long i) const { return false; }
    bool GpiSetCurrentPosition(HPS hps, PPOINTL *p) const { return false; }
    int GpiPolyLine(HPS hps, long i, PPOINTL *p) const { return 0; }
    bool GpiEndPath(HPS hps) const { return false; }
    void GpiStrokePath(HPS hps, long, long) {}
    HPS _hps;
};

#endif /* PM_WINDOW_IMP_H */
