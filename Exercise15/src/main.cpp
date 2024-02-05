#include <iostream>
#include "University.h"

int main() {
    std::vector<Student*> students {};
    Department* department = new Department(students, "Telecommunication");
    std::cout << department->getName();
    delete department;

    return 0;
}