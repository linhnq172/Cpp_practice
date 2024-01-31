#include "Room.h"

void Room::displayInformation()
{
    std::cout << "Room ID: " << roomID;
    std::string str_type = type == roomType::typeA ? "type A"
                                                   : (type == roomType::typeB ? "type B" : "type C");
    std::cout << " - Type: " << str_type;
    if (customer != nullptr)
    {
        std::cout << "\n";
        customer->displayInformation();
    }
    else
    {
        std::cout << " - available\n";
    }
}