#include <iostream>

#include "BadFromString.h"
#include "fromString.hpp"

template<class T>
void test(T a, std::string& s) {
    try {
        a = fromString<T>(s);
    } catch (BadFromString& e) {
        std::cout << e.what() << "\n";
    }
}

int main() {
    std::string s1("123");
    //int a1 = fromString<int>(s1); // a1 = 123
    int a1;
    test(a1, s1);
    //double b1 = fromString<double>(s1); // b1 = 123.0
    double b1;
    test(b1, s1);
    //std::string c1 = fromString<std::string>(s1); // c1 = "123"
    std::string c1; test(c1,s1);

    std::string s2("12.3");
    //int a2 = fromString<int>(s2); // exception
    int a2; test(a2,s2);
    //double b2 = fromString<double>(s2); // b2 = 12.3
    double b2; test(b2,s2);
    //std::string c2 = fromString<std::string>(s2); // c2 = "12.3"
    std::string c2; test(c2,s2);

    std::string s3("abc");
    //int a3 = fromString<int>(s3); // exception
    int a3; test(a3,s3);
    //double b3 = fromString<double>(s3); // exception
    double b3; test(b3,s3);
    //std::string c3 = fromString<std::string>(s3); // c3 = "abc"
    std::string c3; test(c3,s3);
    return 0;
}