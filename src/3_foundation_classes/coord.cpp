#include <cmath>
#include "coord.h"

float coord::min(float x, float y) { return std::fmin(x, y); }

float coord::max(float x, float y) { return std::fmax(x, y); }

float coord::abs(float x) { return std::fabs(x); }

int coord::round(float x) { return std::floor(x + 0.5); }
