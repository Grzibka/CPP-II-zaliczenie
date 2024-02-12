#include <fstream>
#include <vector>
#include <string>

class DatabaseManager {
public:
    DatabaseManager();
    void addStudent(const std::string& studentData);
    void displayStudents();
    void addDiscipline(const std::string& disciplineData);
    void displayDisciplines();

private:
    std::string studentsFile = "students.txt";
    std::string disciplinesFile = "disciplines.txt";

    void appendToFile(const std::string& filename, const std::string& data);
    void readFromFile(const std::string& filename);
};
