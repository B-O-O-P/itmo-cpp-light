#include <bits/stdc++.h>

bool cmp(std::pair<std::pair<int, int>, int> a, std::pair<std::pair<int, int>, int> b) {
    if (a.first.first != b.first.first) {
        return a.first.first > b.first.first;
    } else {
        if (a.first.second != b.first.second) {
            return a.first.second < b.first.second;
        } else {
            return a.second < b.second;
        }
    }
}

int main() {
    /* clock_t start = clock();
     freopen("test.in", "r", stdin);
     freopen("test.out", "w", stdout);*/
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    unsigned int n = 0;

    std::cin >> n;
    std::vector<std::pair<std::pair<int, int>, int>> commands(n);//problems,penalty,number

    for (int i = 0; i < n; ++i) {
        int problems, penalty;
        std::cin >> problems >> penalty;

        commands[i] = {{problems, penalty}, i + 1};
    }

    std::sort(commands.begin(), commands.end(), cmp);

    for (std::pair<std::pair<int, int>, int> p : commands) {
        std::cout << p.second << " ";
    }

    /*clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
    printf("\nTime elapsed: %.5f\n", elapsed);*/
    return 0;
}
