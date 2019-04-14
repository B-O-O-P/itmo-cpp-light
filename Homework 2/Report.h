#pragma once

#ifndef CPLUSPLUS2_REPORT_H
#define CPLUSPLUS2_REPORT_H

#include <string>

class Report {
public:
    Report();

    Report(const Report& otherReport);

    void readInfo();

    void displayInfo() const;

private:
    static const int NUMBER_OF_MARKS = 5;
    static const int SIZE_OF_ADMISSION_NUMBER = 4;
    static const int SIZE_OF_NAME = 20;

    std::string mAdmissionNumber;
    std::string mName;
    float mMarks[NUMBER_OF_MARKS];
    float mAverage;

    float mComputeAverage();
};

#endif //CPLUSPLUS2_REPORT_H
