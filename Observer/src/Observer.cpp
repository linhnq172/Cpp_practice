#include "Observer.h"

void Observer::update()
{
    std::cout << "Message for " << domain << ": " << subject->getMessage() << "\n";
}