#ifndef _COMPLEX_CONTROLLER_H_
#define _COMPLEX_CONTROLLER_H_
#include "ComplexModel.h"
#include "ComplexView.h"

class ComplexController
{
public:
    ComplexController(const ComplexModel &model, const ComplexView &view)
        : complexModel(model), complexView(view){};
    ~ComplexController(){};

    void setModel(const ComplexModel &model);

    void updateView();

private:
    ComplexModel complexModel;
    ComplexView complexView;
};

#endif /* _COMPLEX_CONTROLLER_H_ */