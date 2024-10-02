#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int rows, cols;

    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Allocate a 2D character array
    char** array = new char*[rows]; // Allocate array of row pointers
    for (int i = 0; i < rows; i++) {
        array[i] = new char[cols]; // Allocate each row
    }

    // Take input for each string
    cout << "Enter " << rows << " strings, each up to " << cols - 1 << " characters:" << endl;
    for (int i = 0; i < rows; i++) {
        cin >> array[i]; // Input each string
    }

    // Print the strings
    cout << "You entered:" << endl;
    for (int i = 0; i < rows; i++) {
        cout << array[i] << endl; // Print each string
    }

    // Deallocate the memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i]; // Delete each row
    }
    delete[] array; // Delete the array of row pointers

    return 0;
}
