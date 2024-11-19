#include "studentinfo.h"

studentInfo::studentInfo()
{
    this->id = 0;
    name = " ";
    cgpa = 0;
}

// The -> operator in C++ is called the member access operator or arrow operator

studentInfo::studentInfo(int id, string name, float cgpa)
{
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}

void studentInfo::print()
{
    cout << id << ", " << name << ", " << cgpa << endl;
}

bool studentInfo::operator!=(studentInfo s)
{
    if(id != s.id)
        return true;
    else return false;
}

