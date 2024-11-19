#include <iostream>

using namespace std;

class studentInfo{

public:
    studentInfo();
    studentInfo(int, string, float);
    bool operator!=(studentInfo);
    void print();

private:
    int id;
    string name;
    float cgpa;

};

