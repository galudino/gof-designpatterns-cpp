#ifndef COORD_H
#define COORD_H

#include <cmath>

namespace coord {

constexpr float min(float x, float y) {
    return std::fmin(x, y);
}

constexpr float max(float x, float y) {
    return std::fmax(x, y);
}

constexpr float abs(float x) {
    return std::fabs(x);
}

constexpr int round(float x) {
    return std::floor(x + 0.5f);
}

} // namespace coord

#endif /* COORD_H */
