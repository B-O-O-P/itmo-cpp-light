#ifndef CPLUSPLUS4_LIB_RATIONAL_H
#define CPLUSPLUS4_LIB_RATIONAL_H

#include <iostream>

class Rational {
public:
    Rational(int numerator, int denominator);


    Rational &operator+=(const Rational &);

    Rational &operator-=(const Rational &);

    Rational &operator*=(const Rational &);

    Rational &operator/=(const Rational &);


    Rational operator+(const Rational &) const;

    Rational operator-(const Rational &) const;

    Rational operator/(const Rational &) const;

    Rational operator*(const Rational &) const;

    Rational &operator=(const Rational &);


    bool operator<(const Rational &) ;

    bool operator>(const Rational &) ;

    bool operator==(const Rational &) ;


private:

    int mDenominator;
    int mNumerator;
    bool mSign;


    int lcmBetweenTwoDenominator(const Rational &);

    int gcd(int, int);

    int min(int, int);

    int max(int, int);

    int lcm(int ,int );

    void simplify();

    friend std::ostream &operator<<(std::ostream &, const Rational &);
};


#endif //CPLUSPLUS4_LIB_RATIONAL_H
