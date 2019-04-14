#include <iostream>
#include "print_values.hpp"
#include "Array.h"
#include "to_pair.hpp"

int main() {
    std::cout << "Testing move constructors...\n";
    Array<int> ints(Array<int>(2));
    ints[0] = 1;
    ints[1] = 2;
    Array<int> ints2(ints);//ints2 = ints
    Array<int> ints3(std::move(ints2));//ints3 = ints2 -> ints3

    for (int i = 0; i < ints.size(); ++i) {
        std::cout << "ints1[" << i << "] = " << ints[i] << "\n";
    }

    std::cout << "\n\n";

    for (int i = 0; i < ints2.size(); ++i) {
        std::cout << "ints2[" << i << "] = " << ints[i] << "\n";
    }

    std::cout << "\n\n";

    for (int i = 0; i < ints3.size(); ++i) {
        std::cout << "ints3[" << i << "] = " << ints[i] << "\n";
    }

    std::cout << "\n\n";


    std::cout << "Testing print values function...\nPrint values of (0,3.5,\"Hello\"):\n";
    print_values(std::cout, 0, 3.5, "Hello");
    std::cout << "Print values of nothing:\n";
    print_values(std::cout);

    auto t = std::make_tuple(0, 3.5, "Hello");
    std::pair<double, char const*> p = to_pair<1, 2>(t);
    std::cout << "\n\nTesting to pair function...\n\"t\" contains: "
              << std::get<0>(t) << ", " << std::get<1>(t) << ", " << std::get<2>(t) << "\n";
    std::cout << "\"p\" contains: "
              << p.first << ", " << p.second;


    return 0;
}