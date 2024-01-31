#include <iostream>
#include "EmployeeManagement.h"

int main()
{
    std::cout << "Employee management\n";
    EmployeeManagement manager = EmployeeManagement();

    Employee *intern = new Intern();
    intern->setID("172");
    manager.addEmployee(intern);

    std::vector<Certificate> certificates {};
    Employee *seniorIntern = new Intern("777", "Jack", "", "", "", EmployeeType::intern, certificates, "", 8, "HUST");
    manager.addEmployee(seniorIntern);

    Employee *fresher = new Fresher();
    fresher->setID("162");
    manager.addEmployee(fresher);

    Employee *guru = new Experience();
    guru->setID("999");
    manager.addEmployee(guru);

    for (auto employee : manager.getEmployees())
    {
        employee->showInfo();
    }

    std::vector<Intern* > interns = manager.getInterns();

    for (auto intern : interns) {
        intern->showInfo();
    }

    std::cout << "Employee count: " << Employee::getEmployeeCount() << "\n";

    return 0;
}