#include <bits/stdc++.h>

int main() {
    /*clock_t start = clock();
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);*/
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    unsigned int n = 0, m = 0;

    std::cin >> n;
    std::vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    int x = 0;
    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        std::cin >> x;
        auto first = std::lower_bound(array.begin(), array.end(), x);
        if (first != array.end()) {
            if (array[first - array.begin()] == x) {
                auto last = std::upper_bound(array.begin(), array.end(), x);
                std::cout << first - array.begin() + 1 << " " << last - array.begin() << "\n";
            } else {
                std::cout << "-1 -1\n";
            }
        } else {
            std::cout << "-1 -1\n";
        }


    }
    /*clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
    printf("\nTime elapsed: %.5f\n", elapsed);*/
    return 0;
}
