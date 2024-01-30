#include "Intern.h"

void Intern::showInfo()
{
    std::cout << "Intern:      ";
    Employee::showInfo();
    std::cout << "             Major: " << major
              << "\tSemester: " << semester
              << "\tUniversity: " << universityName
              <<"\n\n";
}