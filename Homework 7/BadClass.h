#ifndef CPLUSPLUS7_BADCLASS_H
#define CPLUSPLUS7_BADCLASS_H


#include <iostream>

class BadClass {
public:
    explicit BadClass(int value);

    BadClass& operator=(const BadClass& otherBad) = delete;

    int getValue() const;

private:
    int mValue;
};

std::ostream& operator<<(std::ostream& ostream, const BadClass& bad);

#endif //CPLUSPLUS7_BADCLASS_H
