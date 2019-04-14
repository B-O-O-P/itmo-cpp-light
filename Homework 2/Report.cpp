#include <iostream>

#include "Report.h"

Report::Report()
{
    for (int i = 0; i < NUMBER_OF_MARKS; ++i) {
        mMarks[i] = 0.0;
    }
    mName = "";
    mAdmissionNumber = "0000";
    mAverage = 0.0;
}

Report::Report(const Report& otherReport)
{
    for (int i = 0; i < NUMBER_OF_MARKS; ++i) {
        mMarks[i] = otherReport.mMarks[i];
    }
    mName = otherReport.mName;
    mAdmissionNumber = otherReport.mAdmissionNumber;
    mAverage = otherReport.mAverage;
}

float Report::mComputeAverage()
{
    float sum = 0.0;
    for (int i = 0; i < NUMBER_OF_MARKS; ++i) {
        sum += mMarks[i];
    };
    sum /= NUMBER_OF_MARKS;
    return sum;
}

void Report::displayInfo() const
{
    std::cout << "\nReport data: \nAdmission Number: " << mAdmissionNumber;
    std::cout << "\nName: " << mName;
    std::cout << "\nMarks: ";
    for (int i = 0; i < NUMBER_OF_MARKS; ++i) {
        std::cout << mMarks[i] << " ";
    }
    std::cout << "\nAverage of marks: " << mAverage;
}

void Report::readInfo()
{
    std::cout << "Enter data: \nAdmission Number: ";
    bool isDataCorrect = false;
    while (!isDataCorrect) {
        std::cin >> mAdmissionNumber;
        if (mAdmissionNumber.length() != SIZE_OF_ADMISSION_NUMBER) {
            std::cout << "Invalid Admission Number! Please, try again.  \nAdmission Number: ";
            isDataCorrect = false;
        } else {
            isDataCorrect = true;
            for (int i = 0; i < SIZE_OF_ADMISSION_NUMBER; ++i) {
                if (!isdigit((int)mAdmissionNumber[i])){
                    isDataCorrect = false;
                }
            }
            if (isDataCorrect) {
                isDataCorrect = true;
            } else {
                std::cout << "Invalid Admission Number! Please, try again.  \nAdmission Number: ";
            }
        }
    }

    std::cout << "Name: ";
    isDataCorrect = false;
    while (!isDataCorrect) {
        std::cin >> mName;
        if (mName.size() > SIZE_OF_NAME) {
            isDataCorrect = false;
            std::cout << "Invalid Name! Please, try again. \nName: ";
        } else {
            isDataCorrect = true;
        }
    }

    std::cout << "Marks: ";
    for (int i = 0; i < NUMBER_OF_MARKS; ++i) {
        std::cin >> mMarks[i];
    }

    mAverage = mComputeAverage();
}

