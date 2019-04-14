
#ifndef CPLUSPLUS8_MANBEARPIG_H
#define CPLUSPLUS8_MANBEARPIG_H


#include "Man.h"
#include "Bear.h"
#include "Pig.h"

class ManBearPig : public Man, public Bear, public Pig {
public:
    explicit ManBearPig(std::string talk, std::string grunt, int claws, size_t id);

};

#endif //CPLUSPLUS8_MANBEARPIG_H
