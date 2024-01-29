#include "Customer.h"

Customer::Customer(Person *personalInfo, int numberOfDaysRented, const roomType type)
{
    this->personalInfo = personalInfo;
    this->numberOfDaysRented = numberOfDaysRented;
    this->type = type;
}

int Customer::getTotalCost()
{
    return static_cast<int>(type) * numberOfDaysRented;
}

void Customer::displayInformation()
{
    personalInfo->displayInformation();
    std::cout << "Total cost: " << getTotalCost() << "$\n";
}