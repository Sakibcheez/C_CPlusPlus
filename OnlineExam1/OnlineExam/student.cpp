#include "student.h"
#include <iostream>
#include <algorithm>  // for transform
#include <cctype>     // for tolower
using namespace std;

// Helper function to convert a string to lowercase
string toLowerCase(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

Student::Student(string name, int id)
{
    this->name = name;
    this->id = id;
    this->score = 0;

    // Sample exam questions and correct answers
    questions.push_back("Q1: What is 2 + 2?");
    correctAnswers.push_back("4");

    questions.push_back("Q2: What is the capital of France?");
    correctAnswers.push_back("Paris");

    questions.push_back("Q3: What is the output of 2 * 5?");
    correctAnswers.push_back("10");
}

void Student::takeExam()
{
    string answer;
    for (size_t i = 0; i < questions.size(); i++)
    {
        cout << questions[i] << endl;
        cout << "Your Answer: ";
        cin >> answer;
        answers.push_back(answer);
    }
    calculateScore();
}

void Student::calculateScore()
{
    for (size_t i = 0; i < answers.size(); i++)
    {
        // Convert both the answer and correct answer to lowercase
        if (toLowerCase(answers[i]) == toLowerCase(correctAnswers[i]))
        {
            score += 5;  // Each question is worth 10 points
        }
    }
}

void Student::displayResult()
{
    cout << "\n--- Exam Result ---" << endl;
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Score: " << score << "/15" << endl;
}
