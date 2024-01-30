#include <iostream>
#include "Intern.h"
#include "Fresher.h"
#include "Experience.h"

int main()
{
    std::cout << "Employee management\n";
    std::vector<Employee*> employees;

    Employee* intern = new Intern();
    intern->setID("172");
    employees.push_back(intern);
    
    std::vector<Certificate> certificates;
    Employee* seniorIntern = new Intern("777", "Jack", "", "", "", EmployeeType::intern, certificates ,"", 8, "HUST");
    employees.push_back(seniorIntern);

    Employee* fresher = new Fresher();
    fresher->setID("162");
    employees.push_back(fresher);

    Employee* guru = new Experience();
    guru->setID("999");
    employees.push_back(guru);
    
    for (auto employee : employees) {
        employee->showInfo();
    }

    return 0;
}