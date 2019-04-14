#ifndef CPLUSPLUS10_MAXMETRIC_H
#define CPLUSPLUS10_MAXMETRIC_H


#include "MetricI.h"

struct MaxMetric : MetricI {
    virtual double distance(const Point& first, const Point& second);
};


#endif //CPLUSPLUS10_MAXMETRIC_H
