#include <bits/stdc++.h>

int main() {
    /*clock_t start = clock();*/
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;

    std::cin >> n;

    std::vector<int> permutation;

    for (int i = 0; i < n; i++) {
        permutation.push_back(i + 1);
        std::cout << i + 1 << " ";
    }
    std::cout << "\n";

    while (std::next_permutation(permutation.begin(), permutation.end())) {
        for (int v:permutation) {
            std::cout << v << " ";
        }
        std::cout << "\n";
    }


   /* clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
    printf("\nTime elapsed: %.5f\n", elapsed);*/
    return 0;
}
