#ifndef CPLUSPLUS8_MAN_H
#define CPLUSPLUS8_MAN_H


#include "Unit.h"

class Man : virtual public Unit {
public:
    explicit Man(std::string talk, size_t id);

    std::string talk() const;

private:
    std::string mTalk;
};

#endif //CPLUSPLUS8_MAN_H
