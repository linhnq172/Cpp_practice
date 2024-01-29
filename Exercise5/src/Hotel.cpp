#include "Hotel.h"

void Hotel::displayInformation()
{
    for (int i = 0; i < totalRoom; i++)
    {
        (*(rooms + i))->displayInformation();
    }
}

void Hotel::addCustomer(Customer *customer)
{
    roomType desired_type = customer->getRoomType();
    // customer->displayInformation();
    for (int i = 0; i < totalRoom; i++)
    {
        roomType available_type = (*(rooms + i))->getRoomType();
        if (available_type == desired_type && (*(rooms + i))->getCustomer() == nullptr)
        {
            std::cout << "\nRoom " << 100 + i << "\n";
            (*(rooms + i))->setCustomer(customer);
            break;
        }
    }
}

void Hotel::deleteCustomer(const std::string &IDnumber)
{
    for (int i = 0; i < totalRoom; i++)
    {
        std::string ID = (*(rooms + i))->getCustomer()->getPersonalInfo()->getIDNumber();
        if (ID == IDnumber)
        {
            std::cout << "Delete customer\n";
            (*(rooms + i))->displayInformation();
            delete *(rooms + i);
        }
    }
}