#include <iostream>
#include "DatabaseManager.h"

int main() {
    DatabaseManager dbManager;

    std::string firstName, lastName, studentClass, disciplineName;
    double averageGrade;
    int disciplineId, choice;
    bool running = true;

    while (running) {
        std::cout << "\nMenu:\n"
                  << "1. Dodaj Studenta\n"
                  << "2. Wyswietl Studentow\n"
                  << "3. Dodaj dyscypline\n"
                  << "4. Wyswietl dyscypliny\n"
                  << "5. Zakoncz\n"
                  << "Wybierz opcje ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Podaj imie ";
                std::cin >> firstName;
                std::cout << "Podaj naziwsko ";
                std::cin >> lastName;
                std::cout << "Podaj srednia ocene ";
                std::cin >> averageGrade;
                std::cout << "Podaj klase ";
                std::cin >> studentClass;
                std::cout << "podaj ID dyscypliny ";
                std::cin >> disciplineId;

                dbManager.addStudent(firstName + " " + lastName + " " + std::to_string(averageGrade) + " " + studentClass + " " + std::to_string(disciplineId));
                break;
            case 2:
                dbManager.displayStudents();
                break;
            case 3:
                std::cout << "Podaj nazwe dyscypliny ";
                std::cin >> disciplineName;

                dbManager.addDiscipline(disciplineName);
                break;
            case 4:
                dbManager.displayDisciplines();
                break;
            case 5:
                running = false;
                break;
            default:
                std::cout << "Zly wybor, wybierz opcje 1-5" << std::endl;
        }
    }

    return 0;
}
