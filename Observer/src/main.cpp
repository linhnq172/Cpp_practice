#include <iostream>
#include "Subject.h"
#include "Observer.h"

int main() {
    std::cout << "Hello C++ Observers\n";
    Subject* subject = new Subject();

    Observer* observer1 = new Observer(subject, "Java");
    Observer* observer2 = new Observer(subject, "Python");
    (void) observer2;
    subject->notify();

    subject->setMessage("Midterm exam");

    (void) observer1;
    
    delete subject;

    return 0;
}