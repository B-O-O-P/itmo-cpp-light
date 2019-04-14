#ifndef CPLUSPLUS8_UNIT_H
#define CPLUSPLUS8_UNIT_H

#include <iostream>

//            Unit
//         v/       \v
//      Animal      Man
//    /       \      |
//   Bear    Pig     |
//    |       |      |
//    +-------+------+
//            |
//       ManBearPig

class Unit {
public:
    explicit Unit(size_t id);

    size_t getId() const;

private:
    size_t mId;
};


#endif //CPLUSPLUS8_UNIT_H
