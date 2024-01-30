#include "Experience.h"

void Experience::showInfo()
{
    std::cout << "Experience:  ";
    Employee::showInfo();
    std::cout << "             YoE: " << expInYear
              << "\tProfessional: " << proSkill
              <<"\n\n";
}