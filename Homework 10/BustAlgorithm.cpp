#include <cstddef>
#include <algorithm>
#include <iostream>
#include "BustAlgorithm.h"

std::vector<int> BustAlgorithm::minOfAllPerms(std::vector<int>& a, const VectorPoints& points, MetricI& metric) {
    std::vector<int> res, tmp;
    res = a;
    tmp = a;
    double minSum = 0.0;
    for (int i = 1; i < res.size(); ++i) {
        minSum += metric.distance(points[tmp[i - 1]], points[tmp[i]]);
    }

    while (std::next_permutation(tmp.begin(), tmp.end())) {
        double sum = 0.0;
        for (int i = 1; i < a.size(); ++i) {
            sum += metric.distance(points[tmp[i - 1]], points[tmp[i]]);
        }
        if (sum < minSum) {
            minSum = sum;
            res = tmp;
        }
    }

    return res;
}

Split BustAlgorithm::splittingAlgorithm(MetricI& metric, const VectorPoints& points, int k) {
    Split routes;
    size_t n = points.size();
    std::vector<bool> usedPoints(n, false);
    std::vector<int> numbers;
    for (int i = 0; i < n; ++i){
        numbers.push_back(i);
    }

    while (numbers.size() >= k) {
        double sum = 0.0;
        for (int i = 1; i < k; ++i) {
            sum += metric.distance(points[numbers[i - 1]], points[numbers[i]]);
        }

        std::vector<int> routeNumbers(numbers.begin(),numbers.begin()+k);

        while (std::next_permutation(numbers.begin(), numbers.end())) {
            std::vector<int> perm;
            for (int i = 0; i < k; ++i) {
                perm.push_back(numbers[i]);
            }

            perm = minOfAllPerms(perm, points, metric);
            double minSum = 0.0;
            for (int i = 1; i < k; ++i) {
                minSum += metric.distance(points[perm[i - 1]], points[perm[i]]);
            }
            if (minSum < sum) {
                sum = minSum;
                routeNumbers = perm;
            }
        }

        Route route;
        for (int routeNumber : routeNumbers) {
            usedPoints[routeNumber] = true;
            route.push_back(points[routeNumber]);
        }

        routes.push_back(route);
        std::vector<int> newNumbers;
        for (int i = 0; i < n; i++) {
            if (!usedPoints[i])
                newNumbers.push_back(i);
        }
        numbers = newNumbers;
    }

    Route route;
    for (int number : numbers) {
        route.push_back(points[number]);
    }

    if (!route.empty()) {
        routes.push_back(route);
    }
    return routes;
}
