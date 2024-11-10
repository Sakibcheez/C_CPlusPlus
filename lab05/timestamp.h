#include <iostream>
using namespace std;

class timeStamp
{
public:
    timeStamp();
    timeStamp(int, int, int);
    bool operator>(timeStamp);
    bool operator<(timeStamp);
    bool operator!=(timeStamp);
    void print();

private:
    int ss, mm, hh;
};
