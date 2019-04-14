#ifndef CPLUSPLUS8_ANIMAL_H
#define CPLUSPLUS8_ANIMAL_H


#include "Unit.h"

class Animal : virtual public Unit {
public:
    explicit Animal(std::string name, size_t id);

    std::string getName() const;

private:
    std::string mName;
};

#endif //CPLUSPLUS8_ANIMAL_H
