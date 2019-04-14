#include <vector>

#include "lib_rational.h"

void compareByHorners(const std::vector<Rational> &a, const Rational &q1,const Rational &q2) {
    int n = a.size();

    Rational sum1 = a[0], answerQ2 = a[0];
    for (int i = 1; i < n; ++i) {
        sum1 *= q1;
        answerQ2 += a[n - i];

        sum1 *= q2;
        answerQ2 += a[n - i];
    }

    if (sum1 > answerQ2) {
        std::cout << "P(" << q1 << ") is greater than P(" << q2 << ").\n";
    }else if (sum1 < answerQ2) {
        std::cout << "P(" << q2 << ") is greater than P(" << q1 << ").\n";}
    else  {
        std::cout << "P(" << q1 << ") and P(" << q2 << ") are equal.\n";
    }
}

int main() {
    int n;
    int numerator, denominator;

    std::vector<Rational> a;

    std::cout << "Enter amount of coefficients:\n";

    std::cin >> n;

    std::cout << "Enter the numerator and denominator separated by a space for each rational coefficient.\n";

    for (int i = 0; i < n; ++i) {
        std::cout << "a[" << i << "] = ";
        std::cin >> numerator >> denominator;
        Rational r(numerator, denominator);
        a.push_back(r);
    }

    std::cout << "Enter q1 and q2.\n";
    std::cout << "q1 = ";
    std::cin >> numerator >> denominator;
    Rational q1(numerator, denominator);
    std::cout << "q2 = ";
    std::cin >> numerator >> denominator;
    Rational q2(numerator, denominator);

    compareByHorners(a, q1, q2);
    return 0;
}
