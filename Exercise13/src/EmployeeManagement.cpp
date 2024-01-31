#include "EmployeeManagement.h"

void EmployeeManagement::addEmployee(Employee *employee)
{
    employees.push_back(employee);
}

void EmployeeManagement::modifyEmployeeInfo(std::string id)
{
    for (auto employee : employees) {
        if (employee->getID() == id) {
            employee->modifyInfo();
        }
    }
}

void EmployeeManagement::deleteEmployee(std::string id)
{
    for (auto it = employees.begin(); it < employees.end(); it++) {
        if ((*it)->getID() == id) {
            delete (*it);
            employees.erase(it);
        }
    }
}

std::vector<Experience *> EmployeeManagement::getExperiences() const
{
    std::vector<Experience *> experiences {};
    for (auto employee : employees) {
        if (dynamic_cast<Experience* >(employee) != nullptr) {
            experiences.push_back(static_cast<Experience*>(employee));
        }
    }
    return experiences;
}

std::vector<Fresher *> EmployeeManagement::getFreshers() const
{
    std::vector<Fresher *> freshers {};
    for (auto employee : employees) {
        if (dynamic_cast<Fresher* >(employee) != nullptr) {
            freshers.push_back(static_cast<Fresher*>(employee));
        }
    }
    return freshers;
}

std::vector<Intern *> EmployeeManagement::getInterns() const
{
    std::vector<Intern *> interns {};
    for (auto employee : employees) {
        if (dynamic_cast<Intern* >(employee) != nullptr) {
            interns.push_back(static_cast<Intern* >(employee));
        }
    }
    return interns;
}
