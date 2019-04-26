#include <bits/stdc++.h>

int main() {
    /*clock_t start = clock();
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);*/
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    unsigned int n = 0, k = 0;
    int a, b, c;
    std::cin >> n >> k;
    std::vector<int> array(n);
    std::cin >> a >> b >> c >> array[0] >> array[1];

    for (int i = 2; i < n; ++i) {
        array[i] = a * array[i - 2] + b * array[i - 1] + c;
    }

    std::nth_element(array.begin(), array.begin() + k - 1, array.end());
    std::cout << array[k - 1];

    /* clock_t stop = clock();
     double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
     printf("\nTime elapsed: %.5f\n", elapsed);*/
    return 0;
}
