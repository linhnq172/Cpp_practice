#include "Experience.h"

void Experience::showInfo()
{
    std::cout << "Experience:  ";
    Employee::showInfo();
    std::cout << "             YoE: " << expInYear
              << "\tProfessional: " << proSkill
              <<"\n\n";
}

void Experience::modifyInfo()
{
    std::cout << "Experience edit\n";
    Employee::modifyInfo();
    std::string temp;
    std::cout << "Enter YoE: ";
    std::cin >> expInYear;
    std::cin.ignore(200,'\n');
    std::cout << "Enter professional skills: ";
    std::getline(std::cin, temp);
    if (!temp.empty()) proSkill = temp;
}