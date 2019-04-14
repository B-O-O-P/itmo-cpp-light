#include <iostream>
#include "String.h"

int main() {
    String s1("Hello,");
    String s2(" world!");

    std::cout << "\tTEST ONE\n\t  S1+S2\nBefore append:\n";
    std::cout << "S1: ";
    s1.print();
    std::cout << "S2: ";
    s2.print();

    s1.append(s2);
    std::cout << "After:\n";
    std::cout << "S1: ";
    s1.print();
    std::cout << "S2: ";
    s2.print();

    String s("Hello");

    std::cout << "\n\n\tTEST TWO\n\t  S+S\nBefore append:\n";
    std::cout << "S: ";
    s.print();

    s.append(s);
    std::cout << "After:\n";
    std::cout << "S: ";
    s.print();

    std::cout << "\n\n\tTEST THREE\n\t  S2=S1\nBefore \"=\":\n";
    std::cout << "S1: ";
    s1.print();
    std::cout << "S2: ";
    s2.print();

    s2 = s1;
    std::cout << "After:\n";
    std::cout << "S1: ";
    s1.print();
    std::cout << "S2: ";
    s2.print();

    std::cout << "\n\n\tTEST FOUR\n\t  S(n,'A')\nS3 = String(10,'A')\n";
    String s3 = String(10, 'A');
    std::cout << "S3: ";
    s3.print();

    return 0;
}