#include "EuclidMetric.h"

#include <cmath>

double EuclidMetric::distance(const Point& first, const Point& second) {
    return std::sqrt((first.getX() - second.getX()) * (first.getX() - second.getX())
                     + (first.getY() - second.getY()) * (first.getY() - second.getY()));
}
