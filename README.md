# EduTrack - Student Management System

**EduTrack** is a C++-based student management system that allows users to add, view, delete student records, and undo the last action performed. This system is designed for educational institutions to efficiently manage their student records.

## Table of Contents

- [Features](#features)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Compilation and Execution](#compilation-and-execution)
- [Contributing](#contributing)

## Features

- **Add Student**: Register a new student by entering their ID, name, age, and grade.
- **View Students**: Display the list of all registered students.
- **Delete Student**: Remove a student by their ID.
- **Undo Last Action**: Roll back the last action (either adding or deleting a student).

## Technologies Used

- **C++**: The programming language used to develop the entire system.
- **Standard Template Library (STL)**: Utilized for data structures like `vector` and `stack`.

## Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/Sachin-005/EduTrack-Student-Management-System.git
    ```

2. Navigate to the project directory:

    ```bash
    cd EduTrack-Student-Management-System
    ```

## Usage

This student management system provides a simple menu-driven interface for interacting with the system:

1. **Add Student**: Add a student's information (ID, Name, Age, and Grade).
2. **View Students**: View the list of all students.
3. **Delete Student**: Remove a student from the list by their ID.
4. **Undo Last Action**: Undo the last action you performed.
5. **Exit**: Close the program.

## Compilation and Execution

To compile and run the project, follow these steps:

1. **Compile the Code**:
    ```bash
    g++ src/main.cpp src/StudentManagementSystem.cpp -I include/ -o student_management_system
    ```

    This will generate an executable file named `student_management_system`.

2. **Run the Program**:
    ```bash
    ./student_management_system
    ```

The program will now prompt you with a menu to add, view, delete students, undo an action, or exit.

## Contributing

Contributions are welcome! If you would like to contribute to this project, follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/YourFeatureName`).
3. Commit your changes (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature/YourFeatureName`).
5. Open a pull request.
