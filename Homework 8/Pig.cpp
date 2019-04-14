#include "Pig.h"

Pig::Pig(std::string grunt, size_t id) : Unit(id), Animal("pig", id),mGrunt(grunt) {}

std::string Pig::grunt() const {
    return mGrunt;
}