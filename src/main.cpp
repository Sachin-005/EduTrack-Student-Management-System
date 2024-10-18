#include <iostream>
#include "StudentManagementSystem.h"

int main() {
    StudentManagementSystem sms;
    int choice;

    while (true) {
        std::cout << "\n1. Add Student\n2. View Students\n3. Delete Student\n4. Undo Last Action\n5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            int id, age;
            std::string name;
            double grade;
            std::cout << "Enter ID, Name, Age, Grade: ";
            std::cin >> id >> name >> age >> grade;
            sms.addStudent(id, name, age, grade);
        } else if (choice == 2) {
            sms.viewStudents();
        } else if (choice == 3) {
            int id;
            std::cout << "Enter Student ID to delete: ";
            std::cin >> id;
            sms.deleteStudent(id);
        } else if (choice == 4) {
            sms.undoLastAction();
        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
