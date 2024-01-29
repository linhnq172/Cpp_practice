#ifndef _HOTEL_H_
#define _HOTEL_H_
#include "Room.h"

class Hotel
{
public:
    Hotel() = default;
    Hotel(int totalRoom) : totalRoom(totalRoom)
    {
        rooms = (Room **)malloc(totalRoom * sizeof(Room *));
        for (int i = 0; i < totalRoom; i++)
        {
            *(rooms + i) = new Room(100 + i);
            if (i % 7 == 0)
            {
                (*(rooms + i))->setRoomType(roomType::typeA);
            }
            else if (i % 5 == 0)
            {
                (*(rooms + i))->setRoomType(roomType::typeB);
            }
        }
    }
    ~Hotel()
    {
        for (int i = 0; i < totalRoom; i++)
        {
            delete *(rooms + i);
        }
        delete rooms;
    }

    void displayInformation();
    void addCustomer(Customer *customer);
    void deleteCustomer(const std::string &IDnumber);

private:
    int totalRoom = 0;
    Room **rooms{nullptr};
};

#endif /* _HOTEL_H_ */