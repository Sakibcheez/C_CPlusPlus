#include <iostream>
using namespace std;

int main() {

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;

    string txt1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt1 string is: " << txt1.size();
    cout << endl;

    string myString = "Hello";
    cout << myString[0];
    // Outputs H
cout << endl;
  //  To print the last character of a string

string myString1 = "Hello";
cout << myString1[myString1.length() - 1];
// Outputs o

cout << endl ;
// Cgange string character

    string myString2 = "Hello";
    myString2[0] = 'J';
    cout << myString2;
// Outputs Jello instead of Hello




}
