#pragma once

#ifndef CPLUSPLUS2_STUDENT_H
#define CPLUSPLUS2_STUDENT_H

const int SIZE_OF_SECOND_NAME = 20;

class Student {
public:
    Student();

    Student(const Student& otherStudent);

    void takeData(const int admissionNumber, const float english, const float math, const float science, const char* secondName);

    void showData();

private:
    int mAdmissionNumber;
    float mEnglish;
    float mMath;
    float mScience;
    float mTotal;
    char mSecondName[SIZE_OF_SECOND_NAME];

    float mCalculateTotal();
};

#endif
