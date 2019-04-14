#include "lib_rational.h"

int main() {
    Rational r(4,10);
    Rational t(3,9);

    t = t / r;

    return (EXIT_SUCCESS);
}
