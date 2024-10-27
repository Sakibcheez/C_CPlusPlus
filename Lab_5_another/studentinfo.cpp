#include "studentinfo.h"
#include <iostream>

using namespace std;

studentInfo::studentInfo()
{
    studentID=0;
    studentName=" ";
    studentCGPA=0.0;

}
studentInfo::StudentInfo(int id, std::string name,float cgpa)
{
    this.studentID=id;
    this.studentName=name;
    this.studentCGPA=cgpa;
}

void studentInfo::print()
{
    cout << this.studentID << " " << this.studentName << " " << this.studentCGPA << endl;
}

bool studentInfo::operator ==(const studentInfo&other)const{
return studentID==other.studentID;
}

