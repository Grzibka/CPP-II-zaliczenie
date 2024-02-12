#include "Student.h"

Student::Student(const std::string& firstName, const std::string& lastName, double averageGrade, const std::string& studentClass) 
    : firstName(firstName), lastName(lastName), averageGrade(averageGrade), studentClass(studentClass) {}

std::string Student::getFirstName() const { return firstName; }
std::string Student::getLastName() const { return lastName; }
double Student::getAverageGrade() const { return averageGrade; }
std::string Student::getStudentClass() const { return studentClass; }

void Student::setFirstName(const std::string& firstName) { this->firstName = firstName; }
void Student::setLastName(const std::string& lastName) { this->lastName = lastName; }
void Student::setAverageGrade(double averageGrade) { this->averageGrade = averageGrade; }
void Student::setStudentClass(const std::string& studentClass) { this->studentClass = studentClass; }
