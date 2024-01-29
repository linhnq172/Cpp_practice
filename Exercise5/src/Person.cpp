#include "Person.h"

Person::Person(std::string fullName, int age, std::string IDNumber)
    : fullName(fullName), IDNumber(IDNumber)
{
    if (age >= 18 && age <= 100)
    {
        this->age = age;
    }
    else
    {
        age = 0;
        std::cout << "Invalid input age\n";
    }
}

void Person::displayInformation()
{
    std::cout << "Personal information:"
              << "\nFull name: " << fullName << ", age: " << age
              << "\nID number: " << IDNumber
              << "\n";
}