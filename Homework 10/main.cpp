#include "MaxMetric.h"
#include "EuclidMetric.h"
#include "DiscreteMetric.h"
#include "GreedyLikeAlgorithm.h"
#include "BustAlgorithm.h"
#include "UsingDijkstraAlgorithm.h"

#include <iostream>
#include <map>
#include <fstream>

#define MakeObject(name, type){#name,new name##type()}

int main() {
    std::fstream config(R"(C:\Users\dimka\CLionProjects\cplusplus10\config.txt)");
    std::map<std::string, AlgorithmI*> algorithms = {
            MakeObject(GreedyLike, Algorithm),
            MakeObject(Bust, Algorithm),
            MakeObject(DijkstraLike, Algorithm),
    };;
    std::map<std::string, MetricI*> metrics = {
            MakeObject(Max, Metric),
            MakeObject(Discrete, Metric),
            MakeObject(Euclid, Metric),
    };

    std::vector<Point> points;

    std::cout << "\n\nReading config file...\n";
    std::cout << "Reading number of points and set of points...\n";
    int n;
    config >> n;
    for (int i = 0; i < n; ++i) {
        double cord1, cord2;
        config >> cord1 >> cord2;

        points.emplace_back(cord1, cord2);
    }
    std::cout << "Testing splitting algorithms on " << points.size() << " vertices:\n";
    for (auto& point : points) {
        std::cout << "{" << point.getX() << " " << point.getY() << "} ";
    }

    Split split;
    std::string metricName, algoName;

    config >> algoName;
    config >> metricName;

    AlgorithmI* algorithm;
    MetricI* metric;

    std::cout << "\n\nReading algorithm settings...\n";
    if (algorithms.find(algoName) != algorithms.end() && metrics.find(metricName) != metrics.end()) {

        algorithm = (*algorithms.find(algoName)).second;
        std::cout << "Algorithm: " << (*algorithms.find(algoName)).first << "\n";

        metric = (*metrics.find(metricName)).second;
        std::cout << "Metric: " << (*metrics.find(metricName)).first << "\n";
    } else {
        std::cout << "Invalid settings in config file";
        return 0;
    }

    int k;
    config >> k;
    std::cout << "\nLimit of vertices in one path: " << k << "\n";

    config.close();
    std::cout << "\nResult of splitting in paths:\n";
    split = algorithm->splittingAlgorithm(*metric, points, k);

    for (int i = 0; i < split.size(); ++i) {
        std::cout << "Path number " << i + 1 << ":\n";
        for (auto& j : split[i]) {
            std::cout << "{ " << j.getX() << " " << j.getY() << " }\n";
        }
        std::cout << "\n";
    }
    return 0;
}