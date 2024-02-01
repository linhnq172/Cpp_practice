#include "ComplexModel.h"

std::ostream &operator<<(std::ostream &os, const ComplexModel &complexModel)
{
    if (0.0 == complexModel.imaginary)
        os << complexModel.real;
    else if (0.0 == complexModel.real)
        os << complexModel.imaginary << "i";
    else
        os << complexModel.real << "+" << complexModel.imaginary << "i";
    return os;
}