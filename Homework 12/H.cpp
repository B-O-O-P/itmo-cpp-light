#include <bits/stdc++.h>


int main() {
    /*clock_t start = clock();
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);*/
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char command[20];

    std::unordered_set<int> uSet;


    while (!std::cin.eof()) {
        std::cin.getline(command, 20);

        int x = atoi(&command[7]);

        switch (command[0]) {
            case 'i': {
                uSet.insert(x);
                break;
            }
            case 'e': {
                std::cout << (uSet.find((x)) != uSet.end() ? "true\n" : "false\n");
                break;
            }
            case 'd': {
                uSet.erase(x);
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
