#include <iostream>
#include "Array.h"
#include "BadClass.h"

bool less(int a, int b) {
    return a < b;
}

struct Greater {
    bool operator()(int a, int b) const {
        return b < a;
    }
};


int main() {
    Array<int> arrayOfIntegers1();


    std::cout << "Testing arrays...\nTesting array of ints from 5 of 6:\n{";
    Array<int> arrayOfIntegers2(5, 6);
    for (size_t i = 0; i < arrayOfIntegers2.size(); ++i) {
        std::cout << arrayOfIntegers2[i] << " ";
    }

    std::cout << "}\n\nTesting new array = first:\n{";
    Array<int> arrayOfIntegers3(arrayOfIntegers2);
    for (size_t i = 0; i < arrayOfIntegers3.size(); ++i) {
        std::cout << arrayOfIntegers3[i] << " ";
    }

    std::cout << "}\n\nTesting arrays of floats and strings:\n{";
    Array<float> arrayOfFloats1(3, 4.5f);
    Array<std::string> arrayOfStrings(2, "HELLO! ");
    for (size_t i = 0; i < arrayOfFloats1.size(); ++i) {
        std::cout << arrayOfFloats1[i] << " ";
    }
    std::cout << "}\n{";
    for (size_t i = 0; i < arrayOfStrings.size(); ++i) {
        std::cout << arrayOfStrings[i] << " ";
    }

    std::cout << "}\n\nTesting arrays of not copyable objects:\n{";
    Array<BadClass> arrayOfBads(2, BadClass(2));
    flatten(arrayOfBads, std::cout);
    std::cout << "}";


    std::cout << "\n\nTesting minimum function:\nArray: {";
    Array<int> ints1(3);
    (ints1)[0] = 10;
    (ints1)[1] = 2;
    (ints1)[2] = 15;
    for (size_t i = 0; i < ints1.size(); ++i) {
        std::cout << ints1[i] << " ";
    }
    std::cout << "}\nMin of Array: ";
    int min = minimum(ints1, less);
    int max = minimum(ints1, Greater());
    std::cout << min << "\nMax of Array: " << max << "\n";


    std::cout << "\nTesting flatten function:\nFlatten output for {10,20}: ";
    Array<int> ints2(2, 0);
    ints2[0] = 10;
    ints2[1] = 20;
    flatten(ints2, std::cout);

    std::cout << "\nFlatten output for Array of ints2s: ";
    Array<Array<int>> arrayOfInts(2, ints2);
    flatten(arrayOfInts, std::cout);

    std::cout << "\nFlatten output for doubles: ";
    Array<double> doubles(10, 0.1);
    flatten(doubles, std::cout);

    return 0;
}