#ifndef CPLUSPLUS8_BEAR_H
#define CPLUSPLUS8_BEAR_H


#include "Animal.h"

class Bear : public Animal {
public:
    explicit Bear(int claws, size_t id);

    int lengthOfClaws() const;

private:
    int mClaws;
};

#endif //CPLUSPLUS8_BEAR_H
