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

cout << endl ;

// at() dunction

string myString4 = "Hello";
cout << myString4 << endl; // Outputs Hello

cout << myString4.at(0);  // First character
cout << myString4.at(1);  // Second character
cout << myString4.at(myString.length() - 1) << endl;  // Last character


myString4.at(0) = 'J';
cout << myString4;  // Outputs Jello

cout << endl;

string firstName5;
cout << "Type your first name: ";
cin >> firstName5; // get user input from the keyboard // space pele ney nah
cout << "Your name is: " << firstName5;

// Type your first name: John ahmed
// Your name is: John

cout << endl ;


 // Full string with white space
    string fullName6;
    cin.ignore(); // This clears the newline character left in the input buffer
    cout << "Type your full name: ";
    getline(cin, fullName6);
    cout << endl;
    cout << "Your name is: " << fullName6;

// Type your full name: John Doe
// Your name is: John Doe


}
