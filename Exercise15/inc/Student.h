#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
#include <vector>
#include "Result.h"

class Student
{
public:
    Student(){};
    Student(std::string id, std::string name, std::string dob, int year,
            double score, std::vector<Result *> res)
        : studentID(id), fullName(name), dateOfBirth(dob), entryYear(year),
          entryScore(score), results(res){};
    Student(const Student &other)
    {
        studentID = other.studentID;
        fullName = other.fullName;
        dateOfBirth = other.dateOfBirth;
        entryYear = other.entryYear;
        entryScore = other.entryScore;
        results = other.results;
    }
    virtual ~Student()
    {
        for (auto result : results)
        {
            delete result;
        }
    }

    const std::string &getStudentID() const { return studentID; }
    void setStudentID(const std::string &id) { studentID = id; }

    const std::string &getFullName() const { return fullName; }
    void setFullName(const std::string &name) { fullName = name; }

    const std::string &getDateOfBirth() const { return dateOfBirth; }
    void setDateOfBirth(const std::string &dob) { dateOfBirth = dob; }

    int getEntryYear() const { return entryYear; }
    void setEntryYear(int year) { entryYear = year; }

    double getEntryScore() const { return entryScore; }
    void setEntryScore(double score) { entryScore = score; }

    std::vector<Result *> getResults() const { return results; }
    void setResults(std::vector<Result *> res) { results = res; }

    bool isRegularStudent();

    double getGPA(const int semester) const;

    double getHighestGPA() const;

protected:
    std::string studentID;
    std::string fullName;
    std::string dateOfBirth;
    int entryYear;
    double entryScore;
    std::vector<Result *> results;
};

#endif /* _STUDENT_H_ */