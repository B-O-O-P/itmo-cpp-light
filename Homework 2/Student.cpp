#include <iostream>

#include "Student.h"

Student::Student()
{
    for (int i = 0; i < 20; i++) {
        mSecondName[i] = ' ';
    }
    mAdmissionNumber = -1;
    mScience = 0;
    mMath = 0;
    mEnglish = 0;
    mTotal = 0;
}

Student::Student(const Student& otherStudent)
{
    for (int i = 0; i < SIZE_OF_SECOND_NAME; ++i) {
        mSecondName[i] = otherStudent.mSecondName[i];
    }
    mAdmissionNumber = otherStudent.mAdmissionNumber;
    mScience = otherStudent.mScience;
    mMath = otherStudent.mMath;
    mEnglish = otherStudent.mEnglish;
    mTotal = otherStudent.mTotal;
}


float Student::mCalculateTotal()
{
    return mEnglish + mMath + mScience;
}


void Student::takeData(const int admissionNumber, const float english, const float math, const float science, const char* secondName)
{
    mAdmissionNumber = admissionNumber;
    mEnglish = english;
    mMath = math;
    mScience = science;
    for (int i = 0; i < SIZE_OF_SECOND_NAME; ++i) {
        mSecondName[i] = secondName[i];
    }
}

void Student::showData()
{
    std::cout << "\nStudent data: \nAdmission Number: " << mAdmissionNumber;
    std::cout << "\nSecond name: " << mSecondName;
    std::cout << "\nEnglish: " << mEnglish;
    std::cout << "\nMath: " << mMath ;
    std::cout << "\nTotal: " << mTotal;
}
