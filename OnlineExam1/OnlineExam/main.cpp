#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    string name;
    int id;

    cout << "Welcome to the Online Exam System!" << endl;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your student ID: ";
    cin >> id;

    // Create a Student object dynamically
    Student* student = new Student(name, id);

    // Taking the exam
    student->takeExam();

    // Display the result
    student->displayResult();

    // Clean up dynamically allocated memory
    delete student;

    return 0;
}
