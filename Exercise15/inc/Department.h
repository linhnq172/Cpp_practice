#ifndef _DEPARTMENT_H_
#define _DEPARTMENT_H_
#include "Student.h"
#include <vector>
#include <unordered_map>

class Department
{
public:
    Department(){};
    Department(std::vector<Student *> students, std::string name)
        : students(students), name(name){};
    Department(const Department &other)
    {
        students = other.students;
        name = other.name;
    }
    ~Department()
    {
        for (auto student : students)
        {
            delete student;
        }
    }

    std::vector<Student *> getStudents() const { return students; }
    void setStudents(std::vector<Student *> students)
    {
        this->students = students;
    }
    const std::string &getName() const { return name; }
    void setName(const std::string &name)
    {
        this->name = name;
    }

    int getTotalRegularStudents() const;

    std::vector<Student *> getInServiceStudentsInLocation(const std::string &location);

    Student *getHighestEntryScoreStudent() const;

    std::vector<Student *> getLatestSemesterHighGPAStudents() const;

    Student *getHighestGPAStudent() const;

private:
    std::vector<Student *> students;
    std::string name;
    std::unordered_map<int, int> studentStatistic{};
};

#endif /* _DEPARTMENT_H_ */