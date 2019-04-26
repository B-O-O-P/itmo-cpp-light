#include <bits/stdc++.h>
#include <ext/rope>


int main() {
    /*clock_t start = clock();
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);*/
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    unsigned int n, m, l, r;
    __gnu_cxx::rope<int> vector;

    std::cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        vector.push_back(i + 1);
    }

    for (int i = 0; i < m; ++i) {
        std::cin >> l >> r;
        l--;
        r--;

        __gnu_cxx::rope<int> segment = vector.substr(l, r - l + 1);
        vector.erase(l, r - l + 1);
        vector.insert(vector.mutable_begin(), segment);
    }
    for (auto it = vector.mutable_begin(); it != vector.mutable_end(); ++it) {
        std::cout << *it << " ";
    }

    /*clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
    printf("\nTime elapsed: %.5f\n", elapsed);*/
    return 0;
}
