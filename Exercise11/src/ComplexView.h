#ifndef _COMPLEX_VIEW_H_
#define _COMPLEX_VIEW_H_
#include "ComplexModel.h"

class ComplexView
{
public:
    ComplexView(){};
    ~ComplexView(){};
    void display(const ComplexModel &complexModel);
};

#endif /* _COMPLEX_VIEW_H_ */