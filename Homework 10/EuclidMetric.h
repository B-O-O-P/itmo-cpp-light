#ifndef CPLUSPLUS10_EUCLIDMETRIC_H
#define CPLUSPLUS10_EUCLIDMETRIC_H


#include "MetricI.h"

struct EuclidMetric : MetricI {
    virtual double distance(const Point& first, const Point& second);
};


#endif //CPLUSPLUS10_EUCLIDMETRIC_H
