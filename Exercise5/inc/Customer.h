#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_
#include "Person.h"

enum class roomType : int
{
    typeA = 500,
    typeB = 300,
    typeC = 100
};

class Customer
{

public:
    Customer() = delete;
    Customer(Person *personalInfo, int numberOfDaysRented, const roomType type);
    ~Customer()
    {
        if (personalInfo != nullptr)
        {
            delete personalInfo;
            personalInfo = nullptr;
        }
    }

    Person *getPersonalInfo() const
    {
        return personalInfo;
    }

    void setPersonalInfo(Person *personalInfo)
    {
        this->personalInfo = personalInfo;
    }

    int getNumberOfDaysRented() const
    {
        return numberOfDaysRented;
    }

    void setNumberOfDaysRented(const int numberOfDaysRented)
    {
        this->numberOfDaysRented = numberOfDaysRented;
    }

    const roomType &getRoomType() const
    {
        return type;
    }

    void setRoomType(const roomType &type)
    {
        this->type = type;
    }

    int getTotalCost();
    void displayInformation();

private:
    Person *personalInfo{nullptr};
    int numberOfDaysRented;
    roomType type;
};

#endif /* _CUSTOMER_H_ */