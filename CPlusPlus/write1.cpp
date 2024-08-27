
#include <iostream>
#include <fstream>  // Include the file stream library

using namespace std;

int main() {
    ofstream outFile("example1.txt");  // Create an output file stream and open "example.txt"

    if (outFile.is_open()) {  // Check if the file is open
        outFile << "Hello, World!\n";  // Write to the file
        outFile << "This is a basic example of file I/O in C++.\n";
        outFile.close();  // Close the file
        cout << "Writing to file completed." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    return 0;
}
