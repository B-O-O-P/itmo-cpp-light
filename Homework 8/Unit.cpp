#include "Unit.h"

Unit::Unit(size_t id) : mId(id) {}

size_t Unit::getId() const {
    return mId;
}
