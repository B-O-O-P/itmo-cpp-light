#ifndef CPLUSPLUS7_ARRAY_H
#define CPLUSPLUS7_ARRAY_H

#include <cstddef>

template<typename T>
class Array {
public:
    explicit Array(size_t size, const T& value = T());
    Array();
    Array(const Array<T>& otherArray);
    ~Array();

    Array& operator=(const Array<T>& otherArray);

    size_t size() const;

    T& operator[](size_t index);
    const T& operator[](size_t index) const;

private:
    size_t mSize;
    T* mData;
};

template<typename T, class Comparator>
T minimum(Array<T>& array, Comparator cmp);

template<typename T>
void flatten(const Array<T>& array, std::ostream& cout);

template<typename T>
void flatten(const Array<Array<T>>& array, std::ostream& cout);

#include "Array.hpp"

#endif //CPLUSPLUS7_ARRAY_H
