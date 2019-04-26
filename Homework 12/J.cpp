#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


int main() {
    /*clock_t start = clock();
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);*/
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    unsigned int n;
    __gnu_pbds::tree<int, __gnu_pbds::null_type, std::less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> oSet;

    std::cin >> n;
    int command, x, count = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> command;

        switch (command) {
            case 1: {
                std::cin >> x;
                oSet.insert(x);
                count++;
                break;
            }
            case 0: {
                std::cin >> x;
                x = count - x;
                std::cout << *(oSet.find_by_order(x)) << "\n";
                break;
            }
            case -1: {
                std::cin >> x;
                auto it = oSet.find(x);
                if (it != oSet.end()) {
                    oSet.erase(it);
                    count--;
                }
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
