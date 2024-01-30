#include "Student.h"
#include "RegularStudent.h"

bool Student::isRegularStudent()
{
    if (dynamic_cast<RegularStudent *>(this) != nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double Student::getGPA(const int semester) const
{
    for (auto result : results)
    {
        if (semester == result->getSemester())
        {
            return result->getGPA();
        }
    }
    return 0.0;
}

double Student::getHighestGPA() const
{
    double highestGPA = 0.0;
    for (auto result : results)
    {
        double GPA = result->getGPA();
        if (GPA > highestGPA)
        {
            highestGPA = GPA;
        }
    }
    return highestGPA;
}
