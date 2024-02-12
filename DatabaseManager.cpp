#include "DatabaseManager.h"
#include <iostream>

DatabaseManager::DatabaseManager() {}

void DatabaseManager::addStudent(const std::string& studentData) {
    appendToFile(studentsFile, studentData);
}

void DatabaseManager::displayStudents() {
    readFromFile(studentsFile);
}

void DatabaseManager::addDiscipline(const std::string& disciplineData) {
    appendToFile(disciplinesFile, disciplineData);
}

void DatabaseManager::displayDisciplines() {
    readFromFile(disciplinesFile);
}

void DatabaseManager::appendToFile(const std::string& filename, const std::string& data) {
    std::ofstream file(filename, std::ios::app);
    if (file.is_open()) {
        file << data << std::endl;
        file.close();
    } else {
        std::cerr << "nie mozna otworzyc pliku " << filename << std::endl;
    }
}

void DatabaseManager::readFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cerr << "nie mozna otworzyc pliku " << filename << std::endl;
    }
}
