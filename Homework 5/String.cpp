#include <cstring>
#include <iostream>
#include "String.h"

String::String(const char* string) : mSize(strlen(string)), mStr(new char[strlen(mStr) + 1]) {
    strcpy(mStr, string);
}

String::String(size_t n, char c) {
    mSize = n;
    mStr = new char[n + 1];
    for (size_t i = 0; i < n; ++i) {
        mStr[i] = c;
    }
    mStr[n + 1] = '\0';
}

String::String(const String& otherString) : mSize(otherString.mSize) {
    mStr = new char[otherString.mSize + 1];
    strcpy(mStr, otherString.mStr);
}

String::~String() {
    mSize = 0;
    delete[] mStr;
}




void String::swap(String& otherString) {
    size_t const temp1 = mSize;
    mSize = otherString.mSize;
    otherString.mSize = temp1;

    char* const temp2 = mStr;
    mStr = otherString.mStr;
    otherString.mStr = temp2;
}

String& String::operator=(const String& otherString) {
    if (this != &otherString) {
        String(otherString).swap(*this);
    }
    return *this;
}



void String::append(String& otherString) {
    size_t newSize = mSize + otherString.mSize;
    char* newStr = new char[newSize + 1];
    strcpy(newStr, mStr);
    newStr = strcat(newStr, otherString.mStr);
    delete[] mStr;
    mStr = newStr;
    mSize = newSize;
}



void String::print() const {
    for (size_t i = 0; i < mSize; ++i) {
        std::cout << mStr[i];
    }
    std::cout << "\n";
}


size_t String::getSize() const {
    return mSize;
}

char String::charAt(size_t index) const {
    return mStr[index];
}

char* String::getCString() const {
    return mStr;
}

