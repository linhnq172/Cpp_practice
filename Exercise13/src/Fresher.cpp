#include "Fresher.h"

void Fresher::showInfo()
{
    std::cout << "Fresher:     ";
    Employee::showInfo();
    std::cout << "             Graduation time: " << graduationDate
              << "\tGraduation rank: " << graduationRank
              << "\tGraduation school: " << education
              <<"\n\n";
}