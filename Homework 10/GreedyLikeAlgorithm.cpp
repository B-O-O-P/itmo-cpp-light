#include "GreedyLikeAlgorithm.h"

#include <cstddef>
#include <climits>
#include <set>
#include <iostream>

Split GreedyLikeAlgorithm::splittingAlgorithm(MetricI& metric, const VectorPoints& points, int k) {
    std::set<int> numbers;
    Split routes;
    for (int i = 0; i < points.size(); ++i) {
        numbers.insert(i);
    }
    int start = 0;
    int finish = 0;

    while (!numbers.empty()) {
        if (numbers.size() == 1) {
            Route route;
            route.push_back(points[*numbers.begin()]);
            numbers.erase(*numbers.begin());
            routes.push_back(route);
        } else {
            double minDistance = INT_MAX;
            for (int i : numbers) {
                for (int j : numbers) {
                    if (i != j) {
                        if (minDistance > metric.distance(points[i], points[j])) {
                            minDistance = metric.distance(points[i], points[j]);
                            start = i;
                            finish = j;
                        }
                    }
                }
            }
            std::vector<int> routeNumbers;
            routeNumbers.push_back(start);
            routeNumbers.push_back(finish);

            while (routeNumbers.size() < k && !numbers.empty()) {
                numbers.erase(start);
                numbers.erase(finish);
                double minNeighbour = INT_MAX;
                int minNeighbourNumber = start;

                for (int i : numbers) {
                    if (minNeighbour > metric.distance(points[start], points[i])) {
                        minNeighbourNumber = i;
                        minNeighbour = metric.distance(points[start], points[i]);
                    };
                }

                bool changedFinish = false;
                for (int i : numbers) {
                    if (minNeighbour > metric.distance(points[finish], points[i])) {
                        minNeighbourNumber = i;
                        changedFinish = true;
                        minNeighbour = metric.distance(points[finish], points[i]);
                    };
                }

                if (changedFinish) {
                    finish = minNeighbourNumber;
                    routeNumbers.push_back(finish);
                } else {
                    start = minNeighbourNumber;
                    routeNumbers.insert(routeNumbers.begin(), start);
                }
            }

            numbers.erase(start);
            numbers.erase(finish);
            Route route;
            for (int routeNumber : routeNumbers) {
                route.push_back(points[routeNumber]);
            }
            routes.push_back(route);
        }
    }
    return routes;
}