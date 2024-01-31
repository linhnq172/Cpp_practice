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

void Intern::modifyInfo()
{
    std::cout << "Intern edit\n";
    Employee::modifyInfo();
    std::string temp;
    std::cout << "Enter major: ";
    std::getline(std::cin, temp);
    if (!temp.empty()) major = temp;
    std::cout << "Enter semester: ";
    std::cin >> semester;
    std::cin.ignore(200,'\n');
    std::cout << "Enter university: ";
    std::getline(std::cin, temp);
    if (!temp.empty()) universityName = temp;
}
