#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string& firstName, const std::string& lastName, double averageGrade, const std::string& studentClass);

    std::string getFirstName() const;
    std::string getLastName() const;
    double getAverageGrade() const;
    std::string getStudentClass() const;

    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setAverageGrade(double averageGrade);
    void setStudentClass(const std::string& studentClass);

private:
    std::string firstName;
    std::string lastName;
    double averageGrade;
    std::string studentClass;
};

#endif // STUDENT_H
