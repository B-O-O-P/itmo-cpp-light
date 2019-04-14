#ifndef CPLUSPLUS10_IMETRIC_H
#define CPLUSPLUS10_IMETRIC_H


#include "Point.h"

struct MetricI {
    virtual double distance(const Point& first, const Point& second) = 0;
};


#endif //CPLUSPLUS10_IMETRIC_H
