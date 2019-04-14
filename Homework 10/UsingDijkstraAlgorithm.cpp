#include "UsingDijkstraAlgorithm.h"

#include <algorithm>

typedef std::vector<std::vector<int>> Paths;
typedef std::vector<std::vector<std::pair<int, double>>> Graph;

Split DijkstraLikeAlgorithm::splittingAlgorithm(MetricI& metric, const VectorPoints& points, int k) {
    int INF = 1000000000;
    VectorPoints neededPoints = points;
    Split routes;


    while (!neededPoints.empty()) {
        size_t n = neededPoints.size();
        std::vector<bool> usedPoints(n, false);
        Graph graph(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                double w = metric.distance(neededPoints[i], neededPoints[j]);
                graph[i].push_back({j, w});
            }
        }
        std::vector<double> distance(n, INF);
        std::vector<int> parent(n);
        distance[0] = 0;
        std::vector<bool> used(n);

        for (int i = 0; i < n; ++i) {
            int v = -1;
            for (int j = 0; j < n; j++) {
                if (!used[j] && (v == -1 || distance[j] < distance[v])) {
                    v = j;
                }
            }
            if (distance[v] == INF) {
                break;
            }
            used[v] = true;
            for (size_t j = 0; j < graph[v].size(); ++j) {
                int to = graph[v][j].first;
                double len = graph[v][j].second;
                if (distance[v] + len < distance[to]) {
                    distance[to] = distance[v] + len;
                    parent[to] = v;
                }
            }
        }

        Paths paths(n);
        for (int i = 0; i < n; ++i) {
            for (int v = i; v != 0; v = parent[v]) {
                paths[i].push_back(v);
            }
            paths[i].push_back(0);
            std::reverse(paths[i].begin(), paths[i].end());
        }

        int res = 0;
        for (int i = 1; i < n; i++) {
            if (paths[res].size() < paths[i].size() && paths[i].size() <= k) {
                res = i;
            } else if (paths[res].size() == paths[i].size() && paths[i].size() <= k && distance[res] > distance[i]) {
                res = i;
            }
        }

        Route route;
        for (int i : paths[res]) {
            route.push_back(neededPoints[i]);
            usedPoints[i] = true;
        }
        routes.push_back(route);

        VectorPoints leftPoints;
        for (int i = 0; i < n; ++i) {
            if (!usedPoints[i]) {
                leftPoints.push_back(neededPoints[i]);
            }
        }
        neededPoints = leftPoints;
    }
    return routes;

};

