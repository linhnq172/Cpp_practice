#include "Hotel.h"

void Hotel::displayInformation()
{
    for (auto room : rooms)
    {
        room->displayInformation();
    }
}

void Hotel::addCustomer(Customer *customer)
{
    roomType desired_type = customer->getRoomType();
    for (auto room : rooms)
    {
        roomType available_type = room->getRoomType();
        if (available_type == desired_type && room->getCustomer() == nullptr)
        {
            std::cout << "\nRoom " << room->getRoomID() << " is selected\n";
            room->setCustomer(customer);
            break;
        }
    }
}

void Hotel::deleteCustomer(const std::string &IDnumber)
{
    for (auto room : rooms)
    {
        Customer *customer = room->getCustomer();
        if (customer != nullptr && customer->getPersonalInfo()->getIDNumber() == IDnumber)
        {
            std::cout << "Delete customer\n";
            room->displayInformation();
            delete room->getCustomer();
            room->setCustomer(nullptr);
        }
    }
}