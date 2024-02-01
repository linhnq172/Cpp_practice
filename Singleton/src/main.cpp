#include <iostream>
#include "Singleton.h"

int main() {
    std::cout << "Singleton C++\n";
    Singleton* first = Singleton::getInstance(101);
    std::cout << "first " << first->getNumber() << '\n';
    Singleton* second = Singleton::getInstance(202);
    std::cout << "second " << second->getNumber();
    delete first;
    first = second = nullptr;
    return 0;
}