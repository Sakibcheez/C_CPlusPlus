#include <iostream>
#include "complex.h"
// task 2 lab 3

using namespace std;

int main()
{
    Complex a(3.5, 1.5), b(3.5, 1.5);

    cout << "Add\n" ;

    Complex temp = a+b;

    temp.Print();

        cout << " " ;
    cout << "Sub\n" ;

    temp = a-b;
    temp.Print();

        cout << "\nmulti\n" ;
    temp = a*b;
    temp.Print();

    cout << endl;

    if(a != b)
        cout << "a is not equal to b" << endl;
    else
        cout << "a is equal to b" << endl;
}
