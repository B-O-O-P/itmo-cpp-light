#ifndef CPLUSPLUS10_DISCRETEMETRIC_H
#define CPLUSPLUS10_DISCRETEMETRIC_H


#include "MetricI.h"

struct DiscreteMetric : MetricI{
    virtual double distance(const Point& first, const Point& second);
};


#endif //CPLUSPLUS10_DISCRETEMETRIC_H
