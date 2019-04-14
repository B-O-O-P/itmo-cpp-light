
#include <string>
#include <sstream>
#include <typeinfo>

#include "BadFromString.h"


template<class T>
T fromString(const std::string& str) {
    if (str.empty()){
        throw BadFromString("ERROR: String is empty");
    }

    std::istringstream iss(str);
    T value;

    iss >> std::noskipws >> value;

    if (iss.fail()) {
        throw BadFromString("ERROR: Invalid string \"" + str + "\" for type " + typeid(T).name()+".");
    }

    if (iss.peek() != EOF) {
        throw BadFromString("ERROR: String \"" + str + "\" wasn't completely read(EOF wasn't reached).");
    }

    return value;
}