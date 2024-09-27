#include <iostream>
#include "box.h"

using namespace std;

int main()
{
    Box a ;
    cout << a.getVolume();
    cout << endl;

    Box b(2,1,5);
    cout << b.getVolume();

    return 0;
}
