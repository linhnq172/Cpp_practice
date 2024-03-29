#include <iostream>
#include <memory>
#include "ComplexController.h"

int main()
{
    std::cout << "Hello Complex\n";

    ComplexModel model = ComplexModel(3.0, 5.0);
    ComplexView view = ComplexView();

    // std::unique_ptr<ComplexController> controller(new ComplexController(model, view)); 
    auto controller = std::make_unique<ComplexController>(ComplexController(model, view)); // since C++14

    controller->updateView();
    std::cout << '\n';
    controller->setModel(ComplexModel(3));
    controller->updateView();

    return 0;
}