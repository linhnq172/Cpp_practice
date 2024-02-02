#include "Subject.h"

Subject::~Subject()
{
    for (auto it = observers.begin(); it != observers.end(); it++)
    {
        delete *it;
    }
}

void Subject::detach(IObserver *observer)
{
    for (auto it = observers.begin(); it != observers.end(); it++) {
        if (*it == observer) {
            // observer->update();
            (void)observer;
        }
    }
}

void Subject::setMessage(const std::string &message)
{
    this->message = message;
    notify();
}

const std::string &Subject::getMessage() const
{
    return message;
}

void Subject::notify()
{
    for (auto observer : observers)
    {
        observer->update();
    }
}
