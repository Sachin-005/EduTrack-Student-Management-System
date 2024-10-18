#include <iostream>
#include "StudentManagementSystem.h"

void StudentManagementSystem::addStudent(int id, const std::string &name, int age, double grade) {
    history.push(students);
    students.push_back({id, name, age, grade});
    std::cout << "Student added successfully!\n";
}

void StudentManagementSystem::viewStudents() const {
    if (students.empty()) {
        std::cout << "No students found!\n";
    } else {
        for (const auto &student : students) {
            std::cout << "ID: " << student.id << ", Name: " << student.name
                      << ", Age: " << student.age << ", Grade: " << student.grade << "\n";
        }
    }
}

void StudentManagementSystem::deleteStudent(int id) {
    history.push(students);
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->id == id) {
            students.erase(it);
            std::cout << "Student deleted successfully!\n";
            return;
        }
    }
    std::cout << "Student with ID " << id << " not found!\n";
}

void StudentManagementSystem::undoLastAction() {
    if (!history.empty()) {
        students = history.top();
        history.pop();
        std::cout << "Undo successful!\n";
    } else {
        std::cout << "No actions to undo!\n";
    }
}
