#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include <iostream>
#include <vector>
#include "IObserver.h"

class Subject
{
public:
    Subject(){};
    ~Subject();
    void attach(IObserver *observer) { observers.push_back(observer); }
    void detach(IObserver *observer);
    void setMessage(const std::string &message);
    const std::string &getMessage() const;
    void notify();

private:
    std::vector<IObserver *> observers {};
    std::string message = "Empty";
};

#endif /* _SUBJECT_H_ */