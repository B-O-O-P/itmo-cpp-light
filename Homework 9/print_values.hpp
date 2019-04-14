#include <iostream>
#include <typeinfo>


void print_values(std::ostream& ostream) {
    //Nothing to do here
};

template<typename T, typename... Args>
void print_values(std::ostream& ostream, T value, const Args&... args) {
        ostream << typeid(value).name() << ": " << value << "\n";
        print_values(ostream, args...);
};