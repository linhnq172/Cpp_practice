#include "ComplexView.h"

void ComplexView::display(const ComplexModel &complexModel)
{
    if (0.0 == complexModel.getImaginary())
        std::cout << complexModel.getReal();
    else if (0.0 == complexModel.getReal())
        std::cout << complexModel.getImaginary() << "i";
    else
        std::cout << complexModel.getReal() << "+" << complexModel.getImaginary() << "i";
}
