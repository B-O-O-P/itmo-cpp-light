#ifndef CPLUSPLUS5_STRING_H
#define CPLUSPLUS5_STRING_H

class String {
public:
    explicit String(const char* string = "");
    String(size_t n, char c);
    String(const String& otherString);
    ~String();

    String& operator=(const String& otherString);

    void swap(String& otherString);
    void append(String& otherString);

    void print() const;
    size_t getSize() const;
    char charAt(size_t index) const;
    char* getCString() const;

private:
    size_t mSize;
    char* mStr;
};

#endif //CPLUSPLUS5_STRING_H
