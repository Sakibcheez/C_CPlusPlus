#include "timestamp.h"

timeStamp::timeStamp()
{
    ss = mm = hh = 0;
}

timeStamp::timeStamp(int seconds, int mins, int hours)
{
    ss = seconds;
    mm = mins;
    hh = hours;
}

void timeStamp::print()
{
    cout << ss << ":" << mm << ":" << hh << endl;
}

bool timeStamp::operator>(timeStamp t)
{
    if(this->hh > t.hh)
        return true;
    else
        return false;
}

bool timeStamp::operator<(timeStamp t)
{
    if(this->hh < t.hh)
        return true;
    else
        return false;
}

bool timeStamp::operator!=(timeStamp t)
{
    if(this->hh != t.hh)
        return true;
    else
        return false;
}
