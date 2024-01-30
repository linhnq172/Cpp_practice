#include "Department.h"
#include "InServiceStudent.h"

int Department::getTotalRegularStudents() const
{
    int total = 0;
    for (auto student : students)
    {
        if (student->isRegularStudent())
        {
            total++;
        }
    }
    return total;
}

std::vector<Student *> Department::getInServiceStudentsInLocation(const std::string &location)
{
    std::vector<Student *> inServiceStudents{};
    for (auto student : students)
    {
        if (student->isRegularStudent())
        {
            continue;
        }
        if (dynamic_cast<InServiceStudent *>(student)->getLocation() == location)
        {
            inServiceStudents.push_back(student);
        }
    }
    return inServiceStudents;
}

Student *Department::getHighestEntryScoreStudent() const
{
    Student *highestEntryScoreStudent = students.front();
    for (auto student : students)
    {
        if (highestEntryScoreStudent->getEntryScore() < student->getEntryScore())
        {
            highestEntryScoreStudent = student;
        }
    }
    return highestEntryScoreStudent;
}

std::vector<Student *> Department::getLatestSemesterHighGPAStudents() const
{
    std::vector<Student *> latestSemesterHighGPAStudents{};
    for (auto student : students)
    {
        double latestSemesterGPA = student->getResults().back()->getGPA();
        if (latestSemesterGPA >= 8.0)
        {
            latestSemesterHighGPAStudents.push_back(student);
        }
    }
    return latestSemesterHighGPAStudents;
}

Student *Department::getHighestGPAStudent() const
{
    Student *highestGPAStudent = students.front();
    for (auto student : students)
    {
        if (highestGPAStudent->getHighestGPA() < student->getHighestGPA())
        {
            highestGPAStudent = student;
        }
    }
    return highestGPAStudent;
}
