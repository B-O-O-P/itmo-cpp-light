#ifndef CPLUSPLUS10_USINGDIJKSTRAALGORITHM_H
#define CPLUSPLUS10_USINGDIJKSTRAALGORITHM_H

#include "AlgorithmI.h"

struct DijkstraLikeAlgorithm : AlgorithmI {
    virtual Split splittingAlgorithm(MetricI& metric, const VectorPoints& points, int k);
};

#endif //CPLUSPLUS10_USINGDIJKSTRAALGORITHM_H
