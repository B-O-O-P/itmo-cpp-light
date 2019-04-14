#ifndef CPLUSPLUS9_ARRAY_H
#define CPLUSPLUS9_ARRAY_H

#include <cstddef>

template<class T>
struct Array {
    explicit Array(size_t size = 0);
    Array(Array const& a);
    Array& operator=(Array const& a);
    ~Array();

    size_t size() const;


    T& operator[](size_t i);
    const T& operator[](size_t i) const;

    Array(Array&& other);

    Array& operator=(Array&& other);

private:
    size_t size_;
    T* data_;
};

#include "Array.hpp"

#endif //CPLUSPLUS9_ARRAY_H
