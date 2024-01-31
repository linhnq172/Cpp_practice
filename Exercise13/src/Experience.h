#ifndef _EXPERIENCE_H_
#define _EXPERIENCE_H_
#include "Employee.h"

class Experience : public Employee
{
public:
    Experience() : Employee(), expInYear(0), proSkill("")
    {
        employeeType = EmployeeType::experience;
    };

    Experience(std::string id, std::string name, std::string date,
               std::string phone, std::string email, EmployeeType type,
               std::vector<Certificate> certificates, int expInYear,
               std::string proSkill)
        : Employee(id, name, date, phone, email, type, certificates),
          expInYear(expInYear), proSkill(proSkill){};

    Experience(const Experience &other) : Employee(other)
    {
        expInYear = other.expInYear;
        proSkill = other.proSkill;
    }

    int getExpInYear() const { return expInYear; }
    const std::string &getProSkill() const { return proSkill; }

    void setExpInYear(const int expInYear) { this->expInYear = expInYear; }
    void setProSkill(const std::string &skill) { proSkill = skill; }

    void showInfo() override;
    void modifyInfo() override;

private:
    int expInYear;
    std::string proSkill;
};

#endif /* _EXPERIENCE_H_ */