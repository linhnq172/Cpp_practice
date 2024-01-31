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

void Fresher::modifyInfo()
{
    std::cout << "Fresher edit\n";
    Employee::modifyInfo();
    std::string temp;
    char rank;
    std::cout << "Enter graduation time: ";
    std::getline(std::cin, temp);
    if (!temp.empty()) graduationDate = temp;
    std::cout << "Enter graduation rank: ";
    std::cin >> rank;
    if (rank) graduationRank = rank;
    std::cin.ignore(200,'\n');
    std::cout << "Enter university: ";
    std::getline(std::cin, temp);
    if (!temp.empty()) education = temp;
}
