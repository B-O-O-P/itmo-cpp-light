#ifndef CPLUSPLUS11_BADFROMSTRING_H
#define CPLUSPLUS11_BADFROMSTRING_H


#include <exception>
#include <string>
#include <stdexcept>

class BadFromString : public std::runtime_error {
public:
    explicit BadFromString(const std::string& __arg);
};


#endif //CPLUSPLUS11_BADFROMSTRING_H
