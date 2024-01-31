#ifndef _INTERN_H_
#define _INTERN_H_
#include "Employee.h"

class Intern : public Employee
{
public:
    Intern() : Employee(), major(""), semester(0), universityName("")
    {
        employeeType = EmployeeType::intern;
    };

    Intern(std::string id, std::string name, std::string date,
           std::string phone, std::string email, EmployeeType type,
           std::vector<Certificate> certificates, std::string major,
           int semester, std::string universityName)
        : Employee(id, name, date, phone, email, type, certificates),
          major(major), semester(semester), universityName(universityName){};

    Intern(const Intern &other) : Employee(other)
    {
        major = other.major;
        semester = other.semester;
        universityName = other.universityName;
    }

    const std::string &getMajor() const { return major; }
    int getSemester() const { return semester; }
    const std::string &getUniversityName() const { return universityName; }

    void setMajor(const std::string &major) { this->major = major; }
    void setSemester(const int semester) { this->semester = semester; }
    void setUniversityName(const std::string &name) { universityName = name; }

    void showInfo() override;
    void modifyInfo() override;

private:
    std::string major;
    int semester;
    std::string universityName;
};

#endif /* _INTERN_H_ */