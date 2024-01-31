#ifndef _HOTEL_H_
#define _HOTEL_H_
#include "Room.h"
#include <vector>

class Hotel
{
public:
    Hotel() = default;
    Hotel(int totalRoom) : totalRoom(totalRoom)
    {
        rooms.resize(totalRoom);
        for (int i = 0; i < totalRoom; i++)
        {
            rooms.at(i) = new Room(100 + i);
            if (i % 7 == 0)
            {
                rooms.at(i)->setRoomType(roomType::typeA);
            }
            else if (i % 5 == 0)
            {
                rooms.at(i)->setRoomType(roomType::typeB);
            }
        }
    }
    ~Hotel()
    {
        for (auto room : rooms)
        {
            if (room != nullptr)
            {
                delete room;
                room = nullptr;
            }
        }
    }

    void setTotalRoom(int x)
    {
        totalRoom = x;
    }

    int getTotalRoom() const
    {
        return totalRoom;
    }

    std::vector<Room *> getRooms()
    {
        return rooms;
    }

    void displayInformation();
    void addCustomer(Customer *customer);
    void deleteCustomer(const std::string &IDnumber);

private:
    int totalRoom = 0;
    std::vector<Room *> rooms{};
};

#endif /* _HOTEL_H_ */