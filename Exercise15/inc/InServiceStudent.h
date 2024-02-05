#ifndef _IN_SERVICE_STUDENT_H_
#define _IN_SERVICE_STUDENT_H_
#include "Student.h"

class InServiceStudent : public Student
{
public:
    InServiceStudent(){};
    InServiceStudent(std::string id, std::string name, std::string dob, int year,
                     double score, std::vector<Result *> res, std::string location)
        : Student(id, name, dob, year, score, res), location(location){};

    InServiceStudent(const InServiceStudent &other) : Student(other)
    {
        location = other.location;
    };

    ~InServiceStudent(){};

    const std::string getLocation() const { return location; }
    void setLocation(const std::string &location)
    {
        this->location = location;
    }

private:
    std::string location;
};

#endif /* _IN_SERVICE_STUDENT_H_ */