#include <iostream>
#include "dynarr.cpp"

using namespace std;

int main()
{
    dynArr<double> obj1(3);

    obj1.setValue(0, 10.5);
    obj1.setValue(1, 11.5);
    obj1.setValue(2, 12.5);

    for(int i=0; i<3; i++)
        cout << obj1.getValue(i) << " ";

    cout << endl;


    dynArr<char> obj2(4);

    obj2.setValue(0, 'a');
    obj2.setValue(1, 'b');
    obj2.setValue(2, 'c');
    obj2.setValue(3, 'd');

    for(int i=0; i<4; i++)
        cout << obj2.getValue(i) << " ";

    cout << endl;

}
