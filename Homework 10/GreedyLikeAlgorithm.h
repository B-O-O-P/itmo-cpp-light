#ifndef CPLUSPLUS10_GREEDYLIKEALGORITHM_H
#define CPLUSPLUS10_GREEDYLIKEALGORITHM_H

#include "AlgorithmI.h"

struct GreedyLikeAlgorithm : AlgorithmI {
    virtual Split splittingAlgorithm(MetricI& metric, const VectorPoints& points, int k);
};


#endif //CPLUSPLUS10_GREEDYLIKEALGORITHM_H
