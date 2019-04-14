#include "MaxMetric.h"

#include <cmath>
#include <algorithm>

double MaxMetric::distance(const Point& first, const Point& second) {
    return std::max(std::abs(first.getX() - second.getX()), std::abs(first.getY() - second.getY()));
}