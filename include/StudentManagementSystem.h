#ifndef STUDENTMANAGEMENTSYSTEM_H
#define STUDENTMANAGEMENTSYSTEM_H

#include <vector>
#include <stack>
#include "Student.h"

class StudentManagementSystem {
public:
    void addStudent(int id, const std::string &name, int age, double grade);
    void viewStudents() const;
    void deleteStudent(int id);
    void undoLastAction();

private:
    std::vector<Student> students;
    std::stack<std::vector<Student>> history;
};

#endif // STUDENTMANAGEMENTSYSTEM_H
