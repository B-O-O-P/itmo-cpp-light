#ifndef CPLUSPLUS10_USINGBUSTALGORITHM_H
#define CPLUSPLUS10_USINGBUSTALGORITHM_H

#include "AlgorithmI.h"

struct BustAlgorithm : AlgorithmI {
    virtual Split splittingAlgorithm(MetricI& metric,
                                     const std::vector<Point>& points, int k);

private:
    std::vector<int> minOfAllPerms(std::vector<int>& a, const VectorPoints& points, MetricI& metric);
};

#endif //CPLUSPLUS10_USINGBUSTALGORITHM_H
