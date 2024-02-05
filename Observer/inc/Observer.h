#ifndef _OBSERVER_H_
#define _OBSERVER_H_
#include "IObserver.h"
#include "Subject.h"

class Observer : public IObserver
{
public:
    Observer(Subject *subject, const std::string domain) : subject(subject), domain(domain)
    {
        subject->attach(this);
    }
    virtual ~Observer()
    {
        subject->detach(this);
    }
    void update() override;

private:
    Subject *subject;
    std::string domain{};
};
#endif /* _OBSERVER_H_ */