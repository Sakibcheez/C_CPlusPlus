#include <iostream>
#include <algorithm> // For sort function
#include <string>    // For string functions

using namespace std;

int main() {
    string str;

    // Input string from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Sorting the string using the sort function
    sort(str.begin(), str.end());

    // Output the sorted string
    cout << "Sorted string: " << str << endl;

    return 0;
}

