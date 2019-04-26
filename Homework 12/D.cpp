#include <bits/stdc++.h>

int main() {
    /*clock_t start = clock();
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);*/
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::stack<int> stack;

    char command;
    int m = 0, x = 0;

    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        std::cin >> command;
        switch (command) {
            case '+': {
                std::cin >> x;
                stack.push(x);
                break;
            }
            case '-': {
                std::cout << stack.top() << "\n";
                stack.pop();
                break;
            }
            default:
                break;
        }
    }

    /* clock_t stop = clock();
     double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
     printf("\nTime elapsed: %.5f\n", elapsed);*/
    return 0;
}
