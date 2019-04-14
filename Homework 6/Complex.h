#ifndef CPLUSPLUS6_COMPLEX_H
#define CPLUSPLUS6_COMPLEX_H

#include <iosfwd>
#include <ostream>

struct Complex {
    Complex();
    Complex(double real, double imaginary);
    Complex(const Complex& otherComplex);

    double getModule() const;
    double getReal() const;
    double getImaginary() const;

    Complex& operator=(const Complex& otherComplex);

    Complex operator+();
    Complex operator-();
    Complex& operator++();
    const Complex operator++(int);
    Complex& operator--();
    const Complex operator--(int);

    Complex& operator+=(const Complex& otherComplex);
    Complex& operator-=(const Complex& otherComplex);
    Complex& operator*=(const Complex& otherComplex);
    Complex& operator/=(const Complex& otherComplex);
    Complex operator%=(const Complex& otherComplex);

    Complex operator~();
    bool operator!();
    Complex operator&=(const Complex& otherComplex);
    Complex operator|=(const Complex& otherComplex);
    Complex operator^=(const Complex& otherComplex);
    Complex& operator<<=(const Complex& otherComplex);
    Complex& operator>>=(const Complex& otherComplex);

    explicit operator bool() const;
    explicit operator int() const;
    explicit operator double() const;

    double operator[](size_t index);
    const double operator[](size_t index) const;
    Complex operator*();
    Complex operator()(double complex);

    double real;
    double imaginary;
};

Complex operator+(Complex first, const Complex& second);
Complex operator-(Complex first, const Complex& second);
Complex operator*(Complex first, const Complex& second);
Complex operator/(Complex first, const Complex& second);
Complex operator%(Complex first, const Complex& second);

Complex operator&(Complex first, const Complex& second);
Complex operator|(Complex first, const Complex& second);
Complex operator^(Complex first, const Complex& second);
Complex operator<<(Complex first, const Complex& second);
Complex operator>>(Complex first, const Complex& second);

std::ostream& operator<<(std::ostream& ostream, const Complex& complex);
std::istream& operator>>(std::istream& istream, Complex& complex);

bool operator==(const Complex& first, const Complex& second);
bool operator!=(const Complex& first, const Complex& second);
bool operator<(const Complex& first, const Complex& second);
bool operator>(const Complex& first, const Complex& second);
bool operator<=(const Complex& first, const Complex& second);
bool operator>=(const Complex& first, const Complex& second);

bool operator&&(const Complex& first, const Complex& second);
bool operator||(const Complex& first, const Complex& second);

Complex operator,(const Complex& first, const Complex& second);

#endif //CPLUSPLUS6_COMPLEX_H
