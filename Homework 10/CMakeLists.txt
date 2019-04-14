cmake_minimum_required(VERSION 3.10)
project(cplusplus10)

set(CMAKE_CXX_STANDARD 11)

add_executable(cplusplus10 main.cpp MetricI.h Point.cpp Point.h AlgorithmI.h EuclidMetric.cpp EuclidMetric.h DiscreteMetric.cpp DiscreteMetric.h MaxMetric.cpp MaxMetric.h UsingDijkstraAlgorithm.cpp BustAlgorithm.cpp GreedyLikeAlgorithm.cpp GreedyLikeAlgorithm.h UsingDijkstraAlgorithm.h BustAlgorithm.h)