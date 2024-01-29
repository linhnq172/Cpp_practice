#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>

class Person
{
public:
    Person() = delete;
    Person(std::string fullName, int age, std::string IDNumber);
    Person(std::string IDNumber)
        : fullName(""), age(0), IDNumber(IDNumber) {}
    ~Person() = default;

    const std::string &getFullName() const
    {
        return fullName;
    }

    void setFullName(const std::string &fullName)
    {
        this->fullName = fullName;
    }

    int getAge() const
    {
        return age;
    }

    void setAge(const int age)
    {
        this->age = age;
    }

    const std::string &getIDNumber() const
    {
        return IDNumber;
    }

    void setIDNumber(const std::string &IDNumber)
    {
        this->IDNumber = IDNumber;
    }

    void displayInformation();

private:
    std::string fullName;
    int age;
    std::string IDNumber;
};

#endif /* _PERSON_H_ */