#ifndef _I_OBSERVER_H_
#define _I_OBSERVER_H_

class IObserver
{
public:
    virtual void update() = 0;
    virtual ~IObserver(){};
};

#endif /* _I_OBSERVER_H_ */