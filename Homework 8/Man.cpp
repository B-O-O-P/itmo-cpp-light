#include "Man.h"

Man::Man(std::string talk, size_t id) : Unit(id), mTalk(talk) {}

std::string Man::talk() const {
    return mTalk;
}
