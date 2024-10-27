#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;
class StudentInfo {
public:
    StudentInfo();
    StudentInfo(int id, std::string name, float cgpa);

    void Print();

    bool operator==(const StudentInfo& other) const;
    bool operator!=(const StudentInfo& other) const;

private:
    int studentID;
    string studentName;
    float studentCGPA;
};

#endif // STUDENTINFO_H_INCLUDED

