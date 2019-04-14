#include <iostream>

#include "Student.h"
#include "Report.h"


int main() {
    Report myReport;
    char secondName[20] = "Ivanov";
    std::cout << "Testing...\n";
    myReport.readInfo();
    myReport.displayInfo();
    return 0;
}