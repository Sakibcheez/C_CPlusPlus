#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
using namespace std;

class Student
{
private:
    string name;
    int id;
    int score;
    vector<string> questions;
    vector<string> answers;
    vector<string> correctAnswers;

public:
    Student(string name, int id);
    void takeExam();
    void calculateScore();
    void displayResult();
};

// Helper function declaration
string toLowerCase(string str);

#endif
