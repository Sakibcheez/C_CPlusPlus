#include <iostream>
using namespace std;

int main() {
    // The + operator can be used between strings to add them together to make a new string.
    //This is called concatenation:
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName << endl ;

    string firstName1 = "John";
    string lastName1  = "Doe";
    string fullName1 = firstName1 + " " + lastName1;
    cout << fullName1 << endl ;

    string firstName2 = "John ";
    string lastName2 = "Doe";
    string fullName3 = firstName2.append(lastName2);
    cout << fullName3 << endl ;

    string x = "10";
    string y = "20";
    string z = x + y;   // z will be 1020 (a string)
    cout << z ;

    return 0;
}
