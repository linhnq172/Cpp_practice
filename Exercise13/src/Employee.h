#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include <iostream>
#include "Certificate.h"
#include <vector>

enum class EmployeeType : char
{
    experience = 0,
    fresher = 1,
    intern = 2,
    none = 7
};

class Employee
{
public:
    // Default constructor
    Employee()
        : ID(""), fullName(""), birthday(""), phone(""), email(""),
          employeeType(EmployeeType::none), certificates()
    {
        employeeCount++;
    }

    // Parameterized constructor
    Employee(std::string id, std::string name, std::string date,
             std::string phone, std::string email, EmployeeType type,
             std::vector<Certificate> certificates)
        : ID(id), fullName(name), birthday(date), phone(phone), email(email),
          employeeType(type), certificates(certificates)
    {
        employeeCount++;
    }

    // Copy constructor
    Employee(const Employee &other)
    {
        // Copy the values of the other object
        ID = other.ID;
        fullName = other.fullName;
        birthday = other.birthday;
        phone = other.phone;
        email = other.email;
        employeeType = other.employeeType;
        employeeCount++;
        certificates = other.certificates;
    }

    virtual ~Employee()
    {
        // Decrease the employee count
        employeeCount--;
    };

    // Getters
    const std::string &getID() const { return ID; }
    const std::string &getFullName() const { return fullName; }
    const std::string &getBirthday() const { return birthday; }
    const std::string &getPhone() const { return phone; }
    const std::string &getEmail() const { return email; }
    EmployeeType getEmployeeType() const { return employeeType; }
    static int getEmployeeCount() { return employeeCount; }
    const std::vector<Certificate> &getCertificate() const
    {
        return certificates;
    }

    // Setters
    void setID(const std::string &value) { ID = value; }
    void setFullName(const std::string &value) { fullName = value; }
    void setBirthday(const std::string &value) { birthday = value; }
    void setPhone(const std::string &value) { phone = value; }
    void setEmail(const std::string &value) { email = value; }
    void setEmployeeType(EmployeeType value) { employeeType = value; }
    static void setEmployeeCount(int value) { employeeCount = value; }
    void setCertificate(const std::vector<Certificate> &value)
    {
        certificates = value;
    }

    virtual void showInfo() = 0;

protected:
    std::string ID;
    std::string fullName;
    std::string birthday;
    std::string phone;
    std::string email;
    EmployeeType employeeType;
    static int employeeCount;
    std::vector<Certificate> certificates;
};

#endif /* _EMPLOYEE_H_ */