#include "BadClass.h"

BadClass::BadClass(const int value) : mValue(value) {}


int BadClass::getValue() const {
    return mValue;
}

std::ostream& operator<<(std::ostream& ostream, const BadClass& bad){
    ostream << bad.getValue();
    return ostream;
};