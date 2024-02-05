#ifndef _UNIVERSITY_H_
#define _UNIVERSITY_H_
#include "Department.h"
#include <vector>

class University
{
public:
    University(){};
    University(std::vector<Department *> departments) : departments(departments){};
    University(const University &other)
    {
        departments = other.departments;
    }
    ~University()
    {
        for (auto department : departments)
        {
            delete department;
        }
    };

private:
    std::vector<Department *> departments{};
};

#endif /* _UNIVERSITY_H_ */