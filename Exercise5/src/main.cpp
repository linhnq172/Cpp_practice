#include <iostream>
#include "Hotel.h"


int main() {

    Person* p = new Person("Lucas V", 19,"001201028074");
    Person* p1 = new Person("Jota H", 21,"004230028276");
    Customer* c = new Customer(p, 3, roomType::typeC);
    Customer* c1 = new Customer(p1, 3, roomType::typeB);
    // printf("%p\n", (void*)c);
    
    // Room * r0 = new Room(123);
    // Room * r2 = new Room(132, c);
    // std::cout << "Room\n";
    // r0->displayInformation();
    // r2->displayInformation();
    
    // delete r0;
    // delete r2;

    Hotel* h = new Hotel(20);
    
    h->addCustomer(c);
    h->addCustomer(c1);
    h->displayInformation();

    // h->deleteCustomer("004230028276");
    // h->displayInformation();

    // delete h;
    return 0;
}