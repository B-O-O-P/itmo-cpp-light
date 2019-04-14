#ifndef CPLUSPLUS10_IALGORITHM_H
#define CPLUSPLUS10_IALGORITHM_H

#include "Point.h"
#include "MetricI.h"

#include <vector>

typedef std::vector<Point> Route;
typedef std::vector<Point> VectorPoints;
typedef std::vector<std::vector<Point>> Split;

struct AlgorithmI {
    virtual Split splittingAlgorithm(MetricI& metric, const VectorPoints& points, int k) = 0;
};


#endif //CPLUSPLUS10_IALGORITHM_H
