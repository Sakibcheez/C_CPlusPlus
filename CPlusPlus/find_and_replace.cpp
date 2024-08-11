#include <iostream>
#include <string>

void findAndReplace(std::string &str, const std::string &oldWord, const std::string &newWord) {
    size_t pos = str.find(oldWord);

    // Repeat till end is reached
    while (pos != std::string::npos) {
        // Replace the word
        str.replace(pos, oldWord.length(), newWord);

        // Find the next occurrence of the word
        pos = str.find(oldWord, pos + newWord.length());
    }
}

int main() {
    std::string str, oldWord, newWord;

    // User input for the string
    std::cout << "Enter the original string: ";
    std::getline(std::cin, str);

    // User input for the word to find
    std::cout << "Enter the word to find: ";
    std::getline(std::cin, oldWord);

    // User input for the replacement word
    std::cout << "Enter the replacement word: ";
    std::getline(std::cin, newWord);

    // Display the original string
    std::cout << "\nOriginal String: " << str << std::endl;

    // Perform find and replace
    findAndReplace(str, oldWord, newWord);

    // Display the modified string
    std::cout << "Modified String: " << str << std::endl;

    return 0;
}

