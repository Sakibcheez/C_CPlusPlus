#include <iostream>
using namespace std;

int main() {
    // The + operator can be used between strings to add them together to make a new string.
    //This is called concatenation:
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName;

    return 0;
}
