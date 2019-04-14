#include "Array.h"

template<typename T>
Array<T>::Array(size_t size, const T& value) : mSize(size) {
    mData = (T*) new char[mSize * sizeof(T)];
    for (size_t i = 0; i < mSize; ++i) {
        new(mData + i) T(value);
    }
};

template<typename T>
Array<T>::Array() : mSize(0), mData(0) {};

template<typename T>
Array<T>::Array(const Array<T>& otherArray) {
    mSize = otherArray.size();
    mData = (T*) new char[mSize * sizeof(T)];
    for (size_t i = 0; i < mSize; ++i) {
        new(mData + i) T(otherArray[i]);
    }
}

template<typename T>
Array<T>::~Array() {
    for (size_t i = 0; i != mSize; ++i) {
        mData[i].~T();
    }
    delete[] (char*) mData;
}


template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& otherArray) {
    if (this != &otherArray) {
        for (size_t i = 0; i < mSize; i++) {
            mData[i].~T();
        }
        delete[] (char*) mData;
        mSize = otherArray.size();
        mData = (T*)
                new char[mSize * sizeof(T)];
        for (size_t i = 0; i < mSize; ++i) {
            new(mData + i) T(otherArray[i]);
        }
    }
    return *this;
}


template<typename T>
size_t Array<T>::size() const {
    return mSize;
}


template<typename T>
T& Array<T>::operator[](size_t index) {
    return mData[index];
}

template<typename T>
const T& Array<T>::operator[](size_t index) const {
    return *(mData + index);
}


template<typename T, class Comparator>
T minimum(Array<T>& array, Comparator cmp) {
    size_t res = 0;
    for (size_t i = 1; i < array.size(); ++i) {
        if (cmp(array[i], array[res])) {
            res = i;
        }
    }
    return array[res];
}


template<typename T>
void flatten(const Array<T>& array, std::ostream& cout) {
    for (size_t i = 0; i != array.size(); ++i) {
        cout << array[i] << " ";
    }
}

template<typename T>
void flatten(const Array<Array<T>>& array, std::ostream& cout) {
    for (size_t i = 0; i != array.size(); ++i) {
        flatten(array[i], cout);
    }
}

