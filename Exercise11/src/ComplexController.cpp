#include "ComplexController.h"

void ComplexController::setModel(const ComplexModel &model)
{
    complexModel.setReal(model.getReal());
    complexModel.setImaginary(model.getImaginary());
}

void ComplexController::updateView()
{
    complexView.display(complexModel);
}
