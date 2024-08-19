#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

namespace Captcha {
    int generateCode() {
        // Generate a random 6-digit code
        return 100000 + rand() % 900000;
    }

    bool validateCode(int generatedCode, int userInput) {
        // Check if the input matches the generated code
        return userInput == generatedCode;
    }
}

int main() {

while(true){
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate the code using the Captcha namespace
    int generatedCode = Captcha::generateCode();

    // Output the generated code
    cout << "Generated Code: " << generatedCode << endl;

    // Prompt user to enter the code
    int userInput;
    cout << "Please enter the code: ";
    cin >> userInput;

    // Validate the code
    if (Captcha::validateCode(generatedCode, userInput)) {
        cout << "Successful" << endl;
    } else {
        cout << "Failed: The code you entered is incorrect." << endl;
    }
    }

    return 0;
}

