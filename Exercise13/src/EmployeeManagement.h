#ifndef _EMPLOYEE_MANAGEMENT_
#define _EMPLOYEE_MANAGEMENT_
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"

class EmployeeManagement {
public:
    EmployeeManagement() : employees() {};
    EmployeeManagement(std::vector<Employee* > employees) : employees(employees) {};
    EmployeeManagement(const EmployeeManagement& other) {
        employees = other.employees;
    }
    ~EmployeeManagement() {
        for (auto employee : employees) {
            delete employee;
        }
    }

    std::vector<Employee* > getEmployees() const {
        return employees;
    }
    void setEmployees(std::vector<Employee*>& employees) {
        this->employees = employees;
    }

    void addEmployee(Employee* employee);
    void modifyEmployeeInfo(std::string id);
    void deleteEmployee(std::string id);
    std::vector<Experience* > getExperiences() const;
    std::vector<Fresher* > getFreshers() const;
    std::vector<Intern* > getInterns() const;

private:
    std::vector<Employee* > employees {};
};

#endif /* _EMPLOYEE_MANAGEMENT_ */