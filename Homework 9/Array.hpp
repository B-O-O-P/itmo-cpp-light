#include <utility>
#include "Array.h"

template<typename T>
Array<T>::Array(Array<T>&& other) : size_(other.size_), data_(other.data_) {
    other.data_ = nullptr;
    other.size_ = 0;
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T>&& other) {
    if (this != &other) {
        std::swap(data_, other.data_);
        std::swap(size_, other.size_);
    }
    return *this;
}

template<typename T>
Array<T>::Array(size_t size) : size_(size), data_(new T[size]) {}

template<typename T>
Array<T>::Array(Array<T> const& a) : size_(a.size_), data_(new T[a.size_]) {
    for (size_t i = 0; i < size_; ++i) {
        data_[i] = a.data_[i];
    }
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const& a) {
    if (!this != &a) {
        delete[] data_;
        size_ = a.size_;
        data_ = new T[size_];
        for (size_t i = 0; i < size_; ++i) {
            data_[i] = a.data_[i];
        }
    }
    return *this;
}

template<typename T>
Array<T>::~Array() {
    delete[] data_;
}

template<typename T>
size_t Array<T>::size() const {
    return size_;
}

template<typename T>
T& Array<T>::operator[](size_t i) {
    return data_[i];
}


template<typename T>
T const& Array<T>::operator[](size_t i) const {
    return data_[i];
}