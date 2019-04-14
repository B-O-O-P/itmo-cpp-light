#include "Animal.h"

Animal::Animal(std::string name, size_t id) : Unit(id), mName(name) {}

std::string Animal::getName() const {
    return mName;
}