#ifndef _REGULAR_STUDENT_H_
#define _REGULAR_STUDENT_H_
#include "Student.h"

class RegularStudent : public Student
{
public:
    RegularStudent(){};
    RegularStudent(std::string id, std::string name, std::string dob, int year,
                   double score, std::vector<Result *> res)
        : Student(id, name, dob, year, score, res){};
    RegularStudent(const RegularStudent &other) : Student(other){};
    ~RegularStudent(){};
};

#endif /* _REGULAR_STUDENT_H_ */