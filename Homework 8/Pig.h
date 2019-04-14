#ifndef CPLUSPLUS8_PIG_H
#define CPLUSPLUS8_PIG_H


#include "Animal.h"

class Pig : public Animal {
public:
    explicit Pig(std::string grunt, size_t id);

    std::string grunt() const;

private:
    std::string mGrunt;
};

#endif //CPLUSPLUS8_PIG_H
