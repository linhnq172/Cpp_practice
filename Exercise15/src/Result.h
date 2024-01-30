#ifndef _RESULT_H_
#define _RESULT_H_

class Result
{
public:
    Result(int semester, double gpa) : semester(semester), GPA(gpa) {}

    // getter and setter methods for semester and GPA
    int getSemester() const { return semester; }
    void setSemester(int semester) { this->semester = semester; }
    double getGPA() const { return GPA; }
    void setGPA(const double gpa) { GPA = gpa; }

private:
    int semester;
    double GPA;
};

#endif /* _RESULT_H_ */