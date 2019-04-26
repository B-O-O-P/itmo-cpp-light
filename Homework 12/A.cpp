#include <bits/stdc++.h>
#include <set>

/*
Реализуйте сбалансированное двоичное дерево поиска.

Формат входных данных
Входной файл содержит описание операций с деревом, их количество не превышает 100000. В каждой строке находится одна из следующих операций:

insert x — добавить в дерево ключ x. Если ключ x в дереве уже есть, то ничего делать не надо.
delete x — удалить из дерева ключ x. Если ключа x в дереве нет, то ничего делать не надо.
exists x — если ключ x есть в дереве, выведите «true», иначе «false»
next x — выведите минимальный элемент в дереве, строго больший x, или «none», если такого нет.
prev x — выведите максимальный элемент в дереве, строго меньший x, или «none», если такого нет. Все числа во входном файле целые и по модулю не превышают 10^9.
Формат выходных данных
Выведите последовательно результат выполнения всех операций exists, next, prev. Следуйте формату выходного файла из примера.
*/

int main() {
    /*clock_t start = clock();
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);*/
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::set<int> bbst;

    std::string command;
    int x;

    while (std::cin >> command) {

        switch (command[0]) {
            case 'i': {
                std::cin >> x;
                bbst.insert(x);
                break;
            }
            case 'e': {
                std::cin >> x;
                std::cout << ((bbst.count(x)) ? "true\n" : "false\n");
                break;
            }
            case 'd': {
                std::cin >> x;
                auto del = bbst.find(x);
                if (del != bbst.end()) {
                    bbst.erase(del);
                }
                break;
            }
            case 'n': {
                std::cin >> x;
                auto next = bbst.upper_bound(x);
                if (next != bbst.end()) {
                    std::cout << *next << "\n";
                } else {
                    std::cout << "none\n";
                }
                break;
            }
            case 'p': {
                std::cin >> x;
                auto prev = bbst.lower_bound(x);
                if (prev != bbst.begin()) {
                    --prev;
                    std::cout << *prev << "\n";
                } else {
                    std::cout << "none\n";
                }
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
