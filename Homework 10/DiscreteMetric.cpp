#include "DiscreteMetric.h"

double DiscreteMetric::distance(const Point& first, const Point& second) {
    return ((first.getX() == second.getX()) && (first.getY() == second.getY()));
}