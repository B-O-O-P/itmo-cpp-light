#include <bits/stdc++.h>

int main() {
    /* clock_t start = clock();
     freopen("test.in", "r", stdin);
     freopen("test.out", "w", stdout);*/
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);


    std::string command, x, y;
    std::unordered_map<std::string, std::string> uMap;


    while (std::cin >> command) {

        switch (command[0]) {
            case 'p': {
                std::cin >> x >> y;
                uMap[x] = y;
                break;
            }
            case 'g': {
                std::cin >> x;
                auto found = uMap.find(x);
                std::cout << ((found != uMap.end()) ? uMap[x] : "none") << "\n";
                break;
            }
            case 'd': {
                std::cin >> x;
                uMap.erase(x);
                break;
            }
            default:
                break;
        }
    }
    /*clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
    printf("\nTime elapsed: %.5f\n", elapsed);*/
    return 0;
}
