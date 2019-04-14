#include <cmath>
#include <iostream>
#include "Complex.h"

Complex::Complex() : Complex(0, 0) {}

Complex::Complex(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {};

Complex::Complex(const Complex& otherComplex) {
    real = otherComplex.real;
    imaginary = otherComplex.imaginary;
}



double Complex::getModule() const {
    return sqrt(real * real + imaginary * imaginary);
}

double Complex::getReal() const {
    return real;
}

double Complex::getImaginary() const {
    return imaginary;
}



Complex& Complex::operator=(Complex const& otherComplex) {
    if (this != &otherComplex) {
        real = otherComplex.real;
        imaginary = otherComplex.imaginary;
    }
    return *this;
}




Complex Complex::operator+() {
    return *this;
}

Complex Complex::operator-() {
    return Complex(real * -1, imaginary * -1);
}

Complex& Complex::operator++() {
    real++;
    imaginary++;
    return *this;
}

const Complex Complex::operator++(int) {
    Complex oldValue(*this);
    operator++();
    return oldValue;
}

Complex& Complex::operator--() {
    real--;
    imaginary--;
    return *this;
}

const Complex Complex::operator--(int) {
    Complex oldValue(*this);
    operator--();
    return oldValue;
}



Complex& Complex::operator+=(const Complex& otherComplex) {
    real += otherComplex.real;
    imaginary += otherComplex.imaginary;
    return *this;
}

Complex operator+(Complex first, const Complex& second) {
    return first += second;
}

Complex& Complex::operator-=(const Complex& otherComplex) {
    real -= otherComplex.real;
    imaginary -= otherComplex.imaginary;
    return *this;
}

Complex operator-(Complex first, const Complex& second) {
    return first -= second;
}

Complex& Complex::operator*=(const Complex& otherComplex) {
    double tmpReal = real;
    real = (tmpReal * otherComplex.real - imaginary * otherComplex.imaginary);
    imaginary = (tmpReal * otherComplex.imaginary + imaginary * otherComplex.real);
    return *this;
}

Complex operator*(Complex first, const Complex& second) {
    return first *= second;
}

Complex& Complex::operator/=(const Complex& otherComplex) {
    double tmpReal = real;
    real = (tmpReal * otherComplex.real + imaginary * otherComplex.imaginary) /
           (otherComplex.real * otherComplex.real + otherComplex.imaginary * otherComplex.imaginary);;
    imaginary = (imaginary * otherComplex.real - otherComplex.imaginary * tmpReal) /
                (otherComplex.real * otherComplex.real + otherComplex.imaginary * otherComplex.imaginary);
    return *this;
}

Complex operator/(Complex first, const Complex& second) {
    return first /= second;
}

Complex Complex::operator%=(const Complex& otherComplex) {
    double sqrt = otherComplex.getModule();
    real /= sqrt;
    imaginary /= sqrt;
    return *this;
}

Complex operator%(Complex first, const Complex& second) {
    return first %= second;
}



Complex Complex::operator~() {
    return Complex(real, -imaginary);
}

Complex Complex::operator&=(const Complex& otherComplex) {
    *this -= otherComplex;
    double length = getModule();
    length *= length;
    real /= length;
    imaginary /= length;
    return *this;
}

Complex operator&(Complex first, const Complex& second) {
    return first &= second;
}

Complex Complex::operator|=(const Complex& otherComplex) {
    *this += otherComplex;
    double length = getModule();
    length *= length;
    real /= length;
    imaginary /= length;
    return *this;
}

Complex operator|(Complex first, const Complex& second) {
    return first |= second;
}

Complex Complex::operator^=(const Complex& otherComplex) {
    Complex tmp = ~Complex(otherComplex);
    *this -= tmp;
    double length = getModule();
    length *= length;
    real /= length;
    imaginary /= length;
    return *this;
}

Complex operator^(Complex first, const Complex& second) {
    return first ^= second;
}

Complex& Complex::operator>>=(const Complex& otherComplex) {
    real /= (1 << (static_cast<int>(otherComplex.real) + 1));
    imaginary /= (1 << (static_cast<int>(otherComplex.imaginary) + 1));
    return *this;
}

Complex operator>>(Complex first, const Complex& second) {
    return first >>= second;
}

Complex& Complex::operator<<=(const Complex& otherComplex) {
    real *= (1 << (static_cast<int>(otherComplex.real) + 1));
    imaginary *= (1 << (static_cast<int>(otherComplex.imaginary) + 1));
    return *this;
}

Complex operator<<(Complex first, const Complex& second) {
    return first <<= second;
}



std::ostream& operator<<(std::ostream& ostream, const Complex& complex) {
    if (complex.real != 0) {
        if (complex.imaginary > 0) {
            ostream << complex.real << '+' << complex.imaginary << 'i';
        } else if (complex.imaginary < 0) {
            ostream << complex.real << complex.imaginary << 'i';
        } else {
            ostream << complex.real;
        }
    } else {
        if (complex.imaginary != 0) {
            ostream << complex.imaginary << 'i';
        } else {
            ostream << 0;
        }
    }
    return ostream;
}

std::istream& operator>>(std::istream& istream, Complex& complex) {
    char plus = ' ';
    char i = ' ';
    istream >> complex.real >> plus >> complex.imaginary >> i;
    return istream;
}



bool operator==(const Complex& first, const Complex& second) {
    return (first.getReal() == second.getReal()) && (first.getImaginary() == second.getImaginary());
}

bool operator!=(const Complex& first, const Complex& second) {
    return !(first == second);
}

bool operator<(const Complex& first, const Complex& second) {
    return (first.getReal() < second.getReal()) && (first.getImaginary() < second.getImaginary());
}

bool operator>(const Complex& first, const Complex& second) {
    return second < first;
}

bool operator<=(const Complex& first, const Complex& second) {
    return !(first > second);
}

bool operator>=(const Complex& first, const Complex& second) {
    return !(first < second);
}



Complex::operator bool() const {
    return *this != Complex(0, 0);
}

Complex::operator double() const {
    return real;
}

Complex::operator int() const {
    return int(real);
}



bool Complex::operator!() {
    return !bool(*this);
}

bool operator&&(const Complex& first, const Complex& second) {
    return bool(first) && bool(second);
}

bool operator||(const Complex& first, const Complex& second) {
    return bool(first) && bool(second);
}



double Complex::operator[](size_t index) {
    try {
        if (index < 2) {
            if (index == 0)
                return real;
            if (index == 1)
                return imaginary;
            else throw "ERROR: Index out of range";
        } else throw "ERROR: Index out of range";
    } catch (char* s) {
        std::cerr << s << std::endl;
    }
    return -1;
}

const double Complex::operator[](size_t index) const {
    try {
        if (index < 2) {
            if (index == 0)
                return real;
            if (index == 1)
                return imaginary;
            else throw "ERROR: Index out of range";
        } else throw "ERROR: Index out of range";
    } catch (char* s) {
        std::cerr << s << std::endl;
    }
    return -1;
}

Complex Complex::operator*() {
    return Complex(log(getModule()), atan(imaginary / real));
}

Complex operator,(const Complex& first, const Complex& second) {
    return Complex(first.real * second.real, first.imaginary * second.imaginary);
}

Complex Complex::operator()(double complex) {
    return Complex(real * complex, imaginary * complex);
}

