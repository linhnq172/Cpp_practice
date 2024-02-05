#ifndef _ROOM_H_
#define _ROOM_H_
#include "Customer.h"

class Room
{
public:
    Room(int roomID, Customer *customer)
        : roomID(roomID), customer(customer) {}
    Room(int roomID) : roomID(roomID) {}
    ~Room()
    {
        if (customer != nullptr)
        {
            delete customer;
            customer = nullptr;
        }
    }

    const roomType &getRoomType() const
    {
        return type;
    }

    void setRoomType(const roomType &type)
    {
        this->type = type;
    }

    int getRoomID() const
    {
        return roomID;
    }

    void setRoomID(const int roomID)
    {
        this->roomID = roomID;
    }

    Customer *getCustomer() const
    {
        return customer;
    }

    void setCustomer(Customer *customer)
    {
        this->customer = customer;
    }

    void displayInformation();

private:
    roomType type = roomType::typeC;
    int roomID = 0;
    Customer *customer{nullptr};
};

#endif /* _ROOM_H_ */