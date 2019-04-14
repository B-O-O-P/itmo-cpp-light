#include <iostream>

#include "lib_rational.h"

Rational::Rational(int mNumerator, int mDenominator) {
    if (mDenominator != 0) {
        mSign = (mNumerator * mDenominator >= 0);
        this->mNumerator = abs(mNumerator);
        this->mDenominator = abs(mDenominator);
        simplify();

    } else {
        std::cout << "Denominator can not be equal to zero.\n";
    }
}

void Rational::simplify() {
    int gcdVariable = gcd(mNumerator, mDenominator);
    mNumerator = mNumerator / gcdVariable;
    mDenominator = mDenominator / gcdVariable;
}


int Rational::min(int m, int n) {
    return m > n ? n : m;
}

int Rational::max(int m, int n) {
    return m > n ? m : n;
}

int Rational::gcd(int m, int n) {
    return n ? gcd(n, m % n) : m;
}

int Rational::lcm(int m, int n) {
    return m * n / gcd(m, n);
}



int Rational::lcmBetweenTwoDenominator(const Rational &other) {
    return this->mDenominator * other.mDenominator /
           gcd(max(mDenominator, other.mDenominator), min(mDenominator, other.mDenominator));
}


Rational &Rational::operator+=(const Rational &other) {
    int lcm = lcmBetweenTwoDenominator(other);
    mNumerator = (mSign ? 1 : -1) * mNumerator * (lcm / mDenominator) +
                 (other.mSign ? 1 : -1) * other.mNumerator * (lcm / other.mDenominator);
    mSign = mNumerator >= 0;
    mNumerator = abs(mNumerator);
    mDenominator = lcm;
    simplify();
    return *this;
}

Rational &Rational::operator-=(const Rational &other) {
    mSign ^= 1;
    *this += other;
    mSign ^= 1;
    return *this;
}

Rational &Rational::operator*=(const Rational &other) {
    mNumerator *= other.mNumerator;
    mDenominator *= other.mDenominator;
    mSign = (mSign == other.mSign);
    simplify();
    return *this;
}

Rational &Rational::operator/=(const Rational &other) {
    int tmp = mNumerator;
    mNumerator = mDenominator;
    mDenominator = tmp;
    *this *= other;
    tmp = mNumerator;
    mNumerator = mDenominator;
    mDenominator = tmp;
}


Rational & Rational::operator = (const Rational &other) {
    mNumerator = other.mNumerator;
    mDenominator = other.mDenominator;
    return *this;
}

Rational Rational::operator+(const Rational &other) const {
    return Rational(*this) += other;
}

Rational Rational::operator-(const Rational &other) const {
    return Rational(*this) -= other;
}

Rational Rational::operator*(const Rational &other) const {
    return Rational(*this) *= other;
}

Rational Rational::operator/(const Rational &other) const {
    return Rational(*this) /= other;
}

bool Rational::operator < (const Rational &other){
    int gcdVariable = gcd(mDenominator, other.mDenominator);
    int mNumeratorThis = mNumerator * other.mDenominator / gcdVariable;
    int mNumeratorOther = other.mNumerator * mDenominator / gcdVariable;
    return mNumeratorThis < mNumeratorOther;
}

bool Rational::operator > (const Rational &other){
    int gcdVariable = gcd(mDenominator, other.mDenominator);
    int mNumeratorThis = mNumerator * other.mDenominator / gcdVariable;
    int mNumeratorOther = other.mNumerator * mDenominator / gcdVariable;
    return mNumeratorThis > mNumeratorOther;
}

bool Rational::operator == (const Rational &other) {
    return !(*this < other || *this > other);
}

std::ostream &operator<<(std::ostream &out, const Rational &rational) {
    out << rational.mNumerator << "/" << rational.mDenominator ;
    return out;
}

