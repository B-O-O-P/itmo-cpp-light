#include "Bear.h"

Bear::Bear(int claws, size_t id) : Unit(id), Animal("bear", id), mClaws(claws) {}

int Bear::lengthOfClaws() const {
    return mClaws;
}