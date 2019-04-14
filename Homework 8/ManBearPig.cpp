#include "ManBearPig.h"

ManBearPig::ManBearPig(std::string talk, std::string grunt, int claws, size_t id)
        : Unit(id),
          Man(talk, id),
          Bear(claws, id),
          Pig(grunt, id) {
}