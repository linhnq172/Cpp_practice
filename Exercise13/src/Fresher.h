#ifndef _FRESHER_H_
#define _FRESHER_H_
#include "Employee.h"

class Fresher : public Employee
{
public:
    Fresher() : Employee(), graduationDate(""), graduationRank(0), education("")
    {
        employeeType = EmployeeType::fresher;
    };

    Fresher(std::string id, std::string name, std::string date,
            std::string phone, std::string email, EmployeeType type,
            std::vector<Certificate> certificates, std::string graduationDate,
            char graduationRank, std::string education)
        : Employee(id, name, date, phone, email, type, certificates),
          graduationDate(graduationDate), graduationRank(graduationRank),
          education(education){};

    Fresher(const Fresher &other) : Employee(other)
    {
        graduationDate = other.graduationDate;
        graduationRank = other.graduationRank;
        education = other.education;
    }

    const std::string &getGraduationDate() const { return graduationDate; }
    char getGraduationRank() const { return graduationRank; }
    const std::string &getEducation() const { return education; }

    void setGraduationDate(const std::string &graduationDate)
    {
        this->graduationDate = graduationDate;
    }
    void setGraduationRank(const char graduationRank)
    {
        this->graduationRank = graduationRank;
    }
    void setEducation(const std::string &name) { education = name; }

    void showInfo() override;

private:
    std::string graduationDate;
    char graduationRank;
    std::string education;
};

#endif /* _FRESHER_H_ */