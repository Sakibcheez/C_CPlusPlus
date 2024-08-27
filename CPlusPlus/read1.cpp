#include <iostream>
#include <fstream>  // Include the file stream library
#include <string>

using namespace std;

int main() {
    ifstream inFile("example1.txt");  // Create an input file stream and open "example.txt"
    string line;

    if (inFile.is_open()) {  // Check if the file is open
        while (getline(inFile, line)) {  // Read each line from the file
            cout << line << endl;  // Print the line to the console
        }
        inFile.close();  // Close the file
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}
